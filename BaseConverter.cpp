#include "BaseConverter.h"
#include <vector>
#include <algorithm>
#include <cmath>

namespace BaseConverter {
    std::string ConvertBase(const std::string& number, int baseFrom, int baseTo)
    {
        std::vector<int> digits;
        std::string result;

        // Convert input number to an array of digits in base "baseFrom"
        for (int i = 0; i < number.length(); i++)
        {
            int digit = 0;
            if (isdigit(number[i]))
            {
                digit = number[i] - '0';
            }
            else if (isalpha(number[i]))
            {
                digit = tolower(number[i]) - 'a' + 10;
            }
            digits.push_back(digit);
        }

        // Convert array of digits to a string in base "baseTo"
        long long decimalNumber = 0;
        long long multiplier = 1;
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            decimalNumber += digits[i] * multiplier;
            multiplier *= baseFrom;
        }

        while (decimalNumber != 0)
        {
            int remainder = decimalNumber % baseTo;
            decimalNumber /= baseTo;
            char digit = (remainder < 10) ? ('0' + remainder) : ('a' + remainder - 10);
            result = digit + result;
        }

        // Return the result
        return result;
    }
}
