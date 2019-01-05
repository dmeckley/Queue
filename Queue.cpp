/*****************************************************
*	Queue.cpp
*
*	Dustin Meckley
*	ciss350
*	7/20/15
*/

#ifndef QUEUE_CPP_
#define QUEUE_CPP_

#include "Queue.h"

/*****************************************************
*	Queue()
*
*	Queue Default Constructor
*/
Queue::Queue() 
{ 
	front = NULL;
	rear = NULL;
	setLength(0); 
}


/*****************************************************
*	~Queue()
*
*	Queue Destructor
*/
Queue::~Queue()
{
	//clear();
}

/*****************************************************
*	Queue()
*
*	Queue clear Function Method
*/
void Queue::clear()
{
	// Clears all nodes and node values from the queue and
	// sets the length back to zerp.
	SingleLinkedNode* ptr;

	while (front != NULL)
	{
		ptr = front;
		front = front->getNext();
		delete ptr;
	}
	rear = NULL;
	setLength(0);
}

/*****************************************************
*	Queue()
*
*	Queue enque Function Method
*/	
void Queue::enque(int value)
{
	// Adds node and value onto the tail of the queue
	// and throws an exception if the queue is full.
	if (isFull())
	{
		throw FullQueueException();
	}
	else
	{
		SingleLinkedNode *newNode;

		newNode = new SingleLinkedNode();
		newNode->setValue(value);

		if(rear == NULL)
			front = newNode;
		else
			rear->setNext(newNode);
		incLength();
		rear = newNode;
	}
}

/*****************************************************
*	Queue()
*
*	Queue dequeue Function Method
*/
void Queue::dequeue() 
{
	// returns the value of the head node on the queue
	// while removing the node on the queue but it also
	// throws an exception if the queue is empty.
	if(isEmpty())
	{
		throw EmptyQueueException();
	}	
	else
	{
		SingleLinkedNode* temp;
		temp = front;	
		std::cout << "q.dequeue() = " << temp->getValue() << std::endl;
		front = front->getNext();
		decLength();
		delete temp;
	}			
}

/*****************************************************
*	Queue()
*
*	Queue setLength Function Method
*/
void Queue::setLength(int length)
{
	// sets the initial length of the queue
	// only used by the constructor so it could
	// be removed, if memory is of the essence. 
	this->length = length;
}

/*****************************************************
*	Queue()
*
*	Queue peek Function Method
*/
int Queue::peek() const
{
	// returns the value of the head node on the queue
	// while leaving the node on the queue but it also
	// throws an exception if the queue is empty.
	if(isEmpty())
	{
		throw EmptyQueueException();
	}	
	else
	{
		SingleLinkedNode* temp;
		temp = front;
		return front->getValue();
	}				
}

/*****************************************************
*	Queue()
*
*	Queue getLength Function Method
*/
int Queue::getLength() const
{
	// returns the length of the queue data structure.
	return this->length;
}


/*****************************************************
*	Queue()
*
*	Queue isFull Function Method
*/
bool Queue::isFull() const
{
	// returns true if queue is full.
	// trys to allocate another SingleLinkedNode
	// and if successful, then function returns 
	// false; otherwise, it returns true and throws
	// an exception.

	SingleLinkedNode* loc;
	
	try
	{
		loc = new SingleLinkedNode();
		delete loc;
		return false;
	}			
	catch(Queue::AllocationException e)
	{
		e.message();
		return true;
	}
}

/*****************************************************
*	Queue()
*
*	Queue isEmpty Function Method
*/
bool Queue::isEmpty() const
{
	// returns true if queue is empty.
	return front == NULL;			
}

/*****************************************************
*	Queue()
*
*	Queue display Function of the Queue Class
*/
void Queue::display() const
{
	// Displays the queue data structure out to the user.
	SingleLinkedNode* ptr;
	ptr = front;

	// While the ptr points to a node, then traverse through the queue
	std::cout << "Queue = {"; 
	while(ptr)
	{
		std::cout << ptr->getValue();
		ptr = ptr->getNext();
		std::cout << ", ";
	}
	std::cout << "}" << std::endl; 
}

/*****************************************************
*	Queue()
*
*	Queue incLength Function Method
*/
void Queue::incLength()
{
	// Increments the length of the queue.
	this->length++;
}

/*****************************************************
*	Queue()
*
*	Queue decLength Function Method
*/
void Queue::decLength()
{
	// Decrements the length of the queue.
	this->length--;
}

#endif 
