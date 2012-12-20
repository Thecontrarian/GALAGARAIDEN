package Guns.Bullets 
{
	/**
	 * ...
	 * @author Daniel Lewis
	 */
	public class Blaster extends Bullet 
	{
		
		public function Blaster() 
		{
			type = "playerBullet";
			this.layer = 2;
		}
		
		override public function render():void {
			time += FP.elapsed*framerates[mode];
			while (time >= 1) 
			{
				frame = ++frame % 2;
				time -= 1;
			}
			(graphic as Spritemap).setAnimFrame("launch", frame);
			super.render();
		}
		
		
		override public function make(x:Number, y:Number):void 
		{
			this.moveTo(x, y);
			frame = 0;
			time = 0;
			graphic = Assets.blaster;
			//setHitboxTo(Assets.blaster);
			//centerOrigin();
			mask = new Pixelmask(Assets.blasterBitmap);
			incrementY = 6;
		
		}
		
	}

}