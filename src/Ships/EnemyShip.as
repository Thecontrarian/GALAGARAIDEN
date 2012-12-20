package Ships
{
	import net.flashpunk.Entity;
	import net.flashpunk.*;
	import net.flashpunk.graphics.Spritemap;
	import net.flashpunk.masks.*;
	import net.flashpunk.graphics.Image;
	import net.flashpunk.tweens.motion.CubicMotion;
	import net.flashpunk.tweens.motion.LinearMotion;
	
	/**
	 * ...
	 * @author Daniel Lewis
	 */
	public class EnemyShip extends Entity 
	{	
		public const enemyTween:CubicMotion = new CubicMotion();
		public var oldx:Number;
		public var oldy:Number;
		
		public function EnemyShip() 
		{
			enemyTween.setMotion(0, 0, FP.width, 0, FP.width, FP.height, 0, FP.height, 10);
			FP.watch("enemyTween");
			this.addTween(enemyTween);
			super();
			//(Assets.Atlas["GraaEnemy_2d"] as Spritemap).centerOO();
			//graphic = (Assets.Atlas["GraaEnemy_2d"] as Spritemap);
			//(Assets.Atlas["GraaEnemy_2d"] as Spritemap).smooth = false;
			mask = new Pixelmask(this.asBitmap());
			this.centerOrigin();
		}
		
		public function setInit() {
			enemyTween.start();
		}
		
		override public function update():void {
			if (enemyTween.active) 
			{
				oldx = x;
				oldy = y;
				x = enemyTween.x;
				y = enemyTween.y;
				var newAngle:Number = FP.angle(oldx, oldy, x, y) + 90
				if (angle != newAngle) 
				{
					this.angle = newAngle;
					mask = new Pixelmask(this.asBitmap());
					this.centerOrigin();
				}
				
				
			}
			else if (enemyTween.percent == 1) 
			{
				FP.world.recycle(this);
			}
			//else if (enemyTween.) 
			//{
				//
			//}
			if (collide("playerBullet",x,y) != null) 
			{
				FP.world.remove(this);
			}
		}	
	}

}