#include <stdio.h>    
     
int main()    
{    
	char arr[100];
	int n,shift;
	int i,j,last;
	
	scanf("%d",&n);
	
	scanf("%s",&arr);
    
	scanf("%d",&shift);           
        
    for( i = 0; i < shift; i++){      
	   
        last = arr[n-1];    
        
        for(j = n-1; j > 0; j--){    
               
            arr[j] = arr[j-1];    
        }        
        arr[0] = last;    
    }    
        
    puts(arr);   
    return 0;    
}    
