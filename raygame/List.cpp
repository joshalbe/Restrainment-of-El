#include "List.h"
#include <iostream>
#include <set>

template<class T>
void List<T>::front()
{

}

template<class T>
void List<T>::back()
{
}

template<class T>
void List<T>::insertFirst(const T &)
{
	if (isEmpty())
	{
		startPtr = newPtr;
		endptr = newPtr;
	}
	else
	{
		Node<T>* newPtr = new Node<>(dataIn);

		startPtr = newPtr;
		endptr = newPtr;
	}

}


template<class T>
void List<T>::insertLast(const T &)
{
	if (isEmpty())
	{
		startPtr = newPtr;
		endptr = newPtr;
	}
	else
	{
	
		Node<T>* newPtr = new Node<>(dataIn);

		startPtr = newPtr;
		endptr = newPtr;
	}
}


template<class T>
bool List<T>::isEmpty()
{
	//checks if list is empty
	if(startPtr == NULL && endPtr == NULL){return 1 }
	else {return 0}
}