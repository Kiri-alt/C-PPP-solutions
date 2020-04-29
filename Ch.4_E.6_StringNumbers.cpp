#include "../../std_lib_facilities.h"

int main()
{
    string in_num = "";
    int out_num = -1;
    vector<string> numbers = { "zero" , "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    cout << "Type out a number: ";
    cin >> in_num;

    // do a linear search for the strings
    for (int i = 0; i < 10; ++i)
    {
        if (in_num == numbers[i])
        {
            out_num = i;
        }
    }
    if (out_num == -1)
    {
        cout << "Please enter a number in string form (e.g. \"two\")! \n";
        main();
    }
    else
    {
        cout << "You entered: " << out_num << "\n";
    }
    
}