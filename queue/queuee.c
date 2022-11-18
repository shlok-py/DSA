#include<stdio.h>
#include<stdlib.h>
struct queue{
	int size;
	int r,f;
	int * arr;
};


int isFull(struct queue *q){
	if (q->r == q->size - 1){
		return 1;
	}
	return 0;
}

void isEmpty(struct queue *q){
	if(q->r == q->f){
		printf("Queue is empty\n");
	}
	else{
		printf("Queue is not empty\n");
	}
}

void enqueue(struct queue *q, int val){
	if (isFull(q)){
		printf("Queue Overflow");
	}else{
		q->arr[++q->r] = val;
	}
}

int dequeue(struct queue *q){
	int a = -1;
	if(q->r == q->f){
		printf("QUeue is empty");
	}
	else{
		return (q->arr[++q->f]);
	}
	return a;
}

void display(struct queue *q){
	int i;
	for (i=q->f+1; i<=q->r; i++){
		printf("%d\n", q->arr[i]);
	}
}
int main(){
	struct queue q;
	q.size = 10;
	q.f=q.r=-1;
	q.arr = (int *)malloc(q.size * sizeof(int));
	
	isEmpty(&q);
	enqueue(&q, 16);
	
	enqueue(&q, 15);
	isEmpty(&q);
	if (isFull(&q)){
		printf("Queue is FULL");
	}
	display(&q);
	int d;
	d = dequeue(&q);
	printf("dequeued Element %d\n", d);
	
	d = dequeue(&q);
	printf("dequeued Element %d\n", d);
	
	isEmpty(&q);
	return 0;
}