#include "node.h"
#include "iostream"//lho fatto io
#ifndef _LIST_H_
#define _LIST_H_

template <typename T>
class List {
private:
	Node<T> *first;
	Node<T> *last;
public:
	template<typename T1>
	std::ostream& operator<<(std::ostream&, const List &);
	List():first(0),last(0){}
	~List();
	void PushFront(const T&);
	void PushBack(const T&);
	bool PopFront(T &v);
	bool PopBack(T &v);
	bool empty() const;
	bool find(const T&) const;
};
#endif

