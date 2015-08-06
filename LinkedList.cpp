#include <iostream>

//-- Linked Lists
struct node
{
	int data;
	node* next;
};

node* ReverseLikedList(node* head)
{
	node* temp = head;
	node* nextNode = head;
	node* prevNode = NULL;
	
	while (nextNode != NULL){ //-- while we did not reach the end of the list		
		
		nextNode = temp->next; // where the next node is
		temp->next = prevNode; // where the current node should point to
		prevNode = temp;		
		temp = nextNode;
		
	}
	
	head = prevNode;

	return head;

}

int main(int argc, char* argv[])
{
	//-- n is pointer to a list member, for linked the lists member, we need a temporary pointer and also a pointer to the head of the list
	node* n = new node;
	n->data = 1;
	
	node* t = n; //-- temporary node
	node* head = n; //-- head of the list node
	
	n = new node;
	n->data = 2;
	t->next = n;
	t = t->next;
	
	n = new node;
	n->data = 3;
	n->next = NULL;
	
	t->next = n;
	t = t->next;
	
	//-- Reverse the linked list here, for this purpose, all you need is just the head pointer
	head = ReverseLikedList(head);
	
	return 0;

}
