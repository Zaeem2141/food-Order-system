#include "One.h"


void Mainpage::welcomePage()
{
	system("CLS");
	cout << endl << endl << endl << endl << endl << endl << endl << endl ;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t         WElCOME!                 " << " |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \tWhat Would You Like Today?         " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t     1. Fast Food                  " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t     2. Cofee/Tea                  " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t     3. Ice Cream                  " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t     4. Biverges                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t     8. Exit the Program           " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
}

void Mainpage::waiterWel()
{
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t         WElCOME!   SIR           " << " |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t    I Am Your Waiter Here          " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t  Here is my some Information      " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t   Name :    "<<w.getName() << "           |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t   Employee ID :" << w.getEmpId() << "                  |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t   Rating :    " << w.getRating() << "                 |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t  I am here for more than 5 YEars  " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t Give your Some details FOR ORder  " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t        1. Sure                    " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t        0. Quit                    |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
}
void Mainpage::bill(Customer c)
{
	system("CLS");
	cout << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t         ThankYou!                " << " |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t        Here is Your Info          " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t  NAme :  " << c.getName() << "                  |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t  Cnic :  " << c.getCnic() << "                |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t  Email :  " << c.getEmail() << "              |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t  Address :  " << c.getAddress() << "          |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t  Phone :  " << c.getPhone() << "              |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
}

void Mainpage :: CustomerDetails(Customer c)
{
	system("CLS");
	cout << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t         ThankYou!                " << " |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t     Please Veirfy Your Info       " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t  NAme :  "<<c.getName() << "                  |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t  Cnic :  " << c.getCnic() << "                |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t  Email :  " << c.getEmail() << "              |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t  Address :  " << c.getAddress() << "          |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t  Phone :  " << c.getPhone() << "              |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t     Please Answer Following       " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t        1.HAve Menu                " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t        2. Update Info             " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
}