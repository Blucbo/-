#include "stdafx.h"
#include "SalesOperation.h"
#include "Seller.h"
#include "Book.h" 
#include <iostream>
#include <fstream>
#include "List.cpp"
using namespace std;

//������� �������� � ������
SalesOperation* InsertSalesOperation(SalesOperation *SalesOperationArray, int position, SalesOperation newElement, int *sizeArray)
{
	(*sizeArray)++;
	SalesOperation* temp = new SalesOperation[*sizeArray];
	for (int i = 0; i < position - 1; i++)
	{
		temp[i] = SalesOperationArray[i];
	}
	temp[position-1] = newElement;
	for (int i = position; i < *sizeArray; i++) {
		temp[i] = SalesOperationArray[i - 1];
	}
	delete[] SalesOperationArray;
	return temp;
}

//�������� �������� �� �������
SalesOperation* DeleteSalesOperation(SalesOperation* SalesOperationArray, int position, int *sizeArray)
{
	(*sizeArray)--;
	SalesOperation* temp = new SalesOperation[*sizeArray];
	for (int i = 0; i < position - 1; i++)
	{
		temp[i] = SalesOperationArray[i];
	}
	for (int i = position - 1; i < *sizeArray; i++) {
		temp[i] = SalesOperationArray[i + 1];
	}
	delete[] SalesOperationArray;
	return temp;
}

//����� ������� �� �����)()
void Print(SalesOperation *SalesOperationArray, int sizeArray) {
	for (int i = 0; i < sizeArray; i++)
	{
		cout << SalesOperationArray[i];
	}
}

//������ ���������� � ����
void printToFile(SalesOperation* SalesOperationArray, int sizeArray)
{
	std::ofstream file;
	std::string path;

	while (path.empty() && !file.is_open())
	{
		std::cout << "\nEnter file path: ";
		std::cin >> path;
		file.open(path, std::ios::out);
	}

	if (file.is_open())
	{
		for (int i = 0; i < sizeArray; i++)
		{
			file << SalesOperationArray[i];
		}
	}
	file.close();
}

//C���� ���������
template <typename T>
T getSum(T* array, int size)
{
	T sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}
	return sum;
}

int main()
{
	SalesOperation* SalesOperationArray = NULL;
	int n = 10;
	SalesOperationArray = new SalesOperation[n];
	for (int i = 0; i < n; i++)
	{
		SalesOperationArray[i] = SalesOperation(Seller("Pan", "Ivan"), Book("Harry Poter", "Anderson", 120), i + 1);
	}
	//������� � �������� ������� ������
	SalesOperationArray = InsertSalesOperation(SalesOperationArray, 5, SalesOperation(Seller("Pan", "Ivan"), Book("Harry Poter", "Anderson", 120), 2), &n);
	//Print(SalesOperationArray, n);	

	//�������� �������� � �������
	SalesOperationArray = DeleteSalesOperation(SalesOperationArray, 7, &n);
	//Print(SalesOperationArray, n);
	printToFile(SalesOperationArray, n);


	//������� ���������� �������� ����
	int* booksSold = new int[n];
	for (int i = 0; i < n; i++)
	{
		booksSold[i] = SalesOperationArray[i].getCountOfBook();
	}
	std::cout << "The number of books sold = " << getSum(booksSold, n) << endl;

	//������� ����� ����� �� ��������� �����
	for (int i = 0; i < n; i++)
	{
		booksSold[i] = SalesOperationArray[i].getBook().getPrice() * SalesOperationArray[i].getCountOfBook();
	}
	std::cout << "The amount of money for the sold books = " << getSum(booksSold, n) << endl;

	List<Book> bookList;
	for (int i = 0; i < n; i++)
	{
		bookList.add(&SalesOperationArray[i].getBook());
	}
	bookList.display();

	system("PAUSE");
	return 0;
}


