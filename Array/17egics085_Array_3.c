#include<stdio.h>

void main(){
	
	int i,j,n,temp;
	int *arr;
	
	scanf("%d",&n);
	
	arr = (int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++){
		scanf("%1d",&arr[i]);
	}
	
	temp = arr[0];
	for(i=1;i<n;i++){
		temp = temp^arr[i];
	}
	printf("%d",temp);
	
	
}










