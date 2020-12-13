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
    else
    {
        std::cout << "Input not recognised...\n\n";
    }

}
