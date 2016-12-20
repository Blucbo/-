#include "stdafx.h"
#include "SalesOperation.h"
#include <iostream>
using namespace std;
SalesOperation::SalesOperation() : Date()
{
	countOfBook = 1;
}

SalesOperation::SalesOperation(Seller seller, Book book, int countOfBook)
{
	this->seller = seller;
	this->book = book;
	this->countOfBook = countOfBook;
}

SalesOperation::SalesOperation(SalesOperation & obj)
{
	this->seller = obj.seller;
	this->countOfBook = obj.countOfBook;
}

int SalesOperation::getCountOfBook()
{
	return countOfBook;
}

Book SalesOperation::getBook()
{
	return book;
}

Seller SalesOperation::getSeller()
{
	return seller;
}


SalesOperation::~SalesOperation()
{
}

std::ostream & operator<<(std::ostream & stream, SalesOperation & obj)
{
	stream << "|Data: |" << obj.getDay() << ":" << obj.getMonth() << ":" << obj.getYear() << " | " << endl;
	stream << "|Book: | Author: " << obj.getBook().getAuthor() << ", Name: " << obj.getBook().getName() << ", Price: " << obj.getBook().getPrice();
	stream << endl << "|Seller: | Name: " << obj.getSeller().getName() << ", Surname: " << obj.getSeller().getSurname() << endl;
	stream <<"Count of instance: " << obj.countOfBook;
	stream << "\n";

	return stream;
}

