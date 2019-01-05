/*****************************************************
*	Queue.h
*
*	Dustin Meckley
*	ciss350
*	7/20/15
*/

#ifndef QUEUE_H_
#define QUEUE_H_

#include <iostream>
#include <cstdlib>
#include <cstddef>

#include "SingleLinkedNode.h"

class Queue 
{
public:
	// Exception Handler Inner Class:
	// ------------------------------
	class BadObjectException
	{
	public:
		void message()
		{
			std::cerr << "Error!: BadObjectException() was thrown!" << std::endl;
		}
	};
	class AllocationException
	{
	public:
		void message()
		{
			std::cerr << "Error!: AllocationException() was thrown!" << std::endl;
		}
	};
	class FullQueueException
	{
	public:
		void message()
		{
			std::cerr << "Error!: FullQueueException() was thrown!" << std::endl;
		}
	};
	class EmptyQueueException
	{
	public:
		void message()
		{
			std::cerr << "Error!: EmptyQueueException() was thrown!" << std::endl;
		}
	};

	// -----------------------------------------------------
	//                         Class Methods: 
	// -----------------------------------------------------

	// Constructor and Destructor Methods:
	// -----------------------------------
	Queue();													
	~Queue();			

	// Transformer Function Methods:
	// -----------------------------------
	// removes all nodes from queue
	void clear();

	// adds node onto tail of queue
	void enque(int);
													
	// returns value of node on head of queue, removing node from queue
	void dequeue();	

	// sets the length of the queue
	void setLength(int);										

	// Accessor Function Methods:
	// -----------------------------------
	// returns value of node on head of queue, leaving node on queue
	int peek() const;

	// returns length of queue
	int getLength() const;

	// Iterator Function Methods:
	// -----------------------------------
	// returns true if queue is full
	bool isFull() const;

	// returns true if queue is empty
	bool isEmpty() const;

	// displays the queue to the user
	void display() const;	

protected:
	// increments length of the queue
	void incLength();	
											
	// decrements length of the queue
	void decLength();											

private:
	// ----------------------------------------------------
	//                         Class Members:
	// ----------------------------------------------------
	// Pointer to front node of queue.
	SingleLinkedNode* front;

	// Pointer to rear node of queue.
	SingleLinkedNode* rear;

	// Length variable for size of the queue.
	int length;	
};

#endif 
