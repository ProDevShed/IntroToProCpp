#include <iostream>
#include <string>

int main()
{
    // Setup variables
    std::string companyShortName = "TooCool";
    std::string comapnyName = "ToolCool Systems Ltd";
    std::string version = "2.3";
    std::string positionTitle = "CEO";
    std::string sender = "Garry Goodspeed";

    // Setup text lines
    std::string line1 = comapnyName +  "\n\n";
    std::string line2 = "Please read and agree to the T&Cs before using the awesome IT services at " + companyShortName + ".\n";
    std::string line3 = "T&Cs are currently version " + version + ", ensure you have viewed the latest copy as changes come into effect on publishing\n\n";
    std::string line4 =  positionTitle + "\n";
    std::string line5 = sender + "\n\n";

    // Print lines of text to console
    std::cout << line1 << line2 << line3 << line4 << line5;
}