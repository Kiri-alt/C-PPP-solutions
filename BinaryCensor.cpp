#include "../../std_lib_facilities.h"

int defined(string str, vector<string> filter);
int binary_defined(string str, vector<string> filter);

int main()
{
	vector<string> disliked = { "Broccoli", "Raddish", "Natto" };
	sort(disliked);
	for (string in;cin >> in;)
	{
		// we use binary search rather than linear search for sake of efficiency, eventho this requires a call of the sort function
		if (binary_defined(in, disliked)) cout << "BLEEP\n";
		else cout << in << "\n";
	}
}

int defined(string str, vector<string> filter)
{
	// linear search algorithm for finding a string in a vector<string>
	for (string x : filter)
	{
		if (x == str)return 1;
	}
	return 0;
}

int binary_defined(string str, vector<string> filter)
{
	return binary_search(filter.begin(), filter.end(), str) ? 1 : 0;
}