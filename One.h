#pragma once
#include <iostream>
#include<string>
using namespace std;

//class 1
class Customer
{
private:
	string name;
	string cnic;
	string email;
	string address;
	string phone = "";
public:
	Customer();
	Customer(string n, string c, string e, string a, string p);
	string getName();
	string getCnic();
	string getEmail();
	string getAddress();
	string getPhone();
};

//class 2
class Waiter
{
private:
	string name;
	float avgRating;
	float rate;
	string empId;
public:
	Waiter();
	string getName();
	float getRating();
	string getEmpId();
	void setRate(float r);
};

//class 3
class Mainpage 
{
private:
	int Totalprice;
	string order[100];
	int price[100];
	Waiter w;
public:
	void welcomePage();
	void waiterWel();
	void CustomerDetails(Customer c);
	void bill(Customer c);
};

//class 4
class FastFood
{
private:
	string item[5];
	int price[5];
public:
	FastFood();
	void displayFood();
	string getItem(int ind);
	int getPrice(int ind);
};

//class 5
class Coffee
{
private:
	string item[5];
	int price[5];
public:
     Coffee();
	void displayCoffee();
	string getItem(int ind);
	int getPrice(int ind);
};

//class 6
class Icecream
{
private:
	string item[5];
	int price[5];
public:
	Icecream();
	void displayIce();
	string getItem(int ind);
	int getPrice(int ind);
};

//class 7
class Biverges
{
private:
	string item[5];
	int price[5];
public:
	Biverges();
	void displayBiv();
	string getItem(int ind);
	int getPrice(int ind);
};

//class 8
class Order : public FastFood,public Coffee,public Icecream , public Biverges
{
private:
	string orderList[100];
	int price[100];
	int quantity[100];
	int val ;
public:
	Order();
	void updateOrder(int menu, int item, int quan);
	void displayOrder();
	string* getList();
	int* getP();
	int* getQua();
	int getT();
};

//class 9

class Bill
{
private:
	int total;
public:
	Bill();
	void displayBill(Order o);
};

//class 10
class Review
{
private:
	string review;
public:
	Review();
	void getPayment();
	void getReview();
};