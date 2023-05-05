#pragma once                //ensures that this header file is only included once during compilation
#ifndef BASECONVERTER_H     //ensures the contents of the header file are only included once in a given translation unit
#define BASECONVERTER_H     //defines the header file

#include <string>           //allows the use of strings

namespace BaseConverter {	                                                        //declares the namespace BaseConverter
    std::string ConvertBase(const std::string& number, int baseFrom, int baseTo);   //declares the function ConvertBase
}

#endif      //end of conditioanl code started in line 2
