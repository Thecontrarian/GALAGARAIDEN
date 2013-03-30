using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Xml;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Input;
using Microsoft.Xna.Framework.Graphics;
using XnaUtility;

namespace GalagaRadien
{
    class CurveGenerationUtility : BaseDrawableEntity
    {
        private TimeSpan timeSinceSpawn;
        private Curve curveX = new Curve();
        private Curve curveY = new Curve();
        private float span = 5f;
        private KeyboardState KBState;
        private KeyboardState prevKBState;
        private MouseState mouseState;
        private MouseState prevMouseState;
        private List<VertexPositionColor> verts = new List<VertexPositionColor>();
        private Color color = Color.White;

        public CurveGenerationUtility(Game game)
            : base(game)
        {
        }
        public CurveGenerationUtility()
        {

        }

        public override void Initialize()
        {
            base.Initialize();

            //            curveX.Keys.Add(new CurveKey(0,0));
            //            curveY.Keys.Add(new CurveKey(0,0));
            //            curveX.Keys.Add(new CurveKey(span/3f, 30));
            //            curveY.Keys.Add(new CurveKey(span/3f, HeightOfGame-30));
            //            curveX.Keys.Add(new CurveKey(2*span/3f, WidthOfGame-30));
            //            curveY.Keys.Add(new CurveKey(2*span/3f, 30));
            //            curveX.Keys.Add(new CurveKey(span, WidthOfGame));
            //            curveY.Keys.Add(new CurveKey(span, HeightOfGame));
            GetCurve("X.xml", out curveX);
            GetCurve("Y.xml", out curveY);
            timeSinceSpawn = new TimeSpan(0, 0, 0);
            var lastOrDefault = curveX.Keys.LastOrDefault();
            span = lastOrDefault != null ? lastOrDefault.Position : 1f;
            lastOrDefault = curveY.Keys.LastOrDefault();
            if (lastOrDefault != null && lastOrDefault.Position > span)
            {
                span = lastOrDefault.Position;
            }
            timeSinceSpawn = new TimeSpan(0, 0, 0);
            InitializeTransform();
            InitializeEffect();
            InitializePoints();
            //            InitializeLineList();
            InitializeLineStrip();
            //            InitializeTriangleList();
            //            InitializeTriangleStrip();

            rasterizerState = new RasterizerState();
            rasterizerState.FillMode = FillMode.WireFrame;
            rasterizerState.CullMode = CullMode.None;
            Pos = new Vector2();
        }

        public override void Update(GameTime gameTime)
        {
            timeSinceSpawn += gameTime.ElapsedGameTime;

            //            CheckGamePadInput();
            //            CheckKeyboardInput();

            prevMouseState = mouseState;
            mouseState = Mouse.GetState();
            prevKBState = KBState;
            KBState = Keyboard.GetState();
            if (KBState.ClickPress(prevKBState, Keys.L))
            {
                GetCurve("X.xml", out curveX);
                GetCurve("Y.xml", out curveY);
                timeSinceSpawn = new TimeSpan(0, 0, 0);
                var lastOrDefault = curveX.Keys.LastOrDefault();
                span = lastOrDefault != null ? lastOrDefault.Position : 1f;
                lastOrDefault = curveY.Keys.LastOrDefault();
                if (lastOrDefault != null && lastOrDefault.Position > span)
                {
                    span = lastOrDefault.Position;
                }
                InitializeTransform();
                InitializeEffect();
                InitializePoints();
                InitializeLineStrip();
            }
            //
            //            if (mouseState.LeftButton == ButtonState.Pressed &&
            //                prevMouseState.LeftButton == ButtonState.Released)
            //            {
            //                if (KBState.ClickPress(lastKeyboardState,Keys.LeftShift))
            //                {
            //                    curveX.Keys.Clear();
            //                    curveY.Keys.Clear();
            //                    span = -1f;
            //                }
            //                span++;
            //                curveX.Keys.Add(new CurveKey(span,mouseState.X));
            //                curveY.Keys.Add(new CurveKey(span,mouseState.Y));
            //                InitializePoints();
            //            }



            Pos.X = curveX.Evaluate((float)timeSinceSpawn.TotalSeconds % span);
            Pos.Y = curveY.Evaluate((float)timeSinceSpawn.TotalSeconds % span);
            base.Update(gameTime);

        }

