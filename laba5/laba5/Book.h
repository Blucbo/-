#pragma once
#include <iostream>
#include "Date.h"
#include <string>
using namespace std;
class Book : public Date
{
private:
	string Author;
	string Name;
	int Price;
public:
	Book();
	Book(string Name, string Author, int Price);
	Book(Book&);
	string getAuthor();
	string getName();
	int getPrice();
	friend std::ostream& operator << (std::ostream&, Book&);//Для вывода информации про книжки в списке
	~Book();
};

