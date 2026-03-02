#include<iostream>
using namespace std;
int main()
{
//	int i,N;
//	i=1;
//	cout<<"Enter the number 'N' :";
//	cin>>N;
//	while(i<=N)
//	{
//		cout<<i<<" ";
//		i++;
//	}
	
	
	
//	int a,mult;
//	cout<<"Enter the number :";
//	cin>>a;
//	mult=1;
//	while(mult<=20)
//	{
//		cout<<a<<"*"<<mult<<'='<<a*mult<<endl;
//		mult++;
//	   		
//	}
	
	
//	int i;
//	cout<<"Enter the positive number :";
//	cin>>i;
//	while(i<0)
//	{
//		cout<<"You entered negative number.\n";
//		cout<<"Please enter a positive number :";
//		cin>>i;
//	}
//	cout<<"You entered "<<i;
	
	
//	int i=1;
//	int sum;
//	sum=0;
//	while(i<=5)
//	{
//		sum=sum+i;
//		i++;
//	}
//	cout<<"Sum is = "<<sum;
	
	
	
	
//	double withdrawAmount,depositedAmount,TotalBalance=1000.0;
//	int enteredCode;
//	cout<<"**********Welcome to the ATM of HBL*************\n\n";
//	cout<<"\t\n ATM Menu \n\n";
//	int code=1234;
//	   		cout<<"Enter your code :";
//	   		cin>>enteredCode;
//	   		if(enteredCode!=code)
//	   		{
//	   			cout<<"You entered incorrect code!Access Denied."<<endl;
//	   			return 0;	
//		    }
//	while(1)
//	{
//	cout<<" Choose one from the given type.\n";	
//	cout<<" '1' for Withdraw amount:\n"; 
//	cout<<" '2' for Depositing amount:\n";
//	cout<<" '3' for Checking amount:\n";
//	cout<<" '4' for Exiting:\n";	
//	
//	int choice;
//	cout<<"Enter your choice:";
//	cin>>choice;
//	switch(choice)
//	   {
//	   	case 1:
//	   		
//	   		cout<<"Your transaction is being processing.\n";
//	   		cout<<"Enter the amount which you want to are withdraw balance:$";
//	   		cin>>withdrawAmount;
//	   		if(withdrawAmount>0 && withdrawAmount<=TotalBalance)
//	   		{
//	   		 TotalBalance=TotalBalance-withdrawAmount;
//	   		 cout<<"Withdrew Amount: $"<<withdrawAmount<<endl;
//	   		 cout<<"New balance is: $"<<TotalBalance<<endl;
//	   	    }
//	   	   else if(withdrawAmount>TotalBalance)
//			  {
//			   cout<<"Insufficient Balance";
//	          }
//	       else
//		   {
//		   	cout<<"Invalid withdraw Amount."<<endl;
//		   }    
//	        break;
//	        
//	   	case 2:
//	   		cout<<"Enter the amount which you wanted to deposit : $";
//	   		cin>>depositedAmount;
//	   		if(depositedAmount>0)
//			   {
//	  	    int TotalBalance=TotalBalance+depositedAmount;
//	  	    cout<<"Deposited Balance is = "<<depositedAmount<<endl;
//	  	    cout<<"New Balance is = "<<TotalBalance<<endl;
//	  	       }
//	  	    else{
//	  	    	cout<<"Invalid deposite amount."<<endl;
//			    }
//			break;
//			
//	  	case 3:
//			cout<<"Now we are checking balance.\n";
//	   		cout<<"Your balance is : $"<<TotalBalance<<endl;
//	   		break;
//
//	    case 4:
//	    	
//	    	cout<<"Thank you for using the ATM.Goodbye!"<<endl;
//	        return 0;
//	        
//	    default :
//	    	cout<<"Invalid menu choice.Please try again."<<endl;
//	
//	   }		
//	
//	}
	
	
	string CorrectPassword="123abc";
	string Password;
//	cout<<"Enter the Password:";
//	cin>>Password;
	do{
	cout<<"Enter the Password:";
	cin>>Password;
//		if(Password==CorrectPassword)
//		{
//	    cout<<"Congratulations.\n";
//		cout<<"You entered correct password.";
//       	}
//	else
//	  {
//		cout<<"You entered wrong password.\n";
//		cout<<"Please enter correct password:";
//		cin>>Password;
//	  }	
	}while(Password!=CorrectPassword);
		    cout<<"Congratulations.\n";

	
	
 }
