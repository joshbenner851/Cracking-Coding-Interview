//Write code to partition a linked list around a value x, such that all nodes less than x come before all nodes greater than or equal to x.



//Assumed doubly linked list w/o loop
//Moving all nodes greater than or equal to X  to the left of it

//Method: append all nodes less than X to the front continously until done. Runs in O(n) time and doesn't worry about sorting


//EX: X = 15

//5 1 5 20 53 60 15 4 6 100 24 2 80

//only 4, 6 and 2 are moved so the linkedlist looks like:
// 2 6 4 5 1 5 20 53 60 15 100 24 80


//Quicksort edited version
//currNode  = first node
public static void PartitionList(Node currNode, int val)
{
	Node firstNode = currNode;
	bool isPastPartition = false;
	if(n->next = null && n->prev == null)
	{
		return; //List is length one 
	}
	while(currNode->next != null)
	{
		if(currNode.val >= val)
		{
			isPastPartition = true;
		}
		//We only move a node to the front if it's less than X and we're at a node that's past a position greater than X
		if(currNode.val < val && isPastPartition)
		{
			//save next node
			Node next = currNode->next;

			//linking nodes that are moved
			firstNode->prev = currNode;
			currNode->prev->next = currNode->next;
			currNode->next = firstNode;
			currNode->prev = null;

			//set the
			firstNode = currNode;
			currNode = next;
		}
		else
		{
			currNode = currNode->next;
		}
	}

}



//Questions:
//Is this singly or doubly linked
//If singly, are we given access to the first node?
//If singly it's going to be annoying because of needing a second pointer/node/variable
//Does it need to be sorted on either side of X or in general - saves work if not