        public static void GetCurve(String file, out Curve curve)
        {
            curve = new Curve();
            var reader = new XmlTextReader(file);
            while (reader.Read())
            {
                switch (reader.Name)
                {
                    case "PreLoop":
                        {
                            reader.Read();
                            CurveLoopType preLoop;
                            Enum.TryParse(reader.Value, true, out preLoop);
                            curve.PreLoop = preLoop;
                            reader.Read();
                        }
                        break;
                    case "PostLoop":
                        {
                            reader.Read();
                            CurveLoopType postLoop;
                            Enum.TryParse(reader.Value, true, out postLoop);
                            curve.PostLoop = postLoop;
                            reader.Read();
                        }
                        break;
                    case "Keys":
                        {
                            reader.Read();
                            var str = reader.Value;
                            var keys = str.Split(' ');
                            for (int i = 0; i < (keys.Count() / 5); i++)
                            {
                                CurveContinuity continuity;
                                Enum.TryParse(keys[i * 5 + 4], out continuity);
                                curve.Keys.Add(new CurveKey(
                                                   float.Parse(keys[i * 5]),
                                                   float.Parse(keys[i * 5 + 1]),
                                                   float.Parse(keys[i * 5 + 2]),
                                                   float.Parse(keys[i * 5 + 3]),
                                                   continuity));
                            }
                            reader.Read();
                        }
                        break;
                }
            }
            reader.Close();
        }

        public override void Draw(GameTime gameTime)
        {

//            spriteBatch.DrawString(watch.font,
//                mouseState.X + ", " + mouseState.Y,
//                new Vector2(mouseState.X / 2f + 5f, mouseState.Y / 2f + 5f),
//                Color.White,
//                0f,
//                Vector2.Zero,
//                .5f,
//                SpriteEffects.None,
//                1);
            spriteBatch.Draw(atlasHandler.Texture, Pos / 2, Frames[0], Color.White,
                (float)Math.Atan2(
                Pos.Y - curveY.Evaluate(((float)timeSinceSpawn.TotalSeconds % span) + 0.0001f),
                Pos.X - curveX.Evaluate(((float)timeSinceSpawn.TotalSeconds % span) + 0.0001f)) + MathHelper.PiOver2
                , new Vector2(Frames[0].Width / 2, Frames[0].Height / 2), 1f, SpriteEffects.None, 1f);

            //            if (verts.Count > 0)
            //            {
            //                device.
            //                device.DrawPrimitives<VertexPositionColor>(PrimitiveType.LineStrip,
            //                                                               verts.ToArray(),
            //                                                               0,
            //                                                               verts.Count-1);
            //            }

            foreach (EffectPass pass in basicEffect.CurrentTechnique.Passes)
            {
                pass.Apply();

                //                switch (typeToDraw)
                //                {
                //                    case PrimType.LineList:
                //                        DrawLineList();
                //                        break;
                //                    case PrimType.LineStrip:
                DrawLineStrip();
                //                        break;
                //                    case PrimType.TriangleList:
                //                        GraphicsDevice.RasterizerState = rasterizerState;
                //                        DrawTriangleList();
                //                        break;
                //                    case PrimType.TriangleStrip:
                //                        GraphicsDevice.RasterizerState = rasterizerState;
                //                        DrawTriangleStrip();
                //                        break;
                //                }

            }
            base.Draw(gameTime);
        }

        protected override void LoadContent()
        {
            //            XmlTextReader reader = new XmlTextReader();
            Frames.Add(atlasHandler.Dictionary["GraaEnemy_1d_frame1"]);
            base.LoadContent();
        }

        protected override void UnloadContent()
        {
            base.UnloadContent();
        }

        Matrix worldMatrix;
        Matrix viewMatrix;
        Matrix projectionMatrix;

        BasicEffect basicEffect;
        VertexDeclaration vertexDeclaration;
        VertexPositionColor[] pointList;
        VertexBuffer vertexBuffer;

        int points = 8;
        short[] lineListIndices;
        short[] lineStripIndices;
        short[] triangleListIndices;
        short[] triangleStripIndices;

        enum PrimType
        {
            LineList,
            LineStrip,
            TriangleList,
            TriangleStrip
        };
        PrimType typeToDraw = PrimType.LineList;

        RasterizerState rasterizerState;

        GamePadState currentGamePadState;
        GamePadState lastGamePadState;

        KeyboardState currentKeyboardState;
        KeyboardState lastKeyboardState;

        GraphicsDeviceManager graphics;

        /// <summary>
        /// Initializes the transforms used by the game.
        /// </summary>
        private void InitializeTransform()
        {

            viewMatrix = Matrix.CreateLookAt(
                new Vector3(0.0f, 0.0f, 1.0f),
                Vector3.Zero,
                Vector3.Up
                );

            projectionMatrix = Matrix.CreateOrthographicOffCenter(
                0,
                (float)GraphicsDevice.Viewport.Width,
                (float)GraphicsDevice.Viewport.Height,
                0,
                1.0f, 1000.0f);
        }

