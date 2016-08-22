public static void deleteNode(Node n)
{
	//Check if there's nothing after this node
	if(n->next == null){
		delete n;
		return;
	}
	while(n->next != null)
	{
		n.data = n->next.data;
		n->next = n->next->next;
	}
	//Last node is now a copy, delete it
	delete n;
}

//Edge cases:
//Check if there's nothing after this node

//Implement an algorithm to delete a node in the middle of a singly linked list, given only access to that node.

//Input: the node c from the linked list a->b->c->d->e
//Result: nothing is returned, but the new linked list looks like a- >b- >d->e


public static void deleteNode

//Questions:

//Edge Cases:
