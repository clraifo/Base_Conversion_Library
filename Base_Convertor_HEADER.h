#ifndef BASECONVERTER_H              // This is a preprocessor directive that checks if the symbol "BASECONVERTER_H" has not been defined
#define BASECONVERTER_H              // If "BASECONVERTER_H" has not been defined, it is defined in this line

#include <string>                    // This includes the string header file, which provides string-related functions and operations

namespace BaseConverter {            // This creates a new namespace named "BaseConverter"
    std::string ConvertBase(const std::string& number, int baseFrom, int baseTo);
    // This declares a function named "ConvertBase" that takes three parameters:
    //   - A const reference to a string named "number", which represents the number to be converted
    //   - An integer named "baseFrom", which represents the base system of the input number
    //   - An integer named "baseTo", which represents the base system to convert the number to
    // The function returns a string, which is the converted number in the new base system
}

#endif                               // This marks the end of the preprocessor directive
