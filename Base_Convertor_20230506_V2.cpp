#include <iostream>
#include <string>
#include "Base_Convertor_HEADER.h"

int main()
{
    while (true)
    {
        // Get input from user
        int baseFrom, baseTo;
        std::string number;
        std::cout << "Enter the base of your input number: ";
        std::cin >> baseFrom;
        std::cout << "Enter your input number: ";
        std::cin >> number;
        std::cout << "Enter the base you want to convert to: ";
        std::cin >> baseTo;

        // Convert the number and display the result
        std::string result = BaseConverter::ConvertBase(number, baseFrom, baseTo); // Use the correct namespace to access the ConvertBase function
        std::cout << number << " (base " << baseFrom << ") = " << result << " (base " << baseTo << ")" << std::endl;

        // Ask user if they want to continue
        char choice;
        std::cout << "Do you want to convert another number? (y/n): ";
        std::cin >> choice;
        if (choice != 'y' && choice != 'Y')
        {
            break;
        }
    }

    return 0;
}
