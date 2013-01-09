package 
{
	import flash.system.Capabilities;
	import net.flashpunk.*;
	
	/**
	 * ...
	 * @author Daniel Lewis
	 */
	public class Main extends Engine 
	{
		
		static public const kScreenWidth:int = 400;
		public static const kScreenHeight:int = 300;
		public static const kFrameRate:int = 60;
		public static const kClearColor:int = 0x333333;
		public static const kProjectName:String = "GALAGARAIDEN";
		
		public function Main() 
		{
			super(kScreenWidth, kScreenHeight, kFrameRate, false);
		}
		
		override public function init():void 
		{
		FP.screen.color = kClearColor;
		FP.screen.scale = 2;
		//if (flash.system.Capabilities.isDebugger)
		//{
			FP.console.enable();
			
			//FP.console.visible = true
		//}
		FP.world = new PlayState();
		}
		
	}
	
}