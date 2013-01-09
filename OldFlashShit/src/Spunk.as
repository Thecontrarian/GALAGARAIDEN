package 
{
	import flash.display.Sprite;
	import flash.display.StageAlign;
	import flash.display.StageScaleMode;
	import flash.events.Event;
	import starling.core.Starling;
	
	/**
	 * This is normal Starling setup class
	 * @author Andy Saia
	 */
	
	[SWF(width="800", height="600", backgroundColor="0", frameRate="60")]
	public class Spunk extends Sprite 
	{
		public function Spunk():void 
		{
			if (stage) init();
			else addEventListener(Event.ADDED_TO_STAGE, init);
		}
		
		private function init(e:Event = null):void 
		{
			removeEventListener(Event.ADDED_TO_STAGE, init);
			// entry point
			
			//Starling.handleLostContext = true;
			var starling:Starling = new Starling(Gengine, stage);
			stage.scaleMode = StageScaleMode.NO_SCALE;
			stage.align = StageAlign.TOP_LEFT;
			
			starling.showStats = true;
			starling.start();
		}
	}
}