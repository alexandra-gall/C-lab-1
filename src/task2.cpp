const char* greet(int hour, int min)
{

	if (hour>=0 && hour < 6)
		return "Good night!\n";
	if (hour >= 6 && hour < 11)
		return "Good morning!\n";
	if (hour >= 11 && hour < 18)
		return "Good day!\n";
	if (hour >= 18 && hour < 24)
		return "Good evening!\n";
	else
		return "Uncorrect time!\n";
}