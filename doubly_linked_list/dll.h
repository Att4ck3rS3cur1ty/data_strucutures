#ifndef DLL_H
#define DLL_H
#include "../node/node.h"

template <typename T>
class Dll{
	private:
		Node<T> *start;
		Node<T> *end;
	public:
		void clear(); // remove all elements from the list
		bool empty(); // check if list's empty
		void push_back(T e); // push a new element in the end of the list
		void push_front(T e); // push a new element in the beginning of the list
		void pop_front(); // remove the element from the beginning of the list
		void pop_back(); // remove the element from the end of the list
		Node<T>* front(); // return the element from the beginning of the list without removing it
		Node<T>* back(); // return the element from the end of the list without removing it
		Node<T>* size(); // return the element's amount stored in the list
		void search(T e); // search for the "e" element in the list
		void invert(); // invert the list (first becomes last and so on)
		void traverse(void (*fn)(T&)); // execute the fn procedure for each list items. The procedure receives a reference from the item as a parameter. The execution happens from the first element to the last element
		void traverse_inverse(void (*fn)(T&)); // execute the fn procedure for each list items. The procedure receives a reference from the item as a parameter. The execution happens from the first element to the last element
		Dll();
};

#endif
