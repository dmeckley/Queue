/*****************************************************
*	main.cpp
*
*	Dustin Meckley
*	ciss350
*	7/20/15
*/

#include "Node.h"
#include "SingleLinkedNode.h"
#include "Queue.h"

/*****************************************************
*	main()
*
*	Test Driver for execution of program.
*/
int main()
{
	std::cout << std::endl;

	try
	{
		// Demonstrate Queue Class Object Instance.
		Queue q;

		// Demonstrate an empty queue.
		std::cout << "               Empty Queue                   " << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		q.display();
		std::cout << "q.getLength() = " << q.getLength() << std::endl << std::endl;

		// Determines if the queue is full or empty on the empty queue data structure.
		std::cout << "               isFull & isEmpty              " << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "q.isFull() = " << q.isFull() << std::endl;
		std::cout << "q.isEmpty() = " << q.isEmpty() << std::endl << std::endl;

		// Adds a values and a node onto the tail of the queue FIFO.
		std::cout << "                     Enque                   " << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		q.display();
		std::cout << "q.enque(5) = " << std::endl;
		q.enque(5);
		q.display();
		std::cout << "q.getLength() = " << q.getLength() << std::endl << std::endl;

		// Determines if the stack is full or empty after the enque operation.
		std::cout << " isFull & isEmpty after the Enque operation  " << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "q.isFull() = " << q.isFull() << std::endl;
		std::cout << "q.isEmpty() = " << q.isEmpty() << std::endl << std::endl;

		// Adds more values and nodes onto the tail of the queue FIFO.
		std::cout << "                     Enque                   " << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "q.getLength() = " << q.getLength() << std::endl;
		q.display();
		std::cout << "q.enque(##) = 15, 25, 35, 45, 55. " << std::endl;
		q.enque(15);
		q.enque(25);
		q.enque(35);
		q.enque(45);
		q.enque(55);
		q.display();
		std::cout << "q.getLength() = " << q.getLength() << std::endl << std::endl;

		// Returns the value off of the head of the queue while removing the node 
		// from the queue FIFO.
		std::cout << "                   Dequeue                   " << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "q.getLength() = " << q.getLength() << std::endl;
		q.display();
		q.dequeue();
		q.dequeue();
		q.dequeue();
		q.display();
		std::cout << "q.getLength() = " << q.getLength() << std::endl << std::endl;

		// Returns the value off of the head of the queue while leaving the node 
		// onto the queue FIFO.
		std::cout << "                    Peek                     " << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "q.getLength() = " << q.getLength() << std::endl;
		q.display();
		std::cout << "q.peek() = " << q.peek() << std::endl;
		std::cout << "q.peek() = " << q.peek() << std::endl;
		std::cout << "q.peek() = " << q.peek() << std::endl;
		q.display();
		std::cout << "q.getLength() = " << q.getLength() << std::endl << std::endl;

		// Determines if the queue is full or empty after the dequeue and peek operations.
		std::cout << " isFull & isEmpty after the Dequeue & Peek operations  " << std::endl;
		std::cout << "-------------------------------------------------------" << std::endl;
		std::cout << "q.isFull() = " << q.isFull() << std::endl;
		std::cout << "q.isEmpty() = " << q.isEmpty() << std::endl << std::endl;

		// Clears the queue data structure and sets length to zero.
		std::cout << "                    Clear                    " << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		q.display();
		std::cout << "q.clear() = " << std::endl;
		q.clear();
		q.display();
		std::cout << "q.getLength() = " << q.getLength() << std::endl << std::endl;

		// Determines if the queue is full or empty after the clear operation.
		std::cout << " isFull & isEmpty after the clear operation  " << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "q.isFull() = " << q.isFull() << std::endl;
		std::cout << "q.isEmpty() = " << q.isEmpty() << std::endl << std::endl;
	}
	catch(Queue::BadObjectException e)
	{
		e.message();
		exit(0);
	}
	catch(Queue::FullQueueException e)
	{
		e.message();
		exit(0);
	}
	catch(Queue::EmptyQueueException e)
	{
		e.message();
		exit(0);
	}

	return 0;
}