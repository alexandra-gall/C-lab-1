const char* greet(int hour, int min)
{

	if (hour>=0 && hour < 6)
		return "Good night!";
	if (hour >= 6 && hour < 11)
		return "Good morning!";
	if (hour >= 11 && hour < 18)
		return "Good day!";
	if (hour >= 18 && hour < 24)
		return "Good evening!";
	else
		return "Uncorrect time!";
}
