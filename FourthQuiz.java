class FourthQuiz{
	public static void main(String[] args)
	{
		boolean passport = false;
		boolean birthCertificate = true;
		boolean driverLicense = true;

		if(passport){
			System.out.println("A passport is a valid ID.");
		} else if(birthCertificate){
			System.out.println("A birth certificate is a valid Id.");
		} else if(driverLicense){
			System.out.println("A driver's License is a valid Id.");
		} else {
			System.out.println("Invalid Id. Your application is denied.");
		}
	}
}