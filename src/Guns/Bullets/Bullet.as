package Guns.Bullets 
{
	//import net.flashpunk.Entity;
	import net.flashpunk.*;
	
	/**
	 * ...
	 * @author Daniel Lewis
	 */
	public class Bullet extends Entity 
	{
		protected var time:Number;
		protected var frame:int;
		
		public function Bullet() 
		{
			
		}
		
		public function make(x:Number, y:Number):void {
			
		}
		
		override public function update():void {
			if (!this.onCamera) 
			{
				FP.world.recycle(this);
			}
		}
		
		
		
	}

}