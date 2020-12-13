#include <iostream>
#include <string>

int main()
{
    // Insantiate input variable
    std::string userCode = "";

    // Display Message
    std::cout << "Terminal Active: awaiting input |";

    // Grab input
    std::cin >> userCode;

    // To improve console readability
    std::cout << "\n\n";


    // Evaluate input
    if (userCode.compare("Foxtrot-Alpha-Delta-Echo") == 0)
    {
        std::cout << "Project F.A.D.E Access code: 959-1982\n\n";
    }
    // Change req 1
    else if (userCode.compare("Date") == 0)
    {
        std::cout << "System error: Date calculation misread – only year calculated: 2045\n\n";
    }
    // Change req 2
    else if (userCode.compare("Valerian-Sky-Ripper-Alpha") == 0)
    {
        std::cout << "Project Valerian Sky-ripper Alpha" << "\n";
        std::cout << "In atmos sub-light transporter" << "\n\n";
        std::cout << "70°13'32.4\"N 20°40'15.5\"E" << "\n";
    }
    else
    {
        std::cout << "Input not recognised...\n\n";
    }

}
