#include  "One.h"

Icecream::Icecream()
{
	item[0] = "Gelato";
	item[1] = "Kulfi";
	item[2] = "Soft Serve";
	item[3] = "Sandwich IceCrea";
	item[4] = "Booza";
	price[0] = 60;
	price[1] = 80;
	price[2] = 50;
	price[3] = 100;
	price[4] = 50;
}

void Icecream::displayIce()
{
	system("CLS");
	cout << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t            Ice Cream!            " << " |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t Here is the list of Our Ice Cream " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	for (int i = 0; i < 5; i++)
	{

		if (i == 0 || i == 1)
		{
			cout << "\t\t\t\t\t|    " << i + 1 << " : " << item[i] << "                   " << price[i] << "$" << "      |" << endl;
		}
		else
			cout << "\t\t\t\t\t|    " << i + 1 << " : " << item[i] << "        " << price[i] << "$" << "         |" << endl;
	}
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
}

string Icecream::getItem(int ind)
{
	return item[ind - 1];
}

int Icecream::getPrice(int ind)
{
	return price[ind - 1];
}