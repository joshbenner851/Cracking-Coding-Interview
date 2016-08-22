class Node(n){
	int data;
	Node next = null;
}

public static void DeleteDuplicates(LinkedListNode n)
{
	var dups = []
	var previous = null
	while(n != null)
	{
		if(dups.contains(n)){
			previous = n->next;
			delete n
		}
		else{
			dups.push(n);
			previous = n;
		}
		n = n->next;
	}
}


//Without a buffer:
//Use two points, one which holds the current value, the other which iterates through the list checking if any are


//Write code to remove duplicates in unsorted list


//Questions: 

//Which is more important, the time or space factor?
//If time, use a hash table
//If space, use an array/arraylist

//Edge cases:
//Check if array is length of one, can't be any duplicates then
