#include "One.h"

int main()
{
	Mainpage p;
	FastFood f;
	Coffee c;
	Icecream i;
	Biverges b;
	int choice = 0;
	Order o;
	p.waiterWel();
	cout << "\t\t\t\t\t\tEnter You choice : ";
	cin >> choice;
	if (choice == 0)
	{
		exit(0);
	}
	else
	{
		do
		{
			system("cls");
			string name, phone, email, add, cnic;
			cout << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "\t\t\t\t\t\t Your Name Please :  ";
			cin >> name;
			cout << "\t\t\t\t\t\t Your Number Please :  ";
			cin >> phone;
			cout << "\t\t\t\t\t\t Your Email Please :  ";
			cin >> email;
			cout << "\t\t\t\t\t\t Your Address Please :  ";
			cin >> add;
			cout << "\t\t\t\t\t\t Your Cnic Please :  ";
			cin >> cnic;
			Customer c(name, cnic, email, phone, add);
			p.CustomerDetails(c);
			cout << "\t\t\t\t\t\tEnter You choice : ";
			cin >> choice;
		} while (choice == 2);
		int item = 0,quantity=0,flag=0;
		if (choice == 1)
		{
			do
			{
				p.welcomePage();
				cout << "\t\t\t\t\t\tEnter You choice : ";
				cin >> choice;
				if (choice == 1)
				{
					do
					{
						f.displayFood();
						cout << "\t\t\t\t\t\tEnter You choice : ";
						cin >> item;
						cout << "\t\t\t\t\t\tEnter Quantity  : ";
						cin >> quantity;
						o.updateOrder(1, item, quantity);
						cout << "\t\t\t\t\t\t1. Add More From Here  " << endl;
						cout << "\t\t\t\t\t\t2. Return to the Menu  " << endl;
						cout << "\t\t\t\t\t\t0. Nothing More        " << endl;
						cout << "\t\t\t\t\t\t";
						cin >> choice;
					} while (choice == 1);
					if (choice == 2)
						flag = 1;
					else if (choice == 0)
						flag = 0;
				}
				else if (choice == 2)
				{
					do
					{
						c.displayCoffee();
						cout << "\t\t\t\t\t\tEnter You choice : ";
						cin >> item;
						cout << "\t\t\t\t\t\tEnter Quantity  : ";
						cin >> quantity;
						o.updateOrder(2, item, quantity);
						cout << "\t\t\t\t\t\t1. Add More From Here  " << endl;
						cout << "\t\t\t\t\t\t2. Return to the Menu  " << endl;
						cout << "\t\t\t\t\t\t0. Nothing More        " << endl;
						cout << "\t\t\t\t\t\t";
						cin >> choice;
					} while (choice == 1);
					if (choice == 2)
						flag = 1;
					else if (choice == 0)
						flag = 0;

				}
				else if (choice == 3)
				{
					do
					{
						i.displayIce();
						cout << "\t\t\t\t\t\tEnter You choice : ";
						cin >> item;
						cout << "\t\t\t\t\t\tEnter Quantity  : ";
						cin >> quantity;
						o.updateOrder(3, item, quantity);
						cout << "\t\t\t\t\t\t1. Add More From Here  " << endl;
						cout << "\t\t\t\t\t\t2. Return to the Menu  " << endl;
						cout << "\t\t\t\t\t\t0. Nothing More        " << endl;
						cout << "\t\t\t\t\t\t";
						cin >> choice;
					} while (choice == 1);
					if (choice == 2)
						flag = 1;
					else if (choice == 0)
						flag = 0;

				}
				else if (choice == 4)
				{
					do
					{
						b.displayBiv();
						cout << "\t\t\t\t\t\tEnter You choice : ";
						cin >> item;
						cout << "\t\t\t\t\t\tEnter Quantity  : ";
						cin >> quantity;
						o.updateOrder(4, item, quantity);

						cout << "\t\t\t\t\t\t1. Add More From Here  " << endl;
						cout << "\t\t\t\t\t\t2. Return to the Menu  " << endl;
						cout << "\t\t\t\t\t\t0. Nothing More        " << endl;
						cout << "\t\t\t\t\t\t";
						cin >> choice;
					} while (choice == 1);
					if (choice == 2)
						flag = 1;
					else if (choice == 0)
						flag = 0;

				}
			} while (flag == 1);
			o.displayOrder();
			cout << "\t\t\t\t\t\tThanks Your Order will be here in a while " << endl<<endl<<endl;
			cout << "\t\t\t\t\t\tPress Enter if your done with your food to have Bill" << endl;
			system("pause");
			Bill b;
			Review r;
			b.displayBill(o);
			r.getPayment();
			cout << "\t\t\t\t\t\tEnter Your choice : "<<endl;
			cout << "\t\t\t\t\t\t";
			cin >> item;
			cout << endl;
			r.getReview();
			cout <<endl<<endl<< "\t\t\t\t\t Thanks For Visiting Here " << endl;
		}
	}
}