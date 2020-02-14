#include<iostream>
#include"Node.h"

template <class T> class List
{
public:
	List();
	~List();
	int length();
	void front();
	void back();
	void insertFirst(const T&);
	void insertLast(const T&);
	void push( Node* head_ref,T NewDate);
	void pushBack(Node<T>* head_ref, T NewDate);
protected:
		int mCount;
		Node<T>* first;
		Node<T>* Last;

		bool isEmpty();

		
};
