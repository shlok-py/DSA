#include<stdio.h>

void printArray(int *a, int n){
		int i;
	for(i = 0; i<n;i++){
		printf("%d\t", a[i]);
		}
	printf("\n");
}

void selectionSort(int *A, int n){
	int i, j, min_ind,temp;
	printf("Running selection sort\n");
	for(i = 0; i<n-1;i++){
		min_ind = i;
		for(j = i+1;j<n-1;j++){
			if(A[j]<A[min_ind]){
				min_ind = j;
			}
		}
		temp = A[i];
		A[i] = A[min_ind];
		A[min_ind] = temp;
	}
}

int main(){
	int A[] = {3,5,2,13,12};
	int n= 5;
	printArray(A,n);
	selectionSort(A,n);
	printArray(A,0,n-1);
}
