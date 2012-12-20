package
{
	import com.saia.starlingPunk.SP;
	import com.saia.starlingPunk.SPEngine;
	import flash.events.TextEvent;
	
	/**
	 * ...
	 * @author Andy Saia
	 */
	public class Gengine extends SPEngine
	{	
		public function Gengine() 
		{
			super();
		}
		
		//-------------------
		//  event handlers
		//-------------------
		
		override public function init():void 
		{
			super.init();
			SP.world = new TestWorld();
			
		}
	}
}