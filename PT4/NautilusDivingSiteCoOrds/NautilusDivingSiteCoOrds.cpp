#include <iostream>
#include <string>

int main()
{
    //  Instantiate use input var
    std::string diveSite = "";

    //  Display message
    std::cout << "Enter Dive site\n\n";

    //  Grab user input
    std::getline(std::cin,diveSite);

    // Evaluate user input
    if (diveSite.compare("Isla Sorna") == 0)
    {
        std::cout << "Isla Sorna: 8°00'25.1\"N 87°00'40.2\"W" << "\n";
    }
    else if (diveSite.compare("Blue hole") == 0)
    {
        std::cout << "Blue hole: 28°34'22.7\"N 34°32'14.8\"E" << "\n";
    }
    else if (diveSite.compare("Cenote Angelita") == 0)
    {
        std::cout << "Cenote Angelita: 20°08'16.0\"N 87°34'39.9\"W" << "\n";
    }
    else if (diveSite.compare("Raja Ampat") == 0)
    {
        std::cout << "Raja Ampat: 0°33'26.5\"S 130°40'36.5\"E" << "\n";
    }
    else if (diveSite.compare("Loch Long") == 0)
    {
        //  Display Loch Long message
        std::cout << "There are multiple sites at Loch Long, please enter the one you wish to see more info for:\n\n\t\t";
        std::cout << "Conger Alley\n\t\t";
        std::cout << "The caves\n\n";

        //  Use existing input var
        std::getline(std::cin, diveSite);

        // Evaluate input
        if (diveSite.compare("Conger Alley") == 0)
        {
            std::cout << "Conger Alley: 56°11'29.8\"N 4°46'39.4\"W";
        }
        else if (diveSite.compare("The caves") == 0)
        {
            std::cout << "The caves: 56°10'47.9\"N 4°46'28.8\"W";
        }
    }
    else
    {
        std::cout << "Site not recognised.\n\n";
    }
}
