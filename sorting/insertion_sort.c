#include<stdio.h>

int main(){
	int n,i;
	scanf("%d", &n);
	int arr[n];
	for (i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	for(i = 1;i<n;i++){
		int current = arr[i];
		int j = i-1;
		while(arr[j]>current && j>=0){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = current;
	}
	for (i=0;i<n;i++){
		printf("%d", arr[i]);
	}
}
