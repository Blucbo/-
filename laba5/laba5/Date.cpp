#include "stdafx.h"
#include "Date.h"

Date::Date()
{
	year = 2016;
	month = 1;
	day = 1;
}

Date::Date(int year, int month, int day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}

Date::Date(Date& obj)
{
	this->year = obj.getYear();
	this->month = obj.getMonth();
	this->day = obj.getDay();

}

int Date::getYear()
{
	return year;
}

int Date::getMonth()
{
	return month;
}

int Date::getDay()
{
	return day;
}
