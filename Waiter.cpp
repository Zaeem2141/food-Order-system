#include "One.h"

Waiter::Waiter()
{
	name = "John Watson";
	avgRating = 4.7;
	empId = "4";
}

string Waiter::getName()
{
	return name;
}


float Waiter::getRating()
{
	return avgRating;
}


string Waiter::getEmpId()
{
	return empId;
}

void Waiter ::setRate(float r)
{
	rate = r;
}