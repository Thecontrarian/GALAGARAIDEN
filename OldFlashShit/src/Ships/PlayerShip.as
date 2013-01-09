//package  
//{
	//import net.flashpunk.*;
	//import net.flashpunk.graphics.*;
	//import net.flashpunk.utils.*;
	//
	///**
	 //* ...
	 //* @author Daniel Lewis
	 //*/
	//public class PlayerShip extends Entity 
	//{
		//[Embed(source = "../assets/gfx/ships.png")]
		//private var shipSheet:Class;
		//public function PlayerShip(x:Number, y:Number) 
		//{
			//super(x, y);
			//ships = new Spritemap(shipSheet, 32, 32);
			//graphic = ships;
			//ships.add("blue move", [9, 10], 3);
			//ships.add("green move", [12, 13], 3);
			//ships.add("red move", [15, 16], 3);
			//ships.add("blue idle", [11]);
			//ships.add("green idle", [14]);
			//ships.add("red idle", [17]);
			//spriteSheetRot = new BMDPreRotation(ships.asBitmap(), 6);
			//var img:Image = new Image(spriteSheetRot.asBitmap());
			//graphic = spriteSheetRot;
			//velocityX = 5;
			//FP.watch("velocityX");
			//FP.watch("velocityY");
			//FP.watch("maxVelocity");
			//FP.watch("increment");
			//FP.watch("buffMultiplierX");
			//FP.watch("buffMultiplierY");
			//
			//
			//Input.define("left", Key.LEFT, Key.A);
			//Input.define("right", Key.RIGHT, Key.D);
			//Input.define("up", Key.UP, Key.W);
			//Input.define("down", Key.DOWN, Key.S);
			//idle = ["blue idle", "green idle", "red idle"];
			//moving = ["blue move", "green move", "red move"];
			//FP.watch("idle.x");
		//}
		//
		//private function handleInput():void
		//{
			//
			//buffMultiplierX = 2;// (velocityX / maxVelocity * 100) + 1;
			//if (buffMultiplierX < 1) buffMultiplierX = 1;
			//if (Input.check("left") && velocityX >= -maxVelocity)
			//{	
				//if (velocityX > 0) velocityX = 0;
				//velocityX -=  increment;
				//
			//}
	 //
			//else if (Input.check("right") && velocityX <= maxVelocity)
			//{	
				//if (velocityX < 0) velocityX = 0;
				//velocityX +=  increment;
			//}
			//
			//else if (velocityX > 0) 
			//{
				//velocityX -= increment;
			//}
			//
			//else if (velocityX < 0) 
			//{
				//velocityX += increment;
			//}
			//
			//buffMultiplierY = (velocityY / maxVelocity*100) + 1;
			//if (buffMultiplierY < 1) buffMultiplierY = 1;
			//if (Input.check("up") && velocityY >= -maxVelocity)
			//{
				//if (velocityY > 0) velocityY = 0; 
				//velocityY -= increment;
			//}
	 //
			//else if (Input.check("down") && velocityY <= maxVelocity)
			//{	
				//if (velocityY < 0) velocityY = 0; 
				//velocityY += increment;
			//}
			//
			//else if (velocityY > 0) 
			//{
				//if (velocityY < 1) velocityY = 1
				//velocityY -= increment;
			//}
			//
			//else if (velocityY < 0) 
			//{
				//velocityY += increment;
			//}
			//
			//if (Input.pressed(Key.SPACE)) 
			//{
				//mode = (mode + 1) % 3;
			//}
			//if (Input.pressed(Key.DIGIT_1)) 
			//{
				//maxVelocity -= 10;
			//}
			//if (Input.pressed(Key.DIGIT_2)) 
			//{
				//maxVelocity += 10;
			//}
			//if (Input.pressed(Key.DIGIT_3)) 
			//{
				//--increment;
			//}
			//if (Input.pressed(Key.DIGIT_4)) 
			//{
				//++increment;
			//}
			//if (Input.pressed(Key.DIGIT_5)) 
			//{
				//buffMultiplier -= .1;
			//}
			//if (Input.pressed(Key.DIGIT_6)) 
			//{
				//buffMultiplier += .1;
			//}
		//}
		//
		//private function setAnimations() :void
		//{
			//if (velocityX == 0 && velocityY == 0)
			//{
				 //we are stopped, set animation to idle
				//ships.play(idle[mode]);
			//}
			//else
			//{
				 //we are moving, set animation to walk
				//ships.play(moving[mode]);
			//}
		//}
		//
		//override public function update():void {
			//handleInput();
			//setAnimations();
		//
			//this.moveBy(velocityX / 100, velocityY / 100);
		//
		//}
		//
		//private var spriteSheetRot:BMDPreRotation;
		//
		//private var ships:Spritemap;
		//private var mode:int = 0;
		//public var velocityX:int = 0;
		//public var velocityY:int = 0;
		//public var maxVelocity:int = 1000;
		//public var increment:int = 70;
		//public var buffMultiplierX:int;
		//public var buffMultiplierY:int;
		//private var idle:Array;
		//private var moving:Array;
	//}
	//
	//
//
//}