        /// <summary>
        /// Initializes the effect (loading, parameter setting, and technique selection)
        /// used by the game.
        /// </summary>
        private void InitializeEffect()
        {

            vertexDeclaration = new VertexDeclaration(new VertexElement[]
                {
                    new VertexElement(0, VertexElementFormat.Vector3, VertexElementUsage.Position, 0),
                    new VertexElement(12, VertexElementFormat.Color, VertexElementUsage.Color, 0)
                }
            );

            basicEffect = new BasicEffect(GraphicsDevice);
            basicEffect.VertexColorEnabled = true;

            worldMatrix = Matrix.Identity;
            basicEffect.World = worldMatrix;
            basicEffect.View = viewMatrix;
            basicEffect.Projection = projectionMatrix;
        }

        /// <summary>
        /// Initializes the point list.
        /// </summary>
        private void InitializePoints()
        {
            verts.Clear();
            if (span > 0)
            {
                for (float i = 0; i < span; i += 0.01f)
                {
                    verts.Add(new VertexPositionColor(
                                  new Vector3(
                                      curveX.Evaluate(i),
                                      curveY.Evaluate(i),
                                      0),
                                  color));
                }
            }
            else
            {
                verts.Add(new VertexPositionColor(new Vector3(), Color.Black));
                verts.Add(new VertexPositionColor(new Vector3(), Color.Black));
            }

            pointList = verts.ToArray();

            //            for (int x = 0; x < points / 2; x++)
            //            {
            //                for (int y = 0; y < 2; y++)
            //                {
            //                    pointList[(x * 2) + y] = new VertexPositionColor(
            //                        new Vector3(x * 100, y * 100, 0), Color.White);
            //                }
            //            }

            // Initialize the vertex buffer, allocating memory for each vertex.
            vertexBuffer = new VertexBuffer(device, vertexDeclaration,
                verts.Count, BufferUsage.None);

            // Set the vertex buffer data to the array of vertices.
            vertexBuffer.SetData<VertexPositionColor>(pointList);
        }

        //        /// <summary>
        //        /// Initializes the line list.
        //        /// </summary>
        //        private void InitializeLineList()
        //        {
        //            // Initialize an array of indices of type short.
        //            lineListIndices = new short[(points * 2) - 2];
        //
        //            // Populate the array with references to indices in the vertex buffer
        //            for (int i = 0; i < points - 1; i++)
        //            {
        //                lineListIndices[i * 2] = (short)(i);
        //                lineListIndices[(i * 2) + 1] = (short)(i + 1);
        //            }
        //        }

