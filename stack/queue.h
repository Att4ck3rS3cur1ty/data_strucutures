#ifndef STACK_H
#define STACK_H

class stack{
	public:
		void clear();
		bool empty();
		void push(int e);
		int pop();
		int top();
		int size();
};

#endif
