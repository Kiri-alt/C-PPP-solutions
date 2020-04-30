// The inventor asked for one grain of rice for the first square, 2 for the
// second, 4 for the third, and so on, doubling for each of the 64 squares.

#include "../../std_lib_facilities.h"

int count_steps(int minimum, int iteration);

int main()
{
    // i'm first going to try to solve this issue with recursion.
    cout << "How much rice do you want: ";
    int local_minimum; // minimal amount of rice grains asked
    cin >> local_minimum;
    int minimum_squares = count_steps(local_minimum, 0);
    cout << "\nThe minimum amound of squares you'd need for that amount of rice is: " << minimum_squares << endl;
}

int count_steps(int minimum, int iteration)
{
    if (minimum < pow(2, iteration)) return iteration;
    else
    {
        // output for clarity
        cout << "> i = " << iteration << ", bigger than: " << pow(2, iteration) << endl;

        // up the iteration
        ++iteration;
        
        // call the function on the new iteration
        return count_steps(minimum, iteration);
    }
    return 0;
}