#include<stdio.h>

void shell_sort(int list[], int n){
	int gap,i,j,temp;
	for (gap = n/2;gap>=1; gap/=2){
		for(j = gap;j<n;j++){
			for(i=j-gap;i>=0;i++){
				if(list[i+gap]>list[i]){
					break;
				}
				else{
					temp = list[i];
					list[i] = list[i+gap];
					list[i+gap] = temp;
				}
			}
		}
	}
}

int main(){
	int arr[10];
	int i;
	for(i = 0; i<10;i++){
		scanf("%d", &arr[i]);
	}
	
	shell_sort(arr, 10);
	
	for(i = 0; i<10;i++){
		printf("%d\t", arr[i]);
	}
	return 0;
}