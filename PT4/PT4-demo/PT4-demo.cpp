#include <iostream>
#include <string>

int main()
{
	/*
	//	Instanciate variable
	std::string usepInput = "";
	std::string anotherInput = "";

	//	display message to use
	std::cout << "Please enter something:\n\n";

	//	Captue input
	//std::cin >> usepInput >> anotherInput;
	std::getline(std::cin, usepInput);

	// Display input to console
	std::cout << "You entered: " << usepInput << " and " << anotherInput << "\n";
	*/
	/*
		==
		!=
		>
		<
		>=
		<=
	*/
	
	std::string goodDay = "";

	std::cout << "Did you have a nice day, y for yes, n for no?\n\n";

	std::cin >> goodDay;

	if (goodDay.compare("y") == 0)
	{
		std::cout << "I'm glad you had a nice day :)\n\n";
		int myInt = 5;
	}
	else if (goodDay.compare("n") == 0)
	{
		std::cout << "Sorry to hear that :(\n\n";
	}
	else if (goodDay.compare("secret") == 0)
	{
		std::cout << "I have a secret, but I'll never tell :)\n\n";
	}
	else
	{
		std::cout << "Input not recognised\n\n";
	}
	
}
