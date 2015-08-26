// This program calcualtes the tip based on a percentage and a bill total
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double bill, tip, tipAmount, total;

	// Introduction
	cout << "Welcome to Microsoft Bistro!" << endl;

	// Collect bill info
	cout << "How much was you bill today? $";
	cin >> bill;

	// Collect tip information
	cout << "How much are you planning to tip today?" << endl;
	cout << "Note: 15% is recommended!" << endl;
	cout << "(Please enter percent as two digits) ";
	cin >> tip;

	// Perform calculation
	tipAmount = bill * ( tip / 100 );
	total = bill + tipAmount;
	
	// Inform user of results
	cout << "Perfecto!" << endl;
	cout << "At a rate of " << tip;
	cout << fixed;
	cout << "%, the tip will be $" << setprecision(2) << tipAmount << "." << endl;
	cout << "This brings your total bill to $" << setprecision(2) << total << "." << endl;

	return 0;
}