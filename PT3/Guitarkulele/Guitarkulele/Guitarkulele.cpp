#include <iostream>
#include <string>

int main()
{
    // Setup variables
    std::string line1 = "e | --0------0--0---------------0\n";
    std::string line2 = "B | --1-/-3--3-----3------------3\n";
    std::string line3 = "G | --0------0--------0---------0\n";
    std::string line4 = "D | --2-/-4-4------------4-------\n";
    std::string line5 = "A | --3-/-5-5-----------------5--\n";
    std::string line6 = "E | --0------0--------------0----\n\n";

    // Print lines of text to console
    std::cout << line1 << line2 << line3 << line4 << line5 << line6;
}
