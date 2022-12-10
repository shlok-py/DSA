#include<stdio.h>

void quick_sort(int [], int, int);

void main(){
	int list[100],n,i;
//	clrscr();
	printf("\nNumber of Elements");
	scanf("%d", &n);
	printf("\nEnter %d number of Elements", n);
	for (i=0; i<n;i++){
		scanf("%d", &list[i]);
	}
	
	quick_sort(list,0,n-1);
	printf("The sorted list is");
	
	for(i=0;i<n;i++){
		printf("\n%d\t", list[i]);
	}
	getch();
}

void quick_sort(int list[], int lb, int ub){
	int pivot,down,up;
	int temp;
	pivot = list[lb];
	down = lb;
	up = ub;
	if(lb>=ub){
		return 0;
	}
	while(down<up){
		while(list[down]<=pivot && down<ub){
			down++;
		}
		while(list[up]>pivot){
			up--;
		}
		if(down<up){
			temp = list[down];
			list[down] = list[up];
			list[up] = temp;
			
		}
	}
	
	list[lb]=list[up];
list[up]=pivot;

quick_sort(list, lb, up-1);
quick_sort(list, up+1, ub);
	
}
