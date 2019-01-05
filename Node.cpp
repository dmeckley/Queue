/*****************************************************
*	Node.cpp
*
*	Dustin Meckley
*	ciss350
*	6/11/15
*/

#ifndef NODE_CPP_
#define NODE_CPP_

#include "Node.h"

/*****************************************************
*	Node()
*
*	Default constructor for Node class.
*/
Node::Node()
{
	value = 0;
}

/*****************************************************
*	Node(int value)
*
*	Overridden constructor for Node class.
*/
Node::Node(int value)
{
	this->value = value;
}

/*****************************************************
*	~Node()
*
*	Destructor for Node class.
*/
Node::~Node()
{

}

/*****************************************************
*	getValue()
*
*	getValue Node Class Method
*/
int Node::getValue() const  
{
	return this->value;
}

/*****************************************************
*	setValue(int value)
*
*	setValue Node Class Method
*/
void Node::setValue(int value)
{
	this->value = value;
}

#endif 