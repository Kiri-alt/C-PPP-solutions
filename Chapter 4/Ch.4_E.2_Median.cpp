#include "../../std_lib_facilities.h"

double median(vector<double> list);

int main()
{
	// load vector with test values
	vector<double> vector_test = { 1.2, 1.3, 1.4, 2.1 };
	
	// output result of median function on test-vector 
	cout << median(vector_test);
}

double median(vector<double> list) 
{
	// index of (lower) middle item in vector
	int spot = list.size() / 2 - 1;
	
	if (list.size() % 2 == 0)
	{
		return (list[spot] + list[spot++]) / 2;
	}
	else {
		return list[spot];
	}
}
