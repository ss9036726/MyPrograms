class elseif
{
	public static void main(String[] args)
	{
		boolean isLightGreen=false;
		boolean isLightYellow=true;

		if(isLightGreen)
		{
			System.out.println("Drive!");
		}
		else if(isLightYellow)
		{
			System.out.println("Slow Down!");
		}
		else 
		{
			System.out.println("Stop!");
		}
	}
}