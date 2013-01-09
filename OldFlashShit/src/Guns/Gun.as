package Guns 
{
	import net.flashpunk.*;
	
	/**
	 * ...
	 * @author Daniel Lewis
	 */
	public class Gun extends Entity 
	{
		public const parent:Entity;
		public function Gun(parent:Entity) 
		{
			this.parent = parent;
			super();
		}
		
		
		
		public function fire():void {
			
		}
	}

}