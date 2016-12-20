#include "stdafx.h"
#include "Book.h"


Book::Book()
{
	Name = "Unnamed";
	Price = 0;
	Author = "no_author";
}

Book::Book(string Name, string Author, int Price)
{
	this->Name = Name;
	this->Author = Author;
	this->Price = Price;
}

Book::Book(Book& obj)
{
	this->Name = obj.Name;
	this->Author = obj.Author;
	this->Price = obj.Price;
}

string Book::getName()
{
	return Name;
}

string Book::getAuthor()
{
	return Author;
}

int Book::getPrice()
{
	return Price;
}

std::ostream & operator<<(std::ostream & stream, Book & obj)
{
	stream << "| Author: |" << obj.getAuthor() << " | Book: |" << obj.getName() << " | Price: |" << obj.getPrice();
	stream << "|Data: |" << obj.getDay() << ":" << obj.getMonth() << ":" << obj.getYear() << " | " << endl;
	return stream;
}

Book::~Book()
{
}

