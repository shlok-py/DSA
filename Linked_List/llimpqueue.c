#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

//
struct Node *f = NULL;
struct Node *r = NULL;

void ll_traversal (struct Node *ptr){
	while (ptr!=NULL){
		printf("%d\n", ptr ->data);
		ptr = ptr->next;
	}
}

void enqueue(int val){
	
	struct Node *n  = (struct Node *) malloc(sizeof(struct Node));
	if (n == NULL){
		printf("Queue is full");
	}
	else{
		n->data = val;
		n->next = NULL;
		
		if (f == NULL){
			f=r=n;
		}
		else{
			r->next = n;
			r = n;
		}
	}
	
}

int dequeue(){
	int val = -1;
	struct Node *ptr = f;
	if (f == NULL){
		printf("Queue is Empty");
	}
	else{
		f = f->next;
		val = ptr->data;
		free(ptr);
//		return val;
	}
	return val;
}

int main(){
	ll_traversal(f);
	
	enqueue(34);
	enqueue(4);
	enqueue(3);
	
	ll_traversal(f);
	int d = dequeue();
	printf("dequeus element:\t%d", d);
	
	return 0;
}