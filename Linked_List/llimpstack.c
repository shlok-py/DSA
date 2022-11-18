#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

int isFull(struct Node *top){
	struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
	if(ptr == NULL){
		return 1;
	}
	return 0;
}


int isEmpty(struct Node *top){
	if (top == NULL){
		return 1;
	}
	return 0;
}
struct Node * push(struct Node *top, int val){
	struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
	ptr->data = val;
	ptr->next = top;
	top = ptr;
	return top;
}

void traverse(struct Node *top){
	struct Node *p = top;
	while(p!=NULL){
		printf("%d\n", p->data);
		p = p->next;
	}
}

int pop(struct Node **top){
	struct Node *p = *top;
	(*top) = (*top)->next;
	int x = p->data;
	free(p);
	return x;
}
int main(){
	struct Node *top;
	top = NULL;
	
	top = push(top, 10);
	top = push(top, 20);
	traverse(top);
	int x = pop(&top);
	printf("popped data -> %d\n", x);
//	traverse(top);
	printf("%d", top->data);
}