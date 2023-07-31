#include  "One.h"

Biverges::Biverges()
{
	item[0] = "Pina Colada";
	item[1] = "Margarita";
	item[2] = "Cosmopolitan";
	item[3] = "Soft Drink";
	item[4] = "Juices";
	price[0] = 100;
	price[1] = 120;
	price[2] = 90;
	price[3] = 80;
	price[4] = 150;
}

void Biverges::displayBiv()
{
	system("CLS");
	cout << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t           Biverges    !          " << " |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t Here is the list of Our Biverges  " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	for (int i = 0; i < 5; i++)
	{

		cout << "\t\t\t\t\t|    " << i + 1 << " : " << item[i] << "        " << price[i] << "$" << "              |" << endl;
	}
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
}

string Biverges::getItem(int ind)
{
	return item[ind - 1];
}

int Biverges::getPrice(int ind)
{
	return price[ind - 1];
}