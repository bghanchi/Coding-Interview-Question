#include<stdio.h>
void main(){
	
	int n,i,h;
	int arr[20],sum1=0, sum2=0;
	scanf("%d",&n);
	
	if(n%2==0){
		
		h = n/2;
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}	
		for(i=0;i<h;i++){
			sum1 = sum1+arr[i];
		}
		for(i=h;i<n;i++){
			sum2 = sum2+arr[i];
		}
	
		if(sum1>sum2){
			printf("%d",sum2);
		} else {
			printf("%d",sum1);
		}
	   
	} else {
		printf("Wrong input");
	}
	
}