        /// <summary>
        /// Initializes the line strip.
        /// </summary>
        private void InitializeLineStrip()
        {
            // Initialize an array of indices of type short.
            lineStripIndices = new short[verts.Count];

            // Populate the array with references to indices in the vertex buffer.
            for (int i = 0; i < verts.Count; i++)
            {
                lineStripIndices[i] = (short)(i);
            }
        }
        //
        //        /// <summary>
        //        /// Initializes the triangle list.
        //        /// </summary>
        //        private void InitializeTriangleList()
        //        {
        //            int width = 4;
        //            int height = 2;
        //
        //            triangleListIndices = new short[(width - 1) * (height - 1) * 6];
        //
        //            for (int x = 0; x < width - 1; x++)
        //            {
        //                for (int y = 0; y < height - 1; y++)
        //                {
        //                    triangleListIndices[(x + y * (width - 1)) * 6] = (short)(2 * x);
        //                    triangleListIndices[(x + y * (width - 1)) * 6 + 1] = (short)(2 * x + 1);
        //                    triangleListIndices[(x + y * (width - 1)) * 6 + 2] = (short)(2 * x + 2);
        //
        //                    triangleListIndices[(x + y * (width - 1)) * 6 + 3] = (short)(2 * x + 2);
        //                    triangleListIndices[(x + y * (width - 1)) * 6 + 4] = (short)(2 * x + 1);
        //                    triangleListIndices[(x + y * (width - 1)) * 6 + 5] = (short)(2 * x + 3);
        //                }
        //            }
        //        }
        //
        //        /// <summary>
        //        /// Initializes the triangle strip.
        //        /// </summary>
        //        private void InitializeTriangleStrip()
        //        {
        //            // Initialize an array of indices of type short.
        //            triangleStripIndices = new short[points];
        //
        //            // Populate the array with references to indices in the vertex buffer.
        //            for (int i = 0; i < points; i++)
        //            {
        //                triangleStripIndices[i] = (short)i;
        //            }
        //        }
        //
        //        /// <summary>
        //        /// Determines which primitive to draw based on input from the keyboard
        //        /// or game pad.
        //        /// </summary>
        //        private void CheckGamePadInput()
        //        {
        //            lastGamePadState = currentGamePadState;
        //            currentGamePadState = GamePad.GetState(PlayerIndex.One);
        //
        //            if (((currentGamePadState.Buttons.A == ButtonState.Pressed)) &&
        //                 (lastGamePadState.Buttons.A == ButtonState.Released))
        //            {
        //                typeToDraw++;
        //
        //                if (typeToDraw > PrimType.TriangleStrip)
        //                    typeToDraw = 0;
        //            }
        //        }
        //
        //        /// <summary>
        //        /// Determines which primitive to draw based on input from the keyboard
        //        /// or game pad.
        //        /// </summary>
        //        private void CheckKeyboardInput()
        //        {
        //            lastKeyboardState = currentKeyboardState;
        //            currentKeyboardState = Keyboard.GetState();
        //
        //            if (currentKeyboardState.IsKeyDown(Keys.A) &&
        //                 lastKeyboardState.IsKeyUp(Keys.A))
        //            {
        //                typeToDraw++;
        //
        //                if (typeToDraw > PrimType.TriangleStrip)
        //                    typeToDraw = 0;
        //            }
        //        }
        //
        //    
        //
        //        /// <summary>
        //        /// Draws the line list.
        //        /// </summary>
        //        private void DrawLineList()
        //        {
        //            GraphicsDevice.DrawUserIndexedPrimitives<VertexPositionColor>(
        //                PrimitiveType.LineList,
        //                pointList,
        //                0,  // vertex buffer offset to add to each element of the index buffer
        //                8,  // number of vertices in pointList
        //                lineListIndices,  // the index buffer
        //                0,  // first index element to read
        //                7   // number of primitives to draw
        //            );
        //        }

        /// <summary>
        /// Draws the line strip.
        /// </summary>
        private void DrawLineStrip()
        {
            //            for (int i = 0; i < pointList.Length; i++){
            //                if (i%2 == 0)
            //                {
            //                    pointList[i].Color = Color.Yellow;
            //                    continue;
            //                }
            //                pointList[i].Color = Color.Red;
            //            }


            //            GraphicsDevice.DrawUserIndexedPrimitives<VertexPositionColor>(
            //                PrimitiveType.LineStrip,
            //                pointList,
            //                0,   // vertex buffer offset to add to each element of the index buffer
            //                verts.Count,   // number of vertices to draw
            //                lineStripIndices,
            //                0,   // first index element to read
            //                verts.Count-1    // number of primitives to draw
            //            );
            GraphicsDevice.DrawUserPrimitives<VertexPositionColor>(
                PrimitiveType.LineStrip,
                pointList,
                0,   // vertex buffer offset to add to each element of the index buffer
                //                verts.Count,   // number of vertices to draw
                //                lineStripIndices,
                //                0,   // first index element to read
                verts.Count - 1    // number of primitives to draw
            );
            //            for (int i = 0; i < pointList.Length; i++)
            //                pointList[i].Color = Color.White;

        }

        //        /// <summary>
        //        /// Draws the triangle list.
        //        /// </summary>
        //        private void DrawTriangleList()
        //        {
        //            GraphicsDevice.DrawUserIndexedPrimitives<VertexPositionColor>(
        //                PrimitiveType.TriangleList,
        //                pointList,
        //                0,   // vertex buffer offset to add to each element of the index buffer
        //                8,   // number of vertices to draw
        //                triangleListIndices,
        //                0,   // first index element to read
        //                6    // number of primitives to draw
        //            );
        //        }
        //
        //        /// <summary>
        //        /// Draws the triangle strip.
        //        /// </summary>
        //        private void DrawTriangleStrip()
        //        {
        //            for (int i = 0; i < pointList.Length; i++)
        //                pointList[i].Color = Color.Red;
        //
        //            GraphicsDevice.DrawUserIndexedPrimitives<VertexPositionColor>(
        //                PrimitiveType.TriangleStrip,
        //                pointList,
        //                0,  // vertex buffer offset to add to each element of the index buffer
        //                8,  // number of vertices to draw
        //                triangleStripIndices,
        //                0,  // first index element to read
        //                6   // number of primitives to draw
        //            );
        //            for (int i = 0; i < pointList.Length; i++)
        //                pointList[i].Color = Color.White;
        //
        //        }
    }
}
