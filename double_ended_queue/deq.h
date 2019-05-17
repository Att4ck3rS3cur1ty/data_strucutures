#ifndef DEQ_H
#define DEQ_H

class Deq{
	void clear();
	bool empty();
	void push_back(int e);
	void push_front(int e);
	void pop_front();
	void pop_back();
	int front();
	int back();
	int size();
};

#endif
