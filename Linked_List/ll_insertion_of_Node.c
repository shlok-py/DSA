#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;	
};


void traversal(struct Node* ptr){
	while(ptr!=NULL){
		printf("%d\n", ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
}

struct Node* insertatfirst(struct Node* head, int data){
	
	struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
	ptr->data = data;
	ptr->next = head;
	return ptr;
}

struct Node* insertatindex(struct Node* head, int data, int index){
	struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
	struct Node* p =head;
	int i = 0;
	while (i != index - 1){
		p = p->next;
		i++;
	}
	ptr->data = data;
	ptr->next = p->next;
	p->next = ptr;
	return head;
}



struct Node* insertatlst(struct Node* head, int data){
	struct Node* p = head;
	struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
	while (p->next!=NULL){
		p = p->next;
	}
	p->next = ptr;
	ptr->data = data;
	ptr->next = NULL;
	
	return head;
}
int main(){
	struct Node* head, *second, *third;
	//Allocation of node of LL in heap
	head = (struct Node *) malloc(sizeof(struct Node));
	second = (struct Node*) malloc(sizeof(struct Node));
	third = (struct Node *) malloc(sizeof(struct Node));
	//linking Nodes
	head->next = second;
	second->next = third;
	third->next = NULL;
	//giving values
	head->data = 9;
	second->data = 10;
	third->data = 11;
	
	traversal(head);
	
	//insert at first
	
	printf("\n-------------Inserting a node at the beginning-------------\n");
	head = insertatfirst(head, 19);
	traversal(head);
	
	//insert in between
	
	printf("\n-------------Inserting a node in between-------------\n");
	head = insertatindex(head, 100, 3);
	traversal(head);
	
	//insert at last
	printf("\n-------------Inserting a node at the end -------------\n");
	head = insertatlst(head, 300);
	traversal(head);
	
	
	return 0;
}