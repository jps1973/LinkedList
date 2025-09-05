// LinkedList.cpp

#include "LinkedList.h"

int main()
{
	LinkedList linkedList;
	int nNodeCount;
	int nWhichNode;

	// Populate list
	linkedList.AddNode( 1 );
	linkedList.AddNode( 2 );
	linkedList.AddNode( 3 );
	linkedList.AddNode( 4 );
	linkedList.AddNode( 5 );
	linkedList.AddNode( 6 );


	// Display linked list
	printf( "Linked List:\t\t\t" );
	linkedList.Display();

	// Delete first node
	linkedList.DeleteNodeWithValue( 1 );

	// Display linked list
	printf( "After Deleting first node:\t" );
	linkedList.Display();

	// Delete middle node
	linkedList.DeleteNodeWithValue( 4 );

	// Display linked list
	printf( "After Deleting middle node:\t" );
	linkedList.Display();

	// Delete last node
	linkedList.DeleteNodeWithValue( 6 );

	// Display linked list
	printf( "After Deleting last node:\t" );
	linkedList.Display();

	// Count nodes
	nNodeCount = linkedList.CountNodes();

	// Print node count
	printf( "\r\n%d Nodes:\r\n", nNodeCount );

	// Loop through all nodes
	for( nWhichNode = 0; nWhichNode < nNodeCount; nWhichNode ++ )
	{
		// Display node
		printf( " Node %d:\t%d\r\n", nWhichNode, linkedList.GetData( nWhichNode ) );

	}; // End of loop through all nodes

	return 0;
}
