package nme.installer;


import nme.display.BitmapData;
import nme.media.Sound;
import nme.net.URLRequest;
import nme.text.Font;
import nme.utils.ByteArray;


/**
 * ...
 * @author Joshua Granick
 */

class Assets {

	
	public static var cachedBitmapData:Hash<BitmapData> = new Hash<BitmapData>();
	
	private static var initialized:Bool = false;
	private static var resourceNames:Hash <String> = new Hash <String> ();
	private static var resourceTypes:Hash <String> = new Hash <String> ();
	
	
	private static function initialize ():Void {
		
		if (!initialized) {
			
			resourceNames.set ("gfx/debug/console_debug.png", "gfx/debug/console_debug.png");
			resourceTypes.set ("gfx/debug/console_debug.png", "image");
			resourceNames.set ("gfx/debug/console_logo.png", "gfx/debug/console_logo.png");
			resourceTypes.set ("gfx/debug/console_logo.png", "image");
			resourceNames.set ("gfx/debug/console_output.png", "gfx/debug/console_output.png");
			resourceTypes.set ("gfx/debug/console_output.png", "image");
			resourceNames.set ("gfx/debug/console_pause.png", "gfx/debug/console_pause.png");
			resourceTypes.set ("gfx/debug/console_pause.png", "image");
			resourceNames.set ("gfx/debug/console_play.png", "gfx/debug/console_play.png");
			resourceTypes.set ("gfx/debug/console_play.png", "image");
			resourceNames.set ("gfx/debug/console_step.png", "gfx/debug/console_step.png");
			resourceTypes.set ("gfx/debug/console_step.png", "image");
			resourceNames.set ("gfx/needsmoarfeetz.png", "gfx/needsmoarfeetz.png");
			resourceTypes.set ("gfx/needsmoarfeetz.png", "image");
			resourceNames.set ("gfx/preloader/haxepunk.png", "gfx/preloader/haxepunk.png");
			resourceTypes.set ("gfx/preloader/haxepunk.png", "image");
			resourceNames.set ("font/04B_03__.ttf", "font/04B_03__.ttf");
			resourceTypes.set ("font/04B_03__.ttf", "font");
			
			initialized = true;
			
		}
		
	}
	
	
	public static function getBitmapData (id:String, useCache:Bool = true):BitmapData {
		
		initialize ();
		
		if (resourceTypes.exists (id) && resourceTypes.get (id) == "image") {
			
			if (useCache && cachedBitmapData.exists (id)) {
				
				return cachedBitmapData.get (id);
				
			} else {
				
				var data = BitmapData.load (resourceNames.get (id));
				
				if (useCache) {
					
					cachedBitmapData.set (id, data);
					
				}
				
				return data;
				
			}
			
		} else {
			
			trace ("[nme.Assets] There is no BitmapData asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getBytes (id:String):ByteArray {
		
		initialize ();
		
		if (resourceNames.exists (id)) {
			
			return ByteArray.readFile (resourceNames.get (id));
			
		} else {
			
			trace ("[nme.Assets] There is no String or ByteArray asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getFont (id:String):Font {
		
		initialize ();
		
		if (resourceTypes.exists (id) && resourceTypes.get (id) == "font") {
			
			return new Font (resourceNames.get (id));
			
		} else {
			
			trace ("[nme.Assets] There is no Font asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getResourceName (id:String):String {
		
		initialize ();
		
		return resourceNames.get (id);
		
	}
	
	
	public static function getSound (id:String):Sound {
		
		initialize ();
		
		if (resourceTypes.exists (id)) {
			
			if (resourceTypes.get (id) == "sound") {
				
				return new Sound (new URLRequest (resourceNames.get (id)), null, false);
				
			} else if (resourceTypes.get (id) == "music") {
				
				return new Sound (new URLRequest (resourceNames.get (id)), null, true);
				
			}
			
		}
		
		trace ("[nme.Assets] There is no Sound asset with an ID of \"" + id + "\"");
		
		return null;
		
	}
	
	
	public static function getText (id:String):String {
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
	}
	
	
}
