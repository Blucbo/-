#include "stdafx.h"
#include "Seller.h"

Seller::Seller() : Date()
{
	Surname = "Unnamed";
	Name = "Unnamed";
}

Seller::Seller(string Surname, string Name) : Date()
{
	this->Surname = Surname;
	this->Name = Name;
}

Seller::Seller(Seller & obj)
{
	this->Surname = obj.Surname;
	this->Name = obj.Name;
}

string Seller::getSurname()
{
	return Surname;
}

string Seller::getName()
{
	return Name;
}
//
//ostream & operator<<(std::ostream &stream, Seller &obj)
//{
//	stream << obj.Surname;
//
//
//}

Seller::~Seller()
{
}

