#include <iostream>
#include <string>

int main()
{
    std::string inputVar = "";


    //  Initial display message
    std::cout << "Please enter department:  \n\n";


    //  Grab user input
    std::getline(std::cin, inputVar);


    //  Evaluate input
    if (inputVar.compare("Hotel stay") == 0)
    {
        std::cout << "Dept code: 11962\n\n";
    }
    else if (inputVar.compare("IT hardware") == 0)
    {
        std::cout << "Dept code: 23195\n\n";
    }
    else if (inputVar.compare("Entertainment") == 0)
    {
        std::cout << "Dept code: 15168\n\n";
    }
    else if (inputVar.compare("Office supplies") == 0)
    {
        std::cout << "Dept code: 15569\n\n";
    }
    else if (inputVar.compare("Property") == 0)
    {
        //  Declare secondery input
        std::string inputOffSup = "";


        //  Display secondery message
        std::cout << "Please enter property sub catagory\n\n";


        //  Grab user input
        std::getline(std::cin, inputOffSup);


        //  Evaluate input
        if (inputOffSup.compare("Industrial") == 0)
        {
            std::cout << "Prop-Ind-0019\n\n";
        }
        if (inputOffSup.compare("Commercial") == 0)
        {
            std::cout << "Prop-Com-0236";
        }
        if (inputOffSup.compare("Residential") == 0)
        {
            std::cout << "Prop-Res-5128";
        }
        if (inputOffSup.compare("Agricultural") == 0)
        {
            std::cout << "Prop-Agri-2075";
        }
        if (inputOffSup.compare("Development") == 0)
        {
            std::cout << "Prop-8219";
        }
    }
    else
    {
        std::cout << "Input not recognised\n\n";
    }



}
