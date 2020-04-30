#include "../../std_lib_facilities.h"

int main()
{

    // vector used for testing purposes
    vector<string> str_sequence = { "Wow", "Gaming", "Whatsgaming", "IJustWannaKeepDistance", "Whatsgaming", "Whatsgaming", "Whatsgaming" , "Wokeheid", "GG", "Wow", "zzzzzzzzzzzzzzzzzzzzzzzz" };  
    
    // sort is needed for 
    sort(str_sequence);

    // min
    string str_min = str_sequence[0];
    // max
    string str_max = str_sequence[0];
    // most
    string current_str = str_sequence[0];
    int current_count = 0;
    string most_appearences = str_sequence[0];
    int most_count = 0;

    // find min and max
    for (string x : str_sequence)
    {
        // min
        if (str_min.size() > x.size())
            str_min = x;

        // max
        if (str_max.size() < x.size())
            str_max = x;

        // mode
        if(x == current_str)
        {
            ++current_count;
            cout << x << " increased" << endl;
            if(current_count > most_count)
            {
                most_appearences = x;
                most_count = current_count;
            }
        }
        else
        {
            current_str = x;
            current_count = 1;
        }
    }

    cout << "min: " << str_min << " max: " << str_max << endl;
    cout << "mode: " << most_appearences << " count: " << most_count << endl;


}