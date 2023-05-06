/*

This is the main function for the base convertor program. It will prompt the user for the base of 
the input number, the input number, and the base to convert to. It will then call the ConvertBase 
function from the Base_Convertor_HEADER.h file to convert the number and display the result. It 
will then ask the user if they want to convert another number. If the user chooses to convert 
another number, the program will repeat. If the user chooses not to convert another number, the 
program will end.

You can use this as the main, or you can use the header and source files to create your own main.

*/

#include <iostream>                     //allows the use of input and output
#include <string>                       //allows 
#include "Base_Convertor_HEADER.h"      //includces the custom header file

int main()
{
    while (true)                        //start a while loop that will run until the user chooses to exit
    {
        int baseFrom, baseTo;                                   //declares two integer variables, names them baseFrom and baseTo
        std::string number;			                            //declares a string variable, names it number
        std::cout << "Enter the base of your input number: ";   //solicits input from the user
        std::cin >> baseFrom;		                            //stores the user's input in the variable baseFrom
        std::cout << "Enter your input number: ";               //solicits input from the user
        std::cin >> number;			                            //stores the user's input in the variable number
        std::cout << "Enter the base you want to convert to: "; //solicits input from the user
        std::cin >> baseTo;			                            //stores the user's input in the variable baseTo

        // Convert the number and display the result
        std::string result = BaseConverter::ConvertBase(number, baseFrom, baseTo); // Use the correct namespace to access the ConvertBase function
        
        //displays the result of the conversion
        std::cout << number << " (base " << baseFrom << ") = " << result << " (base " << baseTo << ")" << std::endl; 

        // Ask user if they want to continue
        char choice;                                                        //declares a character variable, names it choice
        std::cout << "Do you want to convert another number? (y/n): ";      //solicits input from the user
        std::cin >> choice;												    //stores the user's input in the variable choice
        if (choice != 'y' && choice != 'Y')                                 //if the user's input is not equal to 'y' or 'Y'
        {
            break;														    //break out of the while loop
        }
    }

    return 0;
}
