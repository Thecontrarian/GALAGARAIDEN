package;
import com.haxepunk.Entity;
import com.haxepunk.graphics.Spritemap;
import com.haxepunk.graphics.Image;
import com.haxepunk.graphics.PreRotation;
import com.haxepunk.Graphic;
import com.haxepunk.HXP;
import com.haxepunk.utils.Key;
import com.haxepunk.utils.Data;
import com.haxepunk.utils.Input;
import flash.display.BitmapData;
import flash.geom.Point;
import nme.geom.Rectangle;
/**
 * ...
 * @author Daniel Lewis
 */

class PlayerShip extends Entity
{
	public function new(x:Float, y:Float) 
	{
		super(x,y);
		//graphic = 
		//purpShip = new Spritemap("gfx/needsmoarfeetz.png", 32, 32,null, "Purple Ship");
		//frame1 = new BitmapData(32, 32, true, 0);
		//frame2 = new BitmapData(32, 32, true, 0);
		//purpShip.setFrame(0, 1);
		//purpShip.render(frame1, new Point(), new Point());
		//purpShip.render(frame2, new Point(), new Point());
		//purpShip.setFrame(0, 3);
		//purpShip.render(frame1, new Point(), new Point());
		//purpShip.setFrame(1, 3);
		//purpShip.render(frame2, new Point(), new Point());
		//anim = new BitmapData(64, 32, true, 0);
		//
		//img = new Image(frame1);
		//img.render(anim, new Point(), new Point());
		//img = new Image(frame2);
		//img.render(anim, new Point(32,0), new Point());
		//img = new Image(anim);
		//purpShip = new Spritemap(anim, 32, 32);
		//purpShip.add("move", [0, 1], 10);
		//purpShip.play("move");
		//graphic = new Image("gfx/needsmoarfeetz.png");
		//if (Std.is(, BitmapData))
		//{
			//trace ("Yes");
		//}
		//else 
		//{
			//trace ("No");
		//}
		ships = new Spritemap("gfx/ships.png", 32, 32, null, "Ship Sprites");
		graphic = ships;
		ships.add("blue move", [9, 10], 3);
		ships.add("gree move", [12, 13], 3);
		ships.add("red move", [15, 16], 3);
		ships.add("blue idle", [11]);
		ships.add("green idle", [14]);
		ships.add("red idle", [17]);
		
		Input.define("left", [Key.LEFT, Key.A]);
		Input.define("right", [Key.RIGHT, Key.D]);
		Input.define("up", [Key.UP, Key.W]);
		Input.define("down", [Key.DOWN, Key.S]);
		velocityx = 0;
		velocityy = 0;
		idle = ["blue idle", "green idle", "red idle"];
		moving = ["blue move", "green move", "red move"];
		HXP.watch("velocityx","velocityy");
		
		
		
	}
	
	private function handleInput():Void
    {
 
        if (Input.check("left") && velocityx >= -maxVelocity)
        {
            velocityx -= increment;
			
        }
 
        else if (Input.check("right") && velocityx <= maxVelocity)
        {
            velocityx += increment;
        }
		
		else if (velocityx > 0) 
		{
			velocityx -= increment;
		}
		
		else if (velocityx < 0) 
		{
			velocityx += increment;
		}
		
		if (Input.check("up") && velocityy >= -maxVelocity)
        {
            velocityy -= increment;
        }
 
        else if (Input.check("down") && velocityy <= maxVelocity)
        {
            velocityy += increment;
        }
		
		else if (velocityy > 0) 
		{
			velocityy -= increment;
		}
		
		else if (velocityy < 0) 
		{
			velocityy += increment;
		}
		
		if (Input.pressed(Key.SPACE)) 
		{
			mode = (mode + 1) % 3;
		}
    }
	
	private function setAnimations() :Void
    {
        if (velocityx == 0 && velocityy == 0)
        {
            // we are stopped, set animation to idle
            ships.play(idle[mode]);
        }
        else
        {
            // we are moving, set animation to walk
            ships.play(moving[mode]);
        }
    }
	
	override public function update():Void {
		handleInput();
		setAnimations();
		
		this.moveBy(velocityx/10, velocityy/10);
		
	}
	private var frame1:BitmapData;
	private var frame2:BitmapData;
	private var anim:BitmapData;
	private var img:Image;
	private var ships:Spritemap;
	private var mode:Int = 0;
	private var velocityy:Int;
	private var velocityx:Int;
	private var maxVelocity:Int = 100;
	private var increment:Int = 1;
	private var idle:Array<String>;
	private var moving:Array<String>;
	
	
	//private var rotated:BMDPreRotation;
}