#ifndef DLL_H
#define DLL_H
#include "../node/node.h"

template <typename T>
class Dll{
	private:
		Node<T>* head;
		Node<T>* last;
	public:
		void clear(); // remove all elements from the list
		bool empty(); // check if list's empty
		void push_back(T e); // push a new element in the end of the list
		void push_front(T e); // push a new element in the beginning of the list
		void pop_front(); // remove the element from the beginning of the list
		void pop_back(); // remove the element from the end of the list
		Node<T>* front(); // return the element from the beginning of the list without removing it
		Node<T>* back(); // return the element from the end of the list without removing it
		int size(); // return the element's amount stored in the list
		void search(T e); // search for the "e" element in the list
		void invert(); // invert the list (first becomes last and so on)
		void traverse(void (*fn)(T&)); // execute the fn procedure for each list items. The procedure receives a reference from the item as a parameter. The execution happens from the first element to the last element
		void traverse_inverse(void (*fn)(T&)); // execute the fn procedure for each list items. The procedure receives a reference from the item as a parameter. The execution happens from the first element to the last element
		Dll(); // constructor
		~Dll(); // destructor
};
template <typename T>
void Dll::clear(){ // remove all elements from the list
	Node<T>* temp = new Node();

	while (temp->getNextPtr == NULL) {
		head = temp;
		temp = temp->getNextPtr();
		delete(head);
	}
}

template <typename T>
bool Dll::empty(){ // check if list's empty
	if (head == NULL) return true;
	else return false;
}

template <typename T>
void Dll::push_back(T e){ // push a new element in the end of the list
	Node<T>* new_node(e) = new Node(); // creating a new Node

	if (head == NULL) { // if that happens, the list was empty
		//the element inserted needs, then, to be the head and the last
		head = new_node;
		last = new_node;
		new_node->setPreviousPtr(NULL);
		new_node->setNextPtr(NULL);
	}

	else{	// the list has elements already
		// the new element will be inserted at the end of the list
		last->setNextPtr(new_node);
		new_node->setPreviousPtr(last);
		new_node->setNextPtr(NULL);
		last = new_node;
	}
}

template <typename T>
void Dll::push_front(T e){ // push a new element in the beginning of the list
	Node<T>* new_node(e) = new Node(); // creating a new Node

	if (head == NULL) { // if that happens, the list was empty
		//the element inserted needs, then, to be the head and the last
		head = new_node;
		last = new_node;
		new_node->setPreviousPtr(NULL);
		new_node->setNextPtr(NULL);
	}

	else{	// the list has elements already
		// the new element will be inserted at the beginning of the list
		new_node->setNextPtr(head);
		head->setPreviousPtr(new_node);
		new_node->setPreviousPtr(NULL);
		head = new_node;
	}
}

template <typename T>
void Dll::pop_front(){ // remove the element from the beginning of the list
	Node<T>* temp;
	temp = head;
	head = head->getNextPtr();
	delete(temp);
}

template <typename T>
void Dll::pop_back(){ // remove the element from the end of the list
	Node<T>* traverse;
	traverse = head;

	while(traverse->getNextPtr() != NULL){
		traverse = traverse->getNextPtr(); // goes until the last be4 the next is null
	}

	traverse->getPreviousPtr()->setNextPtr(NULL);
	delete(traverse);
}

template <typename T>
Node<T>* Dll<T>::front(){ // return the element from the beginning of the list without removing it
	return head;
}

template <typename T>
Node<T>* Dll<T>::back(){ // return the element from the end of the list without removing it
	Node<T>* traverse;
	traverse = head;

	while(traverse->getNextPtr() != NULL){
		traverse = traverse->getNextPtr(); // goes until the last be4 the next is null
	}

	return traverse;
}

template <typename T>
int Dll::size(){ // return the element's amount stored in the list
	Node<T>* traverse;
	traverse = head;
	int count = 0;

	do {
		traverse = traverse->getNextPtr(); // goes until the last be4 the next is null
		count++;
	} while(traverse != head) // it guarantees that all the list will be searched

	return count;
}

template <typename T>
void Dll::search(T e){ // search for the "e" element in the list
	Node<T>* traverse(e) = new Node(); // creating a new Node
	traverse = head;

	while(traverse->getData() != e) {
		traverse = traverse->getNextPtr();
		if(traverse->getData() == e) {
			std::cout << "Found!" << std::endl;
		}
	}
	std::cout << "Not found!" << std::endl;
}

template <typename T>
void Dll::invert(){ // invert the list (first becomes last and last becomes the first)
	Node<T>* traverse;
	traverse = head;
	last = traverse; // last has the head's value

	while(traverse->getNextPtr() != NULL){
		traverse = traverse->getNextPtr(); // goes until the last be4 the next is null
	}

	head = traverse; // head has the last's value
}

template <typename T>
void Dll::traverse(void (*fn)(T&)){ // execute the fn procedure for each list items. The procedure receives a reference from the item as a parameter. The execution happens from the first element to the last element
	Node<T>* traverse;
	traverse = head;

	do {
		fn(traverse);
		traverse = traverse->getNextPtr(); // goes until the last be4 the next is null
	} while(traverse != head) // it guarantees that all the list will be searched
}

template <typename T>
void Dll::traverse_inverse(void (*fn)(T&)){ // execute the fn procedure for each list items. The procedure receives a reference from the item as a parameter. The execution happens from the first element to the last element
	Node<T>* traverse;
	traverse = head;

	do {
		fn(traverse);
		traverse = traverse->getPreviousPtr(); // goes until the last be4 the next is null
	} while(traverse != head) // it guarantees that all the list will be searched
}

template <typename T>
Dll<T>::Dll{ // constructor
	head = NULL;
	last = NULL;
}

template <typename T>
Dll::~Dll(){ // destructor}

#endif
