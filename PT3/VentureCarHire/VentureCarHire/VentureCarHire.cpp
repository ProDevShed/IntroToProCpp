#include <iostream>
#include <string>

int main()
{
    // Instantiate variables
    std::string carName = "Lincoln MKZ";
    std::string supervisor = "J Roberts";
    std::string value = "2500.99";

    // Instantiate lines of text
    std::string alert = "**ALERT**\n";
    std::string lineOfStars = "**********************************************\n";
    std::string line1 = "Lease of the " + carName +" is reserved for member only.\n";
    std::string line2 = "For non - members this requires a completed non - member lease override form from supervisor " + supervisor + " and " + value + " deposit.\n";
    std::string line3 = "Failure to follow these steps will result in disciplinary procedures and possible termination.\n";

}
