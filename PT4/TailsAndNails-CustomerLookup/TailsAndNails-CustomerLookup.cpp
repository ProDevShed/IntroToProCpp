#include <iostream>
#include <string>

int main()
{
    // Instanciate input var
    std::string custSurname = "";


    // Display initial message
    std::cout << "Enter customer surname:\t";

    // Grab user input
    std::cin >> custSurname;

    // Evaluate user input
    if (custSurname.compare("Craig") == 0)
    {
        std::cout << "Mrs D. Craig:	130-729-635\n\n";
    }
    else if (custSurname.compare("Pitt") == 0)
    {
        std::cout << "Mr B. Pitt:	580-142-259\n\n";
    }
    else if (custSurname.compare("Nicholson") == 0)
    {
        std::cout << "J. Nicholson:	474-330-294\n\n";
    }
    else if (custSurname.compare("Biel") == 0)
    {
        std::cout << "J. Biel:	775-788-512\n\n";
    }
    else if (custSurname.compare("Glover") == 0)
    {
        // Display message

        std::cout << "There are multiple customers with that surname, please enter the one you wish to see contact info for:\n\n";
        std::cout << "\tDanny\n";
        std::cout << "\tDonald\n";
        std::cout << "\tDenise\n\n\n\t";

        // Grab user input
        std::cin >> custSurname;

        // Evaluate input
        if (custSurname.compare("Danny") == 0)
        {
            std::cout << "D. Glover:	283-618-544\n\n";
        }
        else if (custSurname.compare("Donald") == 0)
        {
            std::cout << "D. Glover:	083-483-138\n\n";
        }
        else if (custSurname.compare("Denise") == 0)
        {
            std::cout << "D. Glover:	100-803-588\n\n";
        }


    }
    else
    {
        std::cout << "Name not recognised";
    }
}