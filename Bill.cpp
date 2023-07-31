#include "One.h"

Bill::Bill()
{
	total = 0;
}

void Bill::displayBill(Order o)
{
	string* s = o.getList();
	int* p = o.getP();
	int* q = o.getQua();
	int size = o.getT();
	cout << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t         ThankYou!                " << " |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t        Here is Your Bill          " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \tItems       Quantity        Price  " << "|" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "\t\t\t\t\t" << "|" << s[i] << "       " << q[i] << "       " << p[i] * q[i]<<"|" << endl;
		total += p[i] * q[i];
	}
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t Your Total is  :    "<<total<<"   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
}