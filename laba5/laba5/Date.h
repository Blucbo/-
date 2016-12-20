#pragma once
class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date();
	Date(int, int, int);
	Date(Date&);
	int getYear();
	int getMonth();
	int getDay();
};

