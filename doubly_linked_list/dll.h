#ifndef DLL_H
#define DLL_H

class Dll{
	public:
		void clear();
		bool empty();
		void push_back(int e);
		void push_front(int e);
		void pop_front();
		void pop_back();
		int front();
		int back();
		int size();
		void search(int e);
		void invert();
		void traverse(void (*fn)(int&));
};

#endif
