//Things to add: Carrying columns: 5 + 7 = 1 -> 2 not 12

//You have two numbers represented by a linked list, where each node contains a single digit. The digits are stored in reverse order, such that the Ts digit is at the head of the list. Write a function that adds the two numbers and returns the sum as a linked list.
// EXAMPLE
// Input:(7-> 1 -> 6) + (5 -> 9 -> 2).Thatis,617 + 295.
// Output: 2 -> 1 -> 9.That is, 912.
// FOLLOW UP
// Suppose the digits are stored in forward order. Repeat the above problem. EXAMPLE
// Input:(6 -> 1 -> 7) + (2 -> 9 -> 5).That is,617 + 295.
// Output: 9 -> 1 -> 2.That is, 912.



//Method: Create a new linkedlist that is appending new nodes with the sum of the two linked lists
public LinkedList sumReverseOrder(Node firstListNode, Node secondListNode)
{
	Node newList;
	while(firstListNode->next != null && secondListNode != null)
	{
		if(firstListNode->next == null){
			Node addNode;
			addNode.data = 0 + secondListNode.data;
			newList->next = addNode;
			secondListNode = secondListNode->next;
		}
		else if(secondListNode->next == null){
			Node addNode;
			addNode.data = 0 + firstListNode.data;
			newList->next = addNode;
			firstListNode = secondListNode->next;
		}
		else
		{
			Node addNode;
			addNode.data = firstListNode.data + secondListNode.data;
			newList->next = addNode;

			secondListNode = secondListNode->next;
			firstListNode = secondListNode->next;

		}
	}
}


//Questions:
//Do the linkedlist's need to be unchanged?
//If not we could save space by only editing one of the existing linkedLists and leaving the other alone
	//Do we have each linkedLists Length, if so use the greatest as the list to change
//There are nodes for empty values right(ie the tens place is empty(0)?)

//Edge Cases:
//If the lists are different sizes, just add zero and continue to push
//Both lists are empty
//Doesn't matter if the data is 0 for either node EX: 001 + 0051 = 0061 = 1600(base 10)




//Ex: 1500 + 100
//FOLLOW UP:

//Doubly
//Assumming the linkedLists are not empty
public LinkedList sumForwardOrder(Node firstListNode, Node secondListNode)
{
	Node firstNode;
	Node secondNode;
	Node newList;
	//cycling to get the one's column
	while(firstListNode->next != null){
		firstNode = firstListNode;
		firstListNode = firstListNode->next;
	}
	while(secondListNode->next != null){
		secondNode = secondListNode;
		secondListNode = secondListNode->next;
	}

	newList.data = firstNode.data + secondNode.data;

	//just reverse add the lists
	while(firstNode->prev != null && secondNode->prev != null){
		Node addNode;
		if(firstNode->prev == null){
			addNode.data = 0 + secondNode.data;
			addNode->next = newList;
			newList.prev = addNode;
			secondNode = secondNode->prev;
		}
		else if(secondNode->prev == null){
			addNode.data = 0 + firstNode.data;
			addNode->next = newList;
			newList.prev = addNode;
			firstNode = secondNode->prev;
		}
		else
		{
			addNode.data = firstNode.data + secondNode.data;
			addNode->next = newList;
			firstNode = secondNode->prev;
			secondNode = secondNode->prev;
			newList.prev = addNode;
		}
		newList = addNode;
	}
}


//Questions:
//IMPORANT: is this singly or doubly linked?
	//If singly we must cycle through both lists to get the length so that we're not adding tens and hundreds
//Do the lists needs to be unchanged?



