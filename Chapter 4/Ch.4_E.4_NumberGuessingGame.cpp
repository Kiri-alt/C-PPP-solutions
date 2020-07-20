// Programming: Principles and Practice Using C++ (2nd edition) by Bjarne Stroustrup 
// Chapter 4 exercise 4

#include "../../std_lib_facilities.h"

int binary_search_numbers();
int recurse(int low, int high);

int main()
{
	cout << "The number you are thinking of is: " << recurse(1, 100);
}

int recurse(int low, int high) {
	// guess number based upon asking questions and by narrowing range of possible guesses
	// solution using recursion
	
	// recursion exeption
	if (low == high) {
		return low;
	}

	int mid = low + (high - low) / 2;
	char cmd = 'a';

	// ask question
	cout << "number less than ";
	if ((high - low + 1) % 2 == 0)
		cout << mid + 1;
	else
		cout << mid;
	cout << "? (y/n): ";
	cin >> cmd;

	// more than or equal
	// right in the tree
	if (cmd == 'n')
	{
		if ((high - low + 1) % 2 == 0) // 50
			recurse(mid + 1,high);
		else  // 25
			recurse(mid, high);
	} 
	else
	// less than
	// left in the tree
	if (cmd == 'y')
	{
		if ((high - low + 1) % 2 == 0) // 50
			recurse(low, mid);
		else // 25
			recurse(low,mid - 1);
	}
	else
	{
		cout << "Error: You chose an invalid command, try again.\n";
		recurse(low, high);
	}
}

// old, non-recursive solution I made

/*
int binary_search_numbers()
{
	int low = 1;
	int high = 100;
	int mid = 0;
	char cmd = 'a';

	int range = high - low + 1;

	while (range > 1) {
		mid = low + (high - low) / 2;

		// ask question and receive input
		cout << "number less than ";
		if (range % 2 == 0)
			cout << mid + 1;
		else
			cout << mid;
		cout << "? (y/n): ";
		cin >> cmd;

		// more than or equal
		// right in the tree
		if (cmd == 'n')
		{
			if (range % 2 == 0) // 50
			{
				low = mid + 1;
			}
			else  // 25
			{
				low = mid;
			}
		}

		// less than
		// left in the tree
		if (cmd == 'y')
		{
			if (range % 2 == 0) // 50
			{
				high = mid;
			}
			else // 25
			{
				high = mid - 1;
			}
		}

		// print range in which number is
		// cout << "range: " << low << " - " << high << "\n";

		// calculate range
		range = high - low + 1;
	}

	// return mid
	return mid;
}
*/
