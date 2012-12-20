package  
{
	import com.saia.starlingPunk.SPWorld;
	import com.saia.starlingPunk.utils.*;
	import com.saia.starlingPunk.*;
	import starling.text.BitmapChar;
	import starling.text.TextField;
	import starling.textures.Texture;
	import starling.textures.TextureAtlas;
	
	/**
	 * ...
	 * @author Daniel Lewis
	 */
	public class TestWorld extends SPWorld 
	{
		public function TestWorld() 
		{
			
		}
		public function get num():String {
			//return numChildren.toString();
			return SP.passedTime.toString();
		}
		
		public static var textEnt:SPEntity;
		public static var text:TextField;
		
		override public function begin():void {
			Assets.InitAssets();
			super.begin();
			//this.scaleX = 2;
			//this.scaleY = 2;
			text = new TextField(200, 80, num)
			textEnt = new SPEntity();
			textEnt.addChild(text);
			textEnt.layer = 2;
			addChild(textEnt);
		}
		
		override public function end():void 
		{
			super.end();
			removeAll();
			removeChildren(0, -1, true);
			
		}
		
		override public function update():void 
		{
			if (SPInput.pressed(Key.L)) 
			{
				
					SP.world.add(new SPShip);
				
			}
			text.text = num;
			super.update();
			//update example manager
		}
		
	}

}