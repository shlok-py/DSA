#include<stdio.h>
#include<stdlib.h>
struct circularqueue{
	int size;
	int f;
	int r;
	int* arr;
};

int isFull(struct circularqueue *q){
	if ((q->r + 1)%q->size == q->f){
		return 1;
	}
	return 0;
}

int isEmpty(struct circularqueue *q){
	if (q->r == q->f){
		return 1;
	}
	return 0;
}


void enqueue(struct circularqueue *q, int val){
	if (isFull(q)){
		printf("This circularqueue is full");
	}
	else {
		q->r = (q->r + 1)%q->size;
		q->arr[q->r] = val;
		
	}
}

int dequeue(struct circularqueue *q){
	int a = -1;
	if(isEmpty(&q)){
		printf("queue underflow");
		return a;
	}
	else{
		q->f = (q->f+1)%q->size;
		a = q->arr[q->f];
	}
	return a;
}

int main(){
	struct circularqueue q;
	q.size = 100;
	q.f = 0;
	q.r = 0;
	q.arr = (int*) malloc(q.size*sizeof(int));
	
	if (isEmpty(&q)){
		printf("circularqueue is Empty");
	}
	enqueue (&q, 10);
	enqueue (&q, 14);
	int d = dequeue(&q);
	printf("\n dequeued element %d", d);
	if (isEmpty(&q)){
		printf("circularqueue is Empty");
	}	
}