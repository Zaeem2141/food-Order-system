#include "One.h"

Order::Order()
{
	val = 0;
}

void Order::updateOrder(int menu, int item, int quan)
{
	int a = val;
	if (menu == 1)
	{

		orderList[a] = FastFood::getItem(item);
		price[a] = FastFood::getPrice(item);
		quantity[a] = quan;
	}
	else if (menu == 2)
	{
		orderList[a] = Coffee::getItem(item);
		price[a] = Coffee::getPrice(item);
		quantity[a] = quan;
	}
	else if (menu == 3)
	{
		orderList[a] = Icecream::getItem(item);
		price[a] = Icecream::getPrice(item);
		quantity[a] = quan;
	}
	else if (menu == 4)
	{
		orderList[a] = Biverges::getItem(item);
		price[a] = Biverges::getPrice(item);
		quantity[a] = quan;
	}
	val++;
}

string* Order::getList()
{
	return orderList;
}
int* Order::getP()
{
	return price;
}
int* Order::getQua()
{
	return quantity;
}
int Order :: getT()
{
	return val;
}

void Order::displayOrder()
{
	system("CLS");
	cout << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t         ThankYou!                " << " |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t        Here is Your Order          " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \tItems              Quantity        " << "|" << endl;
	for (int i = 0; i < val; i++)
	{
		cout << "\t\t\t\t\t" << "|" << orderList[i] << "             " << quantity[i] << "         |" << endl;
	}
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
}