package  
{
	import net.flashpunk.Entity;
	import Ships.Ship;
	/**
	 * ...
	 * @author Daniel Lewis
	 */
	public class Player extends Entity
	{
		public var MAX_HP:int;
		public var CURRENT_PWLVL:int;
		public var HP:int;
		public var MODE:int;
		public var ships:Vector.<Ship>;
		
		public function Player() 
		{
			
		}
		
		public function hurt(dmg:int):void {
			HP -= dmg;
			if (HP < 1) 
			{
				//is dead
			}
		}
		
		public function changeMode(newMode:int):void {
			
		}
		
		public function update():void {
			
		}
		
		
	}

}