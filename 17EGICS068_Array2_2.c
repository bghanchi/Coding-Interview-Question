#include<stdio.h>
#include<string.h>
int main()
{   
	unsigned long s,n,front=-1,rear=-1,i,j; 
	char *a,temp;
	printf("enter the length of the array required  "); //entering array
	scanf("%ld",&n);
	a = (char*)malloc(n * sizeof(char));//dynamically allocating array 
	fflush(stdin);
	printf("enter array\n:-");
    gets(a); //array input
	printf("enter the no. of shifts required  ");
	scanf("%ld",&s);//number of sifts required.
    for(i=0;i<s;i++) //loop for shifts that would be required .
	{
	   temp=a[n-1];//storing last char. in string within temp variable.
	   for(j=n-2;j<-1;j--)//loop for shifting the each char. in string by one block.
	   {
	   	   a[j+1]=a[j]; //each char. sfited to block ahead.
	   }
	     a[0]=temp;//storing the last char. in temp on to first block.
    }
   printf("\nfinal array is \n"); //printing the final string.
	puts(a);	
}
//9	13	C:\Users\Atc\Desktop\cprog\test.c	[Warning] incompatible implicit declaration of built-in function 'malloc'
//C:\Users\Atc\Desktop\cprog\cc1.exe	[Warning] command line option '-std=c++11' is valid for C++/ObjC++ but not for C
