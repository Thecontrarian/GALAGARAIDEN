package;

/**
 * ...
 * @author Daniel Lewis
 */

import com.haxepunk.World;
import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;
 
class PlayState extends World
{

	public function new() 
	{
		super();
		add(new PlayerShip(15, 15));
		
	}
	
	//public override function begin()
    //{
        //block = addGraphic(new Image("gfx/block.png"));
    //}
 //
    //public override function update()
    //{
        //block.moveBy(2, 1);
 //
        //super.update();
    //}
 //
    //private var block:Entity;
	//
}