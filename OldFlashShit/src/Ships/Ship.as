package Ships 
{
	import Guns.Gun;
	import net.flashpunk.Entity;
	import net.flashpunk.*;
	/**
	 * ...
	 * @author Daniel Lewis
	 */
	public class Ship extends Entity 
	{
		public var main:Gun;
		public var special:Gun;
		
		
		public function Ship(x:Number=0, y:Number=0, graphic:Graphic=null, mask:Mask=null) 
		{
			super(x, y, graphic, mask);
		}
		
	}

}