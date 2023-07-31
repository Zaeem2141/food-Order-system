#include  "One.h"

FastFood::FastFood()
{
	item[0] = "Crunch Burger";
	item[1] = "Special Pizza";
	item[2] = "Fries";
	item[3] = "Pasta";
	item[4] = "Hot Wings";
	price[0] = 100;
	price[1] = 300;
	price[2] = 50;
	price[3] = 80;
	price[4] = 110;
}

void FastFood::displayFood()
{
	system("CLS");
	cout << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t           Fast Food !            " << " |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t Here is the list of Our Fast Food " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	for (int i = 0; i < 5; i++)
	{
		
		if (i == 2 || i==3)
		{
			cout << "\t\t\t\t\t|    " << i + 1 << " : " << item[i] << "                 " << price[i] << "$" << "         |" << endl;
		}
		else
			cout << "\t\t\t\t\t|    " << i + 1 << " : " << item[i] << "        " << price[i] << "$" << "         |" << endl;
	}
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
} 

string FastFood::getItem(int ind)
{
	return item[ind - 1];
}

int FastFood:: getPrice(int ind)
{
	return price[ind - 1];
}