#include<stdio.h>

void main(){
	
	int arr[100];
	int i,j,n,temp;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	temp = arr[0]*arr[1];
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]*arr[j] > temp){
				temp = arr[i]*arr[j];
			}
		}
	}
	printf("%d",temp);
}