package Ships
{
	import Guns.Bullets.Bullet;
	import Guns.Bullets.Bullets;
	import net.flashpunk.*;
	import net.flashpunk.graphics.*;
	import net.flashpunk.masks.Pixelmask;
	import net.flashpunk.utils.*;
	
	/**
	 * ...
	 * @author Daniel Lewis
	 */
	public class PlayerShip extends Entity 
	{
		public function PlayerShip(x:Number, y:Number) 
		{
			super(x, y);
			(Assets.Atlas["GraaEnemy_2d"] as Spritemap).centerOO();
			(Assets.Atlas["GraaEnemy_2d"] as Spritemap).smooth = true;
			graphic = (Assets.Atlas["GraaEnemy_2d"] as Spritemap);
			mask = new Pixelmask(this.asBitmap());
			this.centerOrigin();
			//this.visible = false;
			
			setWatch();
			powerlevel = 1;
			Input.define("left", Key.LEFT, Key.A);
			Input.define("right", Key.RIGHT, Key.D);
			Input.define("up", Key.UP, Key.W);
			Input.define("down", Key.DOWN, Key.S);
			idle = ["blue idle", "green idle", "red idle"];
			moving = ["blue move", "green move", "red move"];
		}
		
		private function handleInput():void
		{
			
			//buffMultiplierX = 5;// (velocityX / maxVelocity * 100) + 1;
			//if (buffMultiplierX < 1) buffMultiplierX = 1;
			if (Input.check("left") && velocityX >= -maxVelocity)
			{
				velocityX -= velocityX > 0 ? increment*buffMultiplier : increment;
				
			}
	 
			else if (Input.check("right") && velocityX <= maxVelocity)
			{
				velocityX += velocityX < 0 ? increment*buffMultiplier : increment;
			}
			
			else if (velocityX > 0) 
			{
				velocityX -= increment;
			}
			
			else if (velocityX < 0) 
			{
				velocityX += increment;
			}
			
			//buffMultiplierY = (velocityY / maxVelocity*100) + 1;
			//if (buffMultiplierY < 1) buffMultiplierY = 1;
			if (Input.check("up") && velocityY >= -maxVelocity)
			{
				velocityY -= velocityY > 0 ? increment*buffMultiplier : increment;
			}
	 
			else if (Input.check("down") && velocityY <= maxVelocity)
			{
				velocityY += velocityY < 0 ? increment*buffMultiplier : increment;
			}
			
			else if (velocityY > 0) 
			{
				//if (velocityY < 1) velocityY = 1
				velocityY -= increment;
			}
			
			else if (velocityY < 0) 
			{
				velocityY += increment;
			}
			
			if (Input.pressed(Key.E)) 
			{
				mode = (mode + 1) % 3;
			}
			if (Input.check(Key.SPACE)) 
			{
				fireGun();
				
			}
			if (Input.check(Key.L)) 
			{
				(FP.world.create(EnemyShip) as EnemyShip).setInit();
			}
			
			//DEBUG
			if (Input.pressed(Key.DIGIT_1)) 
			{
				maxVelocity -= 10;
			}
			if (Input.pressed(Key.DIGIT_2)) 
			{
				maxVelocity += 10;
			}
			if (Input.pressed(Key.DIGIT_3)) 
			{
				--increment;
			}
			if (Input.check(Key.DIGIT_4)) 
			{
				//++increment;
				(graphic as Spritemap).angle = ((graphic as Spritemap).angle  + 30) % 360;
			}
			if (Input.pressed(Key.DIGIT_5)) 
			{
				//buffMultiplier -= 1;
				(graphic as Spritemap).randFrame();
			}
			if (Input.pressed(Key.DIGIT_6)) 
			{
				buffMultiplier += 1;
			}
		}
		
		private function setAnimations() :void
		{
			//if (velocityY > 0)
			//{
				 //we are stopped, set animation to idle
				//ships.play(idle[mode]);
			//}
			//else
			//{
				 //we are moving, set animation to walk
				//ships.play(moving[mode]);
			//}
		}
		
		private function fireGun():void 
		{
			if (elapsedTime - sinceLastShot >= .1) 
			{
				sinceLastShot = elapsedTime;
				switch (mode) 
				{
					case 0:
						offset = offset == -14 ? 15 : -14;
						//getBullet().setInit(this.x + offset, this.y, 0);
						getBullet().setInit(this.x, this.y-17, 1);
					break;
					case 1:
						
					break;
					case 2:
						
					break;
					case 3:
						
					break;
				}
			}
			
		}
		
		private function getBullet():Bullets
		{
			return this.world.create(Bullets) as Bullets;	
		}
		
		private function setWatch():void 
		{
			FP.watch("velocityX");
			FP.watch("velocityY");
			FP.watch("maxVelocity");
			FP.watch("increment");
			FP.watch("buffMultiplier");
			FP.watch("x", "y", "originX", "originY");
		}
		
		override public function update():void {
			elapsedTime += FP.elapsed;
			handleInput();
			setAnimations();
			var xCircle:Number = velocityX * Math.sqrt(1 - (0.5 * Math.pow(velocityY/1000, 2)))/100;
			var yCircle:Number = velocityY * Math.sqrt(1 - (0.5 * Math.pow(velocityX/1000, 2)))/100;
			this.moveBy(xCircle, yCircle);
		}
		private var elapsedTime:Number = 0;
		private var sinceLastShot:Number = 0;
		private var powerlevel:int;
		private var spriteSheetRot:BMDPreRotation;
		private var leftSideRocket:Boolean;
		private var offset:int = 16;
		private var ships:Spritemap;
		private var list:Graphiclist;
		private var mode:int = 0;
		public var velocityX:int = 0;
		public var velocityY:int = 0;
		public var maxVelocity:int = 1000;
		public var increment:int = 70;
		public var buffMultiplier:int = 3;
		private var idle:Array;
		private var moving:Array;
	}
}