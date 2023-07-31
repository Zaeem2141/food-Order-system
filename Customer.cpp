#include "One.h"

Customer::Customer()
{
	name = "";
	cnic = "";
	address = "";
	email = "";
	phone = "";
}

Customer::Customer(string n, string c, string e, string a, string p)
{
	name = n;
	cnic = c;
	address = a;
	email = e;
	phone = p;
}

string Customer :: getName()
{
	return name;
}
string Customer::getCnic()
{
	return cnic;
}
string Customer::getEmail()
{
	return email;
}
string Customer::getAddress()
{
	return address;
}
string Customer::getPhone()
{
	return phone;
}