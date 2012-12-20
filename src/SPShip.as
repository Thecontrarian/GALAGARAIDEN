package  
{
	import com.saia.starlingPunk.SPEntity;
	import com.saia.starlingPunk.*;
	import com.saia.starlingPunk.tweens.motion.CubicMotion;
	import com.saia.starlingPunk.utils.*;
	import com.saia.starlingPunk.helpers.*;
	import com.saia.starlingPunk.utils.SPInput;
	import starling.display.MovieClip;
	import starling.textures.TextureSmoothing;

	import starling.*;
	import starling.display.DisplayObject;
	import starling.display.Image;
	import starling.display.Quad;
	import starling.core.Starling;
	
	
	/**
	 * ...
	 * @author Daniel Lewis
	 */
	public class SPShip extends SPEntity 
	{
		private var tweener:Tweener;
		private var tween:CubicMotion;
		private var oldx:Number;
		private var oldy:Number;
		private var img:Image;
		
		public function SPShip() 
		{
			super(0,0);
			tweener = new Tweener();
			tween = new CubicMotion();
			tween.setMotion(0, 0, SP.width, 0, SP.width, SP.height, 0, SP.height, 10);
			tweener.addTween(tween);
			//var mov:MovieClip = new MovieClip(Assets.Atlas.getTextures("push_var3"),1);
			//Starling.juggler.add(mov);
			img = new Image(Assets.Atlas.getTexture("push_var3_frame1"));
			img.smoothing = TextureSmoothing.NONE;
			this.addChild(img);
			img = new Image(Assets.Atlas.getTexture("push_boost_frame1"));
			img.smoothing = TextureSmoothing.NONE;
			img.x = 5;
			img.y = 5;
			
			this.addChild(img);
			layer = 1;
			this.x = 100;
			this.y = 100;
		}
		override public function update():void {
			if (SPInput.pressed(Key.UP)) 
			{
				--img.y;
			}
			if (SPInput.pressed(Key.DOWN)) 
			{
				++img.y;
			}
			if (SPInput.pressed(Key.LEFT)) 
			{
				--img.x;
			}
			if (SPInput.pressed(Key.RIGHT)) 
			{
				++img.x;
			}
			//tweener.updateTweens();			
			//if (tween.active) 
			//{
				//
				//oldx = x;
				//oldy = y;
				//x = tween.x;
				//y = tween.y;
				//var newAngle:Number = (SP.angle(oldx, oldy, x, y) - 90) * SP.RAD;
				//if (rotation != newAngle) 
				//{
					//this.rotation = newAngle;
					//this.centerOrigin();
				//}
				//
				//
			//}
			//if (tween.percent == 1) 
			//{
				//SP.world.remove(this);
			//}
		}
		
	}

}