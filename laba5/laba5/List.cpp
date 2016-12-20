#include "stdafx.h"
#include "List.h"

template<class T>
List<T>::List()
{
	head = NULL;
}

template<class T>
void List<T>::add(T* obj)
{
	list_link<T>* link = new list_link<T>;
	link->data = obj;
	link->next = head;
	head = link;
}

template<class T>
void List<T>::display()
{
	list_link<T>* current = head;
	while (current != NULL)
	{
		std::cout << (*current->data) << std::endl;
		current = current->next;
	}
}



