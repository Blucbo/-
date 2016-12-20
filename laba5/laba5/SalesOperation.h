#pragma once
#include <iostream>
#include "Date.h"
#include "Seller.h"
#include "Book.h"
#include <ostream>

using namespace std;
class SalesOperation : public Date
{
private:
	Seller seller;
	Book book;
	int countOfBook;
public:
	SalesOperation();
	SalesOperation(Seller seller, Book book, int countOfBook);
	SalesOperation(SalesOperation&);
	int getCountOfBook();
	Book getBook();
	Seller getSeller();
	friend std::ostream& operator << (std::ostream&, SalesOperation&);
	~SalesOperation();
};

