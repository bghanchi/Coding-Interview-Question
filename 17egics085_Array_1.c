#include<stdio.h>
void main(){
	
	int arr[20];
	int i,n;
	
	scanf("%d",&n);
    for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	frequency(arr, n);
}

void frequency(int arr[], int n){
	
	int freq[n],i,max,temp;
	
	for(i=0; i<n; i++){
		freq[i] = 0;
	}
	
	for(i=0; i<n; i++){
		freq[arr[i]]++;
	}
	
	max=freq[0];
	for(i=0; i<n; i++){
		if(freq[i]!=0){
			if(freq[i]>max){
				max=freq[i];
				temp=i;
			}
		}
	}
	printf("%d",temp);
	
}
