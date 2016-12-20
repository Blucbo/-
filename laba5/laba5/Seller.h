#pragma once
#include <iostream>
#include "Date.h"
#include <ostream>
#include <string>

using namespace std;
class Seller : public Date
{
private:
	string Surname;
	string Name;
public:
	Seller();
	Seller(string Surname, string Name);
	Seller(Seller&);
	string getSurname();
	string getName();
	~Seller();
};
