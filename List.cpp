#include "List.h"
#include "node.h"
template <typename T>
bool List<T>::empty() const{
	if(first == 0)
		return true;
	return false;
}
template <typename T>
void List<T>::PushFront(const T &v){
	Node<T> *n = new Node<T>(v);
	if(first == 0)
		first = last = n;
	else {
		n->next = first;
		first = n;
	}
}


template <typename T>
void List<T>::PushBack(const T &v){
	Node<T> *n = new Node<T>(v);
	if(first == 0)
		first = last = n;
	else {
		last->next=n;
		last=n;
	}
}

template <typename T>
bool List<T>::PopFront(T &v){
	if(first == 0)
		return false;
	Node<T> *temp = first;
	if(first == last)
		first = last = 0;
	else
		first = first->next;
	v = temp->value;
	delete temp;
	return true;
}

template <typename T>
bool List<T>::PopBack(T &v){
	if(first == 0)
		return false;
	Node<T> *temp = last;
	if(first == last)
		first = last = 0;
	Node<T> *p = first;
	while(p->next!=last){
		p = p-> next;
	}
	last = p;
	//CONTROLLARE QUI!
	//last = p->next = 0;
	v = temp->value;
	delete temp;
	return true;
}

template<typename T>
List<T>::~List(){
	if(first == 0)
		return;
	Node<T> *p = first;
	while(p != 0){
		p=p->next;
		delete first;
		first = p;
	}
}


