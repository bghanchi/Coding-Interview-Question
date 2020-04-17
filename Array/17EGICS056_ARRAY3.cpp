
#include <iostream>

using namespace std;
int main ()
{
  cout << "Hello World";

  int n, A[n],count;
cout<<"enter size:"  
Check:cin >> n;
  if (n % 2 == 0) //pair of numbers will create even integer + single integer makes it odd 
    {
      cout << "Enter odd number only! \n Renter the size:";
      goto Check;
    }

  for (int i = 0; i < n; i++)
    {
      cout << "enter value" << i+1 << ":";
      cin >> A[i];
    }

    for(int i =0 ; i<n; i++)
    { count=1;
        for(int j =i+1 ; j<n; j++)
        {
            if(A[i]==A[j])
            {
                count++;
            }
        }
        
        {
        	cout<<A[i]<<"is the number\n";
        	exit(0);
		}
        else if(count>2)
        cout<<"invalid array\n"; //when number appears more than twice
        
    }
  return 0;
}
