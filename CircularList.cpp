// Given a circular linked list, implement an algorithm which returns the node at the beginning of the loop.
// DEFINITION
// Circular linked list: A (corrupt) linked list in which a node's next pointer points to an earlier node, so as to make a loop in the linked list.
// 2.7
// EXAMPLE
// Input:A ->B->C->D->E-> C[the same C as earlier] Output:C

public Node circularList(Node n)
{
	while(n.marked != true){
		if(n->next == null){
			return null;
		}
		n.marked = true;
		n = n->next;
	}
	return n;
}

//Questions

//Edge Cases