package Guns.Bullets
{
	import net.flashpunk.Entity;
	import net.flashpunk.graphics.Spritemap;
	import net.flashpunk.*;
	import net.flashpunk.masks.Pixelmask;
	
	/**
	 * ...
	 * @author Daniel Lewis
	 */
	public class Bullets extends Entity 
	{
		
		public function Bullets() 
		{
			super();
			this.layer = 2;
			type = "playerBullet";
			setWatch();
		}
		
		override public function update():void {
			if (!this.onCamera) 
			{
				FP.world.recycle(this);
			}
			
			//switch (mode) 
			//{
				//case 0:
					//if (incrementY <= 8 ) incrementY += .3;
					//this.moveBy(0, -incrementY);
				//break;
				//case 1:
					//if (incrementY <= .3 ) incrementY += .00001;
					//this.moveBy(0, -incrementY);
				//break;
				//default:
			//}
		}
		
		override public function render():void {
			time += FP.elapsed*framerates[mode];
			while (time >= 1) 
			{
				switch (mode) 
				{
					case 0:
						updateRocketFrame();
					break;
					case 1:
						frame = ++frame % 2;
					break;
					case 2:
						
					break;
					case 3:
						
					break;
				}
				
			}
			(graphic as Spritemap).setAnimFrame("launch", frame);
			super.render();
		}
		
		public function setInit(x:Number, y:Number, mode:int):void 
		{
			this.moveTo(x, y);
			frame = 0;
			time = 0;
			switch (mode) 
			{
				case 0:
					//graphic = Assets.rockets;
					incrementY = 2;
					
					setHitbox(3, 8, -2, -4);
					//setHitboxTo(graphic);
					//centerOrigin();
					setOrigin(2, 6);
				break;
				case 1:
					graphic = Assets.Atlas["push_blaster"];
					//setHitboxTo(Assets.blaster);
					//centerOrigin();
					//mask = new Pixelmask(Assets.Atlas["push_blaster"]);
					incrementY = 6;
				break;
				case 2:
					//graphic = Assets.diskus;
					//Assets.diskus.play("launch");
				break;
				//case
				//default:
			}
		}
		
		private function updateRocketFrame():void 
		{
			time -= 1;
			if (frame == 5) 
			{
				frame -= 2;
			}
			++frame;
		}
		
		private function setWatch():void 
		{
			FP.watch("originX", "originY");
		}
		private var framerates:Array = [8, 3, 3, 3];
		private var time:Number;
		private var frame:int;
		private var mode:int;
		private var incrementY:Number;
		
	}

}