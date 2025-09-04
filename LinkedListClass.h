// LinkedListClass.h

#pragma once

#include <stdio.h>

class Node
{
public:
	int m_nData;
	Node *m_lpNextNode;

	Node( int nValue );

}; // End of class Node

class LinkedList
{
private:
  Node *m_headNode;

public:
	LinkedList();

	~LinkedList();

	void AddNode( int nValue );

	void DeleteNodeWithValue( int nValue );

	void Display();

}; // End of class LinkedList
