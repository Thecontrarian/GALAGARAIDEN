package
{
    import starling.display.Quad;
    import starling.display.Sprite;
    import starling.utils.Color;
 
    public class Sgame extends Sprite
    {
        public function Sgame()
        {
            var quad:Quad = new Quad(200, 200, Color.RED);
            quad.x = 100;
            quad.y = 50;
            addChild(quad);
        }
    }
}