package  
{
	import net.flashpunk.*;
	import net.flashpunk.graphics.Image;
	import Ships.*;
	
	
	/**
	 * ...
	 * @author Daniel Lewis
	 */
	public class PlayState extends World 
	{
		
		public function PlayState() 
		{
			Assets.InitAssets();
			add(new PlayerShip(30, 30));
			
			
		}
		
	}

}