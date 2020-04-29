#include "../../std_lib_facilities.h"

int main()
{
    string operator_char = "a";
    double num1, num2;
    cout << "\n//Mini Calulator\\\\\n options: +, -, *, / \n\n"
    << "> ";
    cin >> num1 >> operator_char >> num2;

    // operations
    if (operator_char == "+")
    {
        cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2;
    }
    else if (operator_char == "-")
    {
        cout << "The subtraction of " << num1 << " minus " << num2 << " is " << num1 - num2;
    }
    else if (operator_char == "*")
    {
        cout << "The multiplication of " << num1 << " and " << num2 << " is " << num1 * num2;
    }
    else if (operator_char == "/")
    {
        cout << "The division of " << num1 << " by " << num2 << " is " << num1 / num2;
    }
    else
    {
        cout << "Error, wrong operator.\n";
        main();
    }
    
}