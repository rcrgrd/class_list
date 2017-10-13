#ifndef _NODE_H_
#define _NODE_H_

template <typename T>
class List;

template<typename T>
std::ostream& operator<<(std::ostream&, const Node<T>&);

template <typename T>
class Node {

	friend std::ostream& operator<<(std::ostream&, const Node<T>&);

9

​
friend class List<T>;

private:
	T value;
	Node<T>* next;
public:
	T getValue() const {return value;}
	Node<T>* getNext() const {return next;}
	Node(const T &v): value(v), next(0){}
};

#endif
