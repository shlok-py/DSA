#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node * next;
};

void ll_traversal(struct Node *ptr){
//	printf("%d", ptr->data);
	while(ptr != NULL){
		printf("\n%d\n", ptr->data);	
		ptr = ptr->next;
	}
}

int main(){
	struct Node *head, *second, *third;
	
	//Allocation of memory for the nodes in linked list in heap
	head = (struct Node *) malloc(sizeof(struct Node));
	second = (struct Node *) malloc(sizeof(struct Node));
	third = (struct Node *) malloc(sizeof(struct Node));
	
	//linking first and second Node
	head->data = 7;
	head->next = second;
	
	//linking second and third node
	second->data = 7;
	second->next = third;
	
	//teminating the linked list elemets
	third->data = 9;
	third->next = NULL;
	
	//traversing
	
	ll_traversal(head);
}