//hw5-12.cpp - displays the total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double price1, price2, total, lowerPrice;

	cout << "Enter the price of item 1: ";
	cin >> price1;
	cout << "Enter the price of item 2: ";
	cin >> price2;

	//Determin the lower price
	if (price1 < price2) {
		lowerPrice = price1;
	}
	else {
		lowerPrice = price2;
	}
	//calculate total with half off on the lower price
	total = price1 + price2 - (lowerPrice / 2);

	cout << fixed << setprecision(2);
	cout << "Total owed: $" << total << endl;


	return 0;
}	//end of main function