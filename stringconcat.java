class stringconcat
{
	public static void main(String[] args)
	{
		String driverFirstName="Hamish";
		String driverSecondName="Blake";
		String driverFullName=driverFirstName + driverSecondName;
		System.out.println(driverFullName);
		driverFullName= driverFirstName + " " + driverSecondName;
		System.out.println(driverFullName);
		int stop,fare;
		stop=0;
		fare=0;
		stop=stop+1;
		fare=fare+5;
		stop=stop+1;
		fare=fare+3;
		stop=stop+1;
		fare=fare+7;
		System.out.println("The Bus made $" +fare + " after " + stop + " stops.");
	}
}