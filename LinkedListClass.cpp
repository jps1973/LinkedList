// LinkedListClass.cpp

#include "LinkedListClass.h"

Node::Node( int nValue )
{
	// Update value
	m_nData = nValue;

	// Clear next node
	m_lpNextNode = NULL;

} // End of function Node::Node

LinkedList::LinkedList()
{
	// Clear head node
	m_headNode = NULL;

} // End of function LinkedList::LinkedList

LinkedList::~LinkedList()
{
	Node *lpTempNode;

	// Loop through all nodes
	while( m_headNode )
	{
		// Copy head node into temp node
		lpTempNode = m_headNode;

		// Move head node into next node
		m_headNode = m_headNode->m_lpNextNode;

		// Delete temp node
		delete lpTempNode;

	}; // End of loop through all nodes

} // End of function LinkedList::~LinkedList

void LinkedList::AddNode( int nValue )
{
	Node *lpNewNode = new Node( nValue );

	// See if linked list is empty
	if( m_headNode == NULL )
	{
		// Linked list is empty

		// Copy new node into head node
		m_headNode = lpNewNode;

	} // End of linked list is empty
	else
	{
		// Linked list is not empty

		// Store head node
		Node *lpTempNode = m_headNode;

		// Loop through all nodes
		while( lpTempNode->m_lpNextNode != NULL )
		{
			// Get next node
			lpTempNode = lpTempNode->m_lpNextNode;

		}; // End of loop through all nodes

		// Add new node to end of linked list
		lpTempNode->m_lpNextNode = lpNewNode;

	} // End of linked list is not empty

} // End of function LinkedList::AddNode

void LinkedList::DeleteNodeWithValue( int nValue )
{
	// Ensure that linked list is not empty
	if( m_headNode )
	{
		// Linked list is not empty

		// See if head node has the required value
		if( m_headNode->m_nData == nValue )
		{
			// Head node has the required value

			// Copy head node into temp node
			Node *lpTempNode = m_headNode;

			// Move head node into next node
			m_headNode = m_headNode->m_lpNextNode;

			// Delete temp node
			delete lpTempNode;

		} // End of head node has the required value
		else
		{
			// Head node does not have the required value

			// Copy head node into temp node
			Node *lpTempNode = m_headNode;

			// Find required value
			while( lpTempNode->m_lpNextNode && lpTempNode->m_lpNextNode->m_nData != nValue )
			{
				// Get next node
				lpTempNode = lpTempNode->m_lpNextNode;

			}; // End of loop to find required value

			// Temp node is now the node BEFORE the required value

			// Ensure that next node is valid
			if( lpTempNode->m_lpNextNode )
			{
				// Next node is valid

				// Store next node
				Node *lpNodeToDelete = lpTempNode->m_lpNextNode;

				// Update next node to point to the node AFTER the deleted one
				lpTempNode->m_lpNextNode = lpTempNode->m_lpNextNode->m_lpNextNode;

				// Delete node
				delete lpNodeToDelete;

			} // End of next node is valid

		} // End of head node does not have the required value

	} // End of linked list is not empty

} // End of function LinkedList::DeleteNodeWithValue

void LinkedList::Display()
{
	// Copy head node into temp node
	Node *lpTempNode = m_headNode;

	// Loop through all nodes
	while( lpTempNode != NULL )
	{
		// Display node
		printf( "%d > ", lpTempNode->m_nData );

		// Get next node
		lpTempNode = lpTempNode->m_lpNextNode;

	}; // End of loop through all nodes

	// Display last (null) node
	printf( "NULL\r\n" );

} // End of function LinkedList::Display
