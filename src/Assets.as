package  
{
	
	import flash.display.BitmapData;
	import flash.geom.Rectangle;
	import flash.utils.Dictionary;
	import net.flashpunk.graphics.*;
	import net.flashpunk.masks.Pixelmask;
	import net.flashpunk.*;
	import starling.textures.Texture;
	import starling.textures.TextureAtlas;
	
	/**
	 * ...
	 * @author Daniel Lewis
	 */
	public class Assets 
	{
		
		[Embed(source="../assets/gfx/MASTER GAIDEN SHEET.xml",
        mimeType = "application/octet-stream")] private static var atlasXML:Class;
		[Embed(source = "../assets/gfx/MASTER GAIDEN SHEET.png")] private static var atlasPng:Class;
		
		
		
		public static var Atlas:TextureAtlas;
		//public static var Atlas:Dictionary;
		public static function InitAssets():void {
			var tex:Texture = Texture.fromBitmap(new atlasPng, false, false, .5);
			
			Atlas = new TextureAtlas(tex, new XML(new atlasXML));
			
			1 + 1;
			
			//var list:XMLList = new XML(new atlasXML).Item;
			//Atlas = new Dictionary();
			//for each (var item:XML in list) 
			//{
				//var img:Image = new Image(atlasPng, new Rectangle(
					//Number(item.Value[0]),
					//Number(item.Value[1]),
					//Number(item.Value[2]),
					//Number(item.Value[3])));
				//Atlas[item.Key.toString()] = new Spritemap(
					//img.asBitmap(),
					//img.width / Number(item.Value[4]), img.height);
			//}
			
			//rockets.add("launch", [0, 0, 1, 1, 2, 3]);
			//orbs.add("big launch", [0, 1, 2]);
			//orbs.add("little launch", [3, 4, 5]);
			//blaster.add("launch", [0, 1]);
			//diskus.add("launch", [0, 1]);
		}
		
		
	}

}