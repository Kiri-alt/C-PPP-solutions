#include "../../std_lib_facilities.h"

int main()
{
	// exchange rates
	constexpr double yen_dollar = 107.113;
	constexpr double pound_dollar = 0.803864;
	constexpr double kroner_dollar = 6.88861;
	constexpr double yuan_dollar = 7.08575;

	// initialisation
	double amount = 0;
	char curr = 'a';
	double retval = 0;

	cout << "//Convert Currency Calculator\\\\\n\n"
		<< "Supported currencies:\n \tYen (j)\n \tPound (p)\n \tKrone (k)\n \tYuan (y)\n\n";

	// input

	cout << "Enter your amount and currency: ";
	cin >> amount >> curr;

	// swich cases
	switch(curr){
	case 'j':
		retval = amount / yen_dollar;
		break;
	case 'p':
		retval = amount / pound_dollar;
		break;
	case 'k':
		retval = amount / kroner_dollar;
		break;
	case 'y':
		retval = amount / yuan_dollar;
		break;
	default:
		cout << "Enter input in this from: 123(amount) y(currency) => 123 y";
		return 0;
		break;
	}

	// output
	cout << amount << " " << curr << " => " << retval << " dollar";

}