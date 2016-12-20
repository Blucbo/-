#pragma once

template<class T>
struct list_link
{
	T* data;
	list_link* next;
};

template<class T>
class List
{
private:
	list_link<T>* head;
public:
	List();
	void add(T*);
	void display();
};
