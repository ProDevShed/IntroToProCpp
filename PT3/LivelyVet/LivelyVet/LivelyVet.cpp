#include <iostream>
#include <iostream>

int main()
{
    // Instantiate variables
    std::string medication = "FleaAway";
    std::string dosage = "100ml";
    std::string useage = "Use as hair/body wash, once per day for six days.";
    std::string misuse = "If treatment comes into contact with eyes or is ingested please see your closest coroner.";

    // Setup text lines
    std::string alert = "**Dosage alert**\n"; 
    std::string openingCurly = "{\n";
    std::string line1 = "    Prescribed medication, " + medication + ", can be potentially to be deadly.\n";    // 4 spaces to indent lines
    std::string line2 = "    Dosage:\n";
    std::string line2Dosage = "\t" + dosage + "\n";  // tab to indent to the right, greater than 4 spaces indentation
    std::string line3 = "    Instructions :\n";
    std::string line3Usage = "\t" + useage + "\n";
    std::string line4 = "    Misuse guide :\n";    
    std::string line4Misuse = "\t" + misuse + "\n";
    std::string closingCurly = "}\n\n";

    // Print lines of text to console
    std::cout << alert << openingCurly << line1 << line2 << line2Dosage << line3 << line3Usage << line4 << line4Misuse << closingCurly;
}
