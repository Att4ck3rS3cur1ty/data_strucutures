#ifndef "NODE_H"
#define "NODE_H"
#include <iostream>

// T template
template <typename T>
class Node{
	private:
		T m_data; // "T" because we need to be able to store any data type
		Node <T> *m_previous_ptr; // w
		Node <T> *m_next_ptr;     // w
	public:
		Node(); // constructor
		T getData(); // return data
		T* getDataPtr(); // return the data's pointer (content's memory address)
		Node<T> *getPreviousPtr(); // get the previous pointer
		Node<T> *getNextPtr(); // get the next pointer
		void setData(T data) // set the data content
		void setPreviousPtr(Node<T> *previous_ptr); // set the data of the previous pointer
		void setNextPtr(Node<T> *next_ptr); // set the data of the next pointer
		~Node(); // destructor
};

template <typename T>
Node<T>::Node(){
	m_previous_ptr = NULL;
	m_next_ptr = NULL;
} // constructor

template <typename T>
T Node<T>:: getData(){ // return data
	return m_data;
}

T* getDataPtr(){ // return the data's pointer (content's memory address)
	return &m_data;
}

template <typename T>
T* Node<T>::getPreviousPtr(){ // get the previous pointer
	return m_previous_ptr;
}
template <typename T>
T* Node<T>::getNextPtr(){ // get the next pointer
	return m_next_ptr;
}

template <typename T>
void Node<T>::setData(T data){ // set the data content
	m_data = data;
}

template <typename T>
void Node<T>::setPreviousPtr(Node<T> *previous_ptr){ // set the data of the previous pointer
	m_previous_ptr = previous_ptr;
}

template <typename T>
void Node<T>::setNextPtr(Node<T> *next_ptr){ // set the data of the next pointer
	m_next_ptr = next_ptr;
}

template <typename T>
Node<T>::~Node(){ // destructor

}

#endif
