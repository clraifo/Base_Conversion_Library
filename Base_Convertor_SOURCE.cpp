#include "Base_Convertor_HEADER.h"      //includes the custom header file
#include <vector>               //allows the use of vectors
#include <algorithm>            //includes the algorithm library
#include <cmath>                //includes the cmath library
#include <string>


namespace BaseConverter {	                                                        //declares the namespace BaseConverter
    std::string ConvertBase(const std::string& number, int baseFrom, int baseTo)    //declares the function ConvertBase
    {
        std::vector<int> digits;	//declares a vector of integers
        std::string result;			//declares a string variable

        // Loop through each character in the input number string
        for (int i = 0; i < number.length(); i++)
        {
            int digit = 0;
            // If the character is a digit (0-9), convert it to an integer
            if (isdigit(number[i]))
            {
                digit = number[i] - '0'; // Subtracting the ASCII value of '0' converts a digit character to its integer value
            }
            // If the character is a letter (A-F or a-f), convert it to an integer
            else if (isalpha(number[i]))
            {
                digit = tolower(number[i]) - 'a' + 10; // Subtracting the ASCII value of 'a' and adding 10 converts a hex letter to its integer value
            }
            // Add the integer value of the character to the digits vector
            digits.push_back(digit);
        }

        // Convert array of digits to a string in base "baseTo"
        long long decimalNumber = 0;                        //declares a long long variable, names it decimalNumber, and sets it equal to 0
        long long multiplier = 1;						   //declares a long long variable, names it multiplier, and sets it equal to 1
        for (int i = digits.size() - 1; i >= 0; i--)		//declares an integer variable, names it i, and sets it equal to the size of the digits vector minus 1; while i is greater than or equal to 0, subtract 1 from i
        {
            decimalNumber += digits[i] * multiplier;		//adds the value of the element at index i of the digits vector multiplied by the value of multiplier to decimalNumber
            multiplier *= baseFrom;							//multiplies the value of multiplier by the value of baseFrom
        }

        while (decimalNumber != 0)							//while decimalNumber is not equal to 0
        {
            int remainder = decimalNumber % baseTo;			//declares an integer variable, names it remainder, and sets it equal to the remainder of decimalNumber divided by baseTo
            decimalNumber /= baseTo;						//divides decimalNumber by baseTo
            char digit = (remainder < 10) ? ('0' + remainder) : ('a' + remainder - 10);	//declares a character variable, names it digit, and sets it equal to the value of remainder if remainder is less than 10, otherwise sets it equal to the value of remainder minus 10 plus 'a'
            result = digit + result;						//sets result equal to the value of digit plus result
        }

        // Return the result
        return result;
    }
}
