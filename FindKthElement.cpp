//Implement an algorithm to find the kth to last element of a singly linked list

public static void FindKth(node, num)
{
	Node kth = null;
	int count = 1;
	while(node->next != null){
		node = node->next;
		count++;
		if(count >= num && count%num == 0)
		{
			kth = node;
		}
	}
	return kth;
}

//Questions:
//Does space or time need to be optimized?
//If space, then only use a count variable
//If time, then use the current solution

//Edge Cases:
