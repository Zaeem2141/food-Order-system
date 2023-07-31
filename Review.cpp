#include "One.h"

Review::Review()
{
	review = "";
}

void Review::getPayment()
{
	system("CLS");
	cout << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t\t Enter your Payment Method " << endl;
	cout << "\t\t\t\t\t\t 1. Card " << endl;
	cout << "\t\t\t\t\t\t 2. Cash " << endl;

}

void Review::getReview()
{
	cin.ignore();
	cout << "\t\t\t\t\t\t Enter your Revview About Bar " << endl;
	getline(cin, review);
}