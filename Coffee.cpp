#include  "One.h"


Coffee::Coffee()
{
	item[0] = "Green Tea";
	item[1] = "Black Tea";
	item[2] = "Cappuccino";
	item[3] = "Americano";
	item[4] = "Latte";
	price[0] = 60;
	price[1] = 70;
	price[2] = 100;
	price[3] = 110;
	price[4] = 40;
}

void Coffee::displayCoffee()
{
	system("CLS");
	cout << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t           Coffee    !            " << " |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t Here is the list of Our Coffees   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	for (int i = 0; i < 5; i++)
	{

			cout << "\t\t\t\t\t|    " << i + 1 << " : " << item[i] << "        " << price[i] << "$" << "              |" << endl;
	}
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
}

string Coffee ::getItem(int ind)
{
	return item[ind - 1];
}

int Coffee ::getPrice(int ind)
{
	return price[ind - 1];
}