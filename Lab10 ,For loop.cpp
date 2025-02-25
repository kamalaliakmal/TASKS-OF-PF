#include<iostream>
using namespace std;
int main()
{
  //  Write a program to print all numbers from 1 to N,where N is entered  by the user.
  
	int i;
	int N;
	cout<<"Enter the number:";
	cin>>N;
	for(i=1;i<=N;i++)
	{
		 cout<<i<<" ";
	}
	
  // ***********************************************************
	
	// Write a program to display the multiplication table of a number entered by user.
	
	int i,j,k,mult;
	cout<<"Enter the number: ";
	cin>>i;
    cout<<"Enter the ending number of multiplication table: ";
    cin>>k;
	for(j=1;j<=k;j++)
	{
        mult=i*j;
		cout<<i<<'*'<<j<<'='<<mult;
		cout<<endl;
	}
	
	
  // ************************************************************
  
  // Write a C++ program to calculate the sum of the first N natural numbers(1,2,3.......N),where N is entered by the user.
  
	int N,i;
	int sum=0;
	cout<<"Enter the number: ";
	cin>>N;
	for(i=1;i<=N;i++)
	{
		sum=sum+i;	
	}
	cout<<"Sum of first "<<N<<" natural number is = "<<sum;
	
  // *************************************************************
  
  /* write two programs that prints the following patterns.
  
  *  *  *  *                    *  *  *  *  *
  *  *  *  *                    *  *  *  *
  *  *  *  *                    *  *  *  
  *  *  *  *                    *  *
                                *
   */                          
                                
	int i,j;
	for(i=1;i<=4;i++)
	{
	  for(j=1;j<=4;j++)
	     {
	  	  cout<<"*"<<"  ";
		 }	
	  cout<<endl;	
	}
	
	
	
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*"<<"  ";
		}
		cout<<endl;
		
	}

  // **************************************************************
   
   /*
   
    Write a program that asks the user to enter a number and then calculates the factorial of the entered number.If the user enters a negative 
   number, display a message stating that the factorial of negative numbers is not defined.
   
   */
   
  int i,j;
  int fact=1;
  cout<<"Enter the number : ";
  cin>>i;
  if(i<0)
  {
  	cout<<"The factorial of negative number is not defined.";
  	return 0;
  }                             
	for(j=i;j>=1;j--)
	{
	   fact=fact*j;
    }
     cout<<"\nFactorial of "<<i<<" is = "<<fact;




	
}
