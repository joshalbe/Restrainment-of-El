#include<iostream>
#include"Node.h"

template <class T> class List
{
public:
	List();
	~List();
	void front();
	void back();
	void insertFirst(const T&);
	void insertLast(const T&)
protected:
		int mCount;
		Node<T>* first;
		Node<T>* Last;

		bool isEmpty();

};
