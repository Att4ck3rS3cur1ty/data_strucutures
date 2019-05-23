#ifndef DLL_H
#define DLL_H
#include "../node/node.h"

template <typename T>
class Dll{
	private:
		T m_data_dll;
		Node<T> *m_start;
		Node<T> *m_end;
		Node<T> *m_be4;
		Node<T> *m_next_dll;
		bool m_success;
		int m_k;
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
		Dll(); // constructor
		~Dll(); // destructor
};
template <typename T>
void clear(){ // remove all elements from the list

}

template <typename T>
bool empty(){ // check if list's empty

}

template <typename T>
void push_back(T e){ // push a new element in the end of the list
	Node<T> *pt_new = new Node<T>;

	if (pt_new == NULL) {
		m_success = false; // I need to return this, just storing for now to not forget it
	}

	else if ((m_start == NULL) && (m_k != 1) || (m_k < 1)) {
		delete pt_new;
		m_success = false; // I need to return this, just storing for now to not forget it
	}

	else if(k == 1){
		*(pt_new).getData() = m_data_dll;
		*(pt_new).getNextPtr() = m_start;

		if(m_start != NULL) {
			*(m_start).getPreviousPtr() = pt_new;
			*(pt_new).getPreviousPtr() = NULL;
			m_success = true; // I need to return this, just storing for now to not forget it
		}
	}

	else{
		m_be4 = m_start;

		while((*(m_be4).getPreviousPtr() != NUL) && (k > 2)){
			m_be4 = *(m_be4).getNextPtr();
			m_k = m_k - 1;
		}

		if(m_k > 2){
			delete pt_new;
			m_success = false; // I need to return this, just storing for now to not forget it
		}

		else{
			*(pt_new).m_data_dll = *(m_data_).getData();
			*(pt_new).
			*(pt_new).
		}
	}
}

template <typename T>
void push_front(T e){ // push a new element in the beginning of the list

}

template <typename T>
void pop_front(){ // remove the element from the beginning of the list

}

template <typename T>
void pop_back(){ // remove the element from the end of the list
}

template <typename T>
Node<T>* front(){ // return the element from the beginning of the list without removing it
}

template <typename T>
Node<T>* back(){ // return the element from the end of the list without removing it
}

template <typename T>
Node<T>* size(){x // return the element's amount stored in the list
}

template <typename T>
void search(T e){ // search for the "e" element in the list
}

template <typename T>
void invert(){ // invert the list (first becomes last and so on)
}

template <typename T>
void traverse(void (*fn)(T&)){ // execute the fn procedure for each list items. The procedure receives a reference from the item as a parameter. The execution happens from the first element to the last element

}

template <typename T>
void traverse_inverse(void (*fn)(T&)){ // execute the fn procedure for each list items. The procedure receives a reference from the item as a parameter. The execution happens from the first element to the last element

}

template <typename T>
Dll<T>::Dll{ // constructor
	m_start = NULL;
	m_end = NULL;
}

template <typename T>
~Dll(){ // destructor

}
#endif
