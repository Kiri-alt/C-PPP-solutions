#include "../../std_lib_facilities.h"

double cm_base(double number, string command);

constexpr double cm_m = 1.0/100.0;
constexpr double in_m = 2.54 * cm_m;
constexpr double ft_m = 12 * in_m;

int main()
{
	vector<double> row;
	double input = 0;
	double sum = 0;
	string cmd = "";
	// conversation rates
	while (cin >> input >> cmd)
	{
		// write input
		//cout << input << cmd;

		// conversation into standard unit
		if (cm_base(input, cmd) != 0)
		{
			input = cm_base(input, cmd);
		}
		else 
		{
			cout << "Error: Try agian.\n";
			continue;
		}

		// push input into the row
		row.push_back(input);
		// add input to sum
		sum += input;
		//sort row
		sort(row);

		// row features
		if (row[0] == input && row.size() > 1) // checks the smallest in the list
		{
			cout << "smallest in the list\n";
		}
		else if (row[row.size() - 1] == input && row.size() > 1) // checks the biggest in the list
		{
			cout << "biggest in the list\n";
		}
		else 
		{
			cout << "\n";
		}
	}
	// end of the loop
	if (row.size() > 1) {
		cout << "Smallest in the row: " << row[0] << " m\n"
			<< "Biggest in the row: " << row[row.size() - 1] << " m\n"
			<< "Number of values: " << row.size() << "\n"
			<< "Sum: " << sum << " m\n\n";
	}
	for (double x : row) {
		cout << x << " meters\n";
	}
	return 0;
}

double cm_base(double number, string command) 
{
	if (command == "cm")
	{
		return number * cm_m;
	}
	else if (command == "m")
	{
		return number;
	}
	else if (command == "in")
	{
		return number * in_m;
	} 
	else if (command == "ft")
	{
		return number * ft_m;
	}
	else 
	{
		cout << "unkown unit\n";
		return 0;
	}
}