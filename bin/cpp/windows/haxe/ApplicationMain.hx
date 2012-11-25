class ApplicationMain
{

	#if waxe
	static public var frame : wx.Frame;
	static public var autoShowFrame : Bool = true;
	#if nme
	static public var nmeStage : wx.NMEStage;
	#end
	#end
	
	public static function main()
	{
		#if nme
		nme.Lib.setPackage("Daniel Lewis and Willie McIntosh", "MyApplication", "com.galagaradien.app", "1.0.0");
		
		#end
		
		#if waxe
		wx.App.boot(function()
		{
			
			frame = wx.Frame.create(null, null, "HaxePunk", null, { width: 640, height: 480 });
			
			#if nme
			var stage = wx.NMEStage.create(frame, null, null, { width: 640, height: 480 });
			#end
			
			com.gitjam.Main.main();
			
			if (autoShowFrame)
			{
				wx.App.setTopWindow(frame);
				frame.shown = true;
			}
		});
		#else
		
		nme.Lib.create(function()
			{ 
				if (640 == 0 && 480 == 0)
				{
					nme.Lib.current.stage.align = nme.display.StageAlign.TOP_LEFT;
					nme.Lib.current.stage.scaleMode = nme.display.StageScaleMode.NO_SCALE;
				}
				
				var hasMain = false;
				
				for (methodName in Type.getClassFields(com.gitjam.Main))
				{
					if (methodName == "main")
					{
						hasMain = true;
						break;
					}
				}
				
				if (hasMain)
				{
					Reflect.callMethod (com.gitjam.Main, Reflect.field (com.gitjam.Main, "main"), []);
				}
				else
				{
					nme.Lib.current.addChild(cast (Type.createInstance(com.gitjam.Main, []), nme.display.DisplayObject));	
				}
			},
			640, 480, 
			30, 
			0xffffff,
			(true ? nme.Lib.HARDWARE : 0) |
			(false ? nme.Lib.ALLOW_SHADERS : 0) |
			(true ? nme.Lib.RESIZABLE : 0) |
			(false ? nme.Lib.BORDERLESS : 0) |
			(false ? nme.Lib.VSYNC : 0) |
			(false ? nme.Lib.FULLSCREEN : 0) |
			(1 == 4 ? nme.Lib.HW_AA_HIRES : 0) |
			(1 == 2 ? nme.Lib.HW_AA : 0),
			"HaxePunk"
			
		);
		#end
		
	}
	
	
	public static function getAsset(inName:String):Dynamic
	{
		#if nme
		
		if (inName == "gfx/debug/console_debug.png")
		{
			
			return nme.Assets.getBitmapData ("gfx/debug/console_debug.png");
			
		}
		
		if (inName == "gfx/debug/console_logo.png")
		{
			
			return nme.Assets.getBitmapData ("gfx/debug/console_logo.png");
			
		}
		
		if (inName == "gfx/debug/console_output.png")
		{
			
			return nme.Assets.getBitmapData ("gfx/debug/console_output.png");
			
		}
		
		if (inName == "gfx/debug/console_pause.png")
		{
			
			return nme.Assets.getBitmapData ("gfx/debug/console_pause.png");
			
		}
		
		if (inName == "gfx/debug/console_play.png")
		{
			
			return nme.Assets.getBitmapData ("gfx/debug/console_play.png");
			
		}
		
		if (inName == "gfx/debug/console_step.png")
		{
			
			return nme.Assets.getBitmapData ("gfx/debug/console_step.png");
			
		}
		
		if (inName == "gfx/needsmoarfeetz.png")
		{
			
			return nme.Assets.getBitmapData ("gfx/needsmoarfeetz.png");
			
		}
		
		if (inName == "gfx/preloader/haxepunk.png")
		{
			
			return nme.Assets.getBitmapData ("gfx/preloader/haxepunk.png");
			
		}
		
		if (inName == "font/04B_03__.ttf")
		{
			
			return nme.Assets.getFont ("font/04B_03__.ttf");
			
		}
		
		#end
		return null;
	}
	
	
}
