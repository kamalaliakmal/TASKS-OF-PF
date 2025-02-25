#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i,N;
	i=1;
	cout<<"Enter the number 'N' :";
	cin>>N;
	while(i<=N)
	{
		cout<<i<<" ";
		i++;
	}
	// *************************************
	
	
	int a,mult;
	cout<<"Enter the number :";
	cin>>a;
	mult=1;
	cout<<"The multiplication table of "<<a<<" is below:-\n";
	while(mult<=20)
	{
		cout<<a<<"*"<<mult<<'='<<a*mult<<endl;
		mult++;
	   		
	}
	
	// **************************************
	
	int i;
	cout<<"Enter the positive number :";
	cin>>i;
	while(i<=0)
	{
		cout<<"You entered negative number.\n";
		cout<<"Please enter a positive number :";
		cin>>i;
	}
	cout<<"You entered "<<i;
	// ***************************************
	
	int i=1;
	int sum;
	sum=0;
	while(i<=5)
	{
		sum=sum+i;
		i++;
	}
	cout<<"Sum is = "<<sum;
	
	// *****************************************
	
	
	double withdrawAmount,depositedAmount,TotalBalance=1000.0;
	int enteredCode;
	cout<<"**********Welcome to the ATM of HBL*************\n\n";
	cout<<"\t\n ATM Menu \n\n";
	int code=1234;
	   		cout<<"Enter your code :";
	   		cin>>enteredCode;
	   		if(enteredCode!=code)
	   		{
	   			cout<<"\n\tYou entered incorrect code!Access Denied."<<endl;
	   			return 0;	
		    }
	while(1)
	{
	cout<<" Choose one from the given type.\n";	
	cout<<" '1' for Withdraw amount:\n"; 
	cout<<" '2' for Depositing amount:\n";
	cout<<" '3' for Checking amount:\n";
	cout<<" '4' for Exiting:\n";	
	
	int choice;
	cout<<"Enter your choice:";
	cin>>choice;
	switch(choice)
	   {
	   	case 1:
	   		
	   		cout<<"Your transaction is being processing.\n";
	   		cout<<"Enter the amount which you want to are withdraw balance:$";
	   		cin>>withdrawAmount;
	   		if(withdrawAmount>0 && withdrawAmount<=TotalBalance)
	   		{
	   		 TotalBalance-=withdrawAmount;
	   		 cout<<"Withdrew Amount: $"<<withdrawAmount<<endl;
	   		 cout<<"New balance is: $"<<TotalBalance<<endl;
	   	    }
	   	   else if(withdrawAmount>TotalBalance)
			  {
			   cout<<"Insufficient Balance.\n";
	          }
	       else
		   {
		   	cout<<"Invalid withdraw Amount."<<endl;
		   }    
	        break;
	        
	   	case 2:
	   		cout<<"Enter the amount which you wanted to deposit : $";
	   		cin>>depositedAmount;
	   		if(depositedAmount>0)
			   {
	  	     TotalBalance+=depositedAmount;
	  	    cout<<"Deposited Balance is = "<<depositedAmount<<endl;
	  	    cout<<"New Balance is = "<<TotalBalance<<endl;
	  	       }
	  	    else{
	  	    	cout<<"Invalid deposite amount."<<endl;
			    }
			break;
			
	  	case 3:
			cout<<"Now we are checking balance.\n";
	   		cout<<"Your balance is : $"<<TotalBalance<<endl;
	   		break;

	    case 4:
	    	
	    	cout<<"Thank you for using the ATM.Goodbye!"<<endl;
	        return 0;
	        
	    default :
	    	cout<<"Invalid menu choice.Please try again."<<endl;
	
	   }			
	}
	
	// ********************************************
	
	string CorrectPassword="1234";
	string Password;
	cout<<"Enter the Password:";
	cin>>Password;
	do{
		if(Password==CorrectPassword)
		{
	    cout<<"Congratulations.\n";
		cout<<"You entered correct password.";
       	}
	else
	  {
		cout<<"You entered wrong password.\n";
		cout<<"Please enter correct password:";
		cin>>Password;
	  }	
	}while(Password!=CorrectPassword);
	
	//  ********************************************
	
	cout<<"*********************Welcome to Bismillah Restaurant*********************\n\n";

	cout<<"AssalamunAlaikum! Sir.\n";
	cout<<"Welcome dear Sir.\n";
	cout<<"Please! take a seat sir.\n";
	cout<<"Please select a menu and order which you want.\nThank you.\n\n";
	cout<<"*******************************Main Menu*******************************\n\n";
	
	cout<<"* Breakfast\t\t\t* Lunch\t\t\t* Dinner\n\n";
	
	cout<<"********************************************************************\n";
	cout<<"\nChoose any one from the main menu.\n";
	cout<<" Press 'B' for Breakfast.\n";
	cout<<" Press 'L' for Lunch.\n";
	cout<<" Press 'D' for Dinner.\n";
	char ch;
	char choice;
	cout<<"Enter your choice:";
	cin>>choice;
	
	
	do{
	 int sub_menu;
           int items_price;
           int quantity;
           int total_amount;
    cout<<"\n*******************************Sub Menu************************************\n\n";
	switch(choice)
	{
		case 'B':
		case 'b':
			
			cout<<"\tBreakfast Menu\n\n";
			cout<<"  => Anda Paratha(Rs.40)"<<endl;
			cout<<"  => Nan Channy(Rs.60)"<<endl;
		    cout<<"  => Siri Paye(Rs.150)"<<endl;
		    cout<<"  => Tea(Rs.15)"<<endl;
		    
		    cout<<"\nChoose Your breakfast menu."<<endl;
		    cout<<" Press '1' for Anda Paratha"<<endl;
			cout<<" Press '2' for Nan Channy"<<endl;
		    cout<<" Press '3' for Siri Paye"<<endl;
		    cout<<" Press '4' for Tea"<<endl;
		   
		   cout<<"Enter your choice:";
           cin>>sub_menu;
         
           switch(sub_menu)
           {
           	case 1:
           		 items_price=40;
           		 
           		cout<<"Enter the number of quantity:";
           		cin>>quantity;
           		
           		total_amount+=quantity*items_price;
           		
           	    cout<<"\nTotal bill is = "<<total_amount<<endl;
           	    
           	    break;
           	case 2:
           		 items_price=60;
           		
           		cout<<"Enter the number of quantity:";
           		cin>>quantity;
           	
           		total_amount+=quantity*items_price;
           		
           	    cout<<"\nTotal bill is = "<<total_amount<<endl;
           	    
           	    break;
           	case 3:
           		items_price=150;
           		
           		cout<<"Enter the number of quantity:";
           		cin>>quantity;
           		
           		total_amount+=quantity*items_price;
           		
           	    cout<<"\nTotal bill is = "<<total_amount<<endl;
           	    
           	    break;
           	case 4:
           		 items_price=15;
           		
           		cout<<"Enter the number of quantity:";
           		cin>>quantity;
           		
           		total_amount+=quantity*items_price;
           		
           	    cout<<"\nTotal bill is = "<<total_amount<<endl;
           	    
           	    break;
		    }  
		
	    break;
	    
		case 'L':
		case 'l':
		    	
		    cout<<"\tLunch Menu\n\n ";
			cout<<"  => Chicken Karahi(Rs.1050/KG)"<<endl;
		    cout<<"  => Mutton Karahi(Rs.1800/KG)"<<endl;
		    cout<<"  => Egg Fried Rice(Rs.450/Plate)"<<endl;
		    cout<<"  => BBQ(Rs.1050/dozen)"<<endl;
		
		    cout<<"\nChoose Your Lunch menu.\n";
		    cout<<" Press '1' for Chicken Karahi."<<endl;
		    cout<<" Press '2' for Mutton Karahi."<<endl;
		    cout<<" Press '3' for Egg Fried."<<endl;
		    cout<<" Press '4' for BBQ."<<endl;
		    
		   cout<<"\nEnter your choice:";
           cin>>sub_menu;
           
           switch(sub_menu)
           {
           	case 1:
           		 items_price=1050;
           		 
           		 cout<<setw(40)<<setfill(' ')<<" What amount of Chicken Karahi would you like to order :";
           		 cin>>quantity;
           		
           		total_amount+=quantity*items_price;
           		
           	    cout<<"\nTotal bill is = "<<total_amount<<endl;
           	    
           	    break;
           	    
           	case 2:
           		
           		items_price=1800;
           		 
           		 cout<<setw(40)<<setfill(' ')<<" What amount of Mutton Karahi would you like to order :";
           		 cin>>quantity;
           		
           		total_amount+=quantity*items_price;
           		
           	    cout<<"\nTotal bill is = "<<total_amount<<endl;
           	    
           	    break;
           	    
           	case 3:
           		
           		items_price=450;
           		 
           		 cout<<setw(40)<<setfill(' ')<<" What amount of Egg Fried would you like to order :";
           		 cin>>quantity;
           		
           		total_amount+=quantity*items_price;
           		
           	    cout<<"\nTotal bill is = "<<total_amount<<endl;
           	    
           	    break;
           	    
           	case 4:
           		
           		items_price=1050;
           		 
           		 cout<<setw(40)<<setfill(' ')<<" What amount of BBQ would you like to order :";
           		 cin>>quantity;
           		
           		total_amount+=quantity*items_price;
           		
           	    cout<<"\nTotal bill is = "<<total_amount<<endl;
           	    
           	    break;
           	
		   }
		    
		    
		    
		break;
		case 'D':
		case 'd':
			
			cout<<"\tDinner Menu.\n\n";
			cout<<"  => Chicken Karahi(Rs.1050/KG)"<<endl;
		    cout<<"  => Mutton Karahi(Rs.1800/KG)"<<endl;
		    cout<<"  => Egg Fried Rice(Rs.450/Plate)"<<endl;
		    cout<<"  => BBQ(Rs.1050/dozen)"<<endl;
		    cout<<"  => Saji(Rs.800/KG)"<<endl;
		    
		    cout<<"\nChoose Your  menu.\n";
		    cout<<" Press '1' for Chicken Karahi."<<endl;
		    cout<<" Press '2' for Mutton Karahi."<<endl;
		    cout<<" Press '3' for Egg Fried."<<endl;
		    cout<<" Press '4' for BBQ."<<endl;
		    cout<<" Press '5' for Saji."<<endl;
		cout<<"\nEnter your choice:";
           cin>>sub_menu;
           
           switch(sub_menu)
           { 
              case 1:
              	
              	items_price=1050;
           		 
           		 cout<<setw(40)<<setfill(' ')<<" What amount of Chicken Karahi would you like to order :";
           		 cin>>quantity;
           		
           		total_amount+=quantity*items_price;
           		
           	    cout<<"\nTotal bill is = "<<total_amount<<endl;
           	    
           	    break;
           	    
           	  case 2:
           
               items_price=1800;
           		 
           		 cout<<setw(40)<<setfill(' ')<<" What amount of Mutton Karahi would you like to order :";
           		 cin>>quantity;
           		
           		total_amount+=quantity*items_price;
           		
           	    cout<<"\nTotal bill is = "<<total_amount<<endl;
           	    
           	    break;
           	    
           	  case 3:
           	  	
           	  	items_price=450;
           		 
           		 cout<<setw(40)<<setfill(' ')<<" What amount of Egg Fried would you like to order :";
           		 cin>>quantity;
           		
           		total_amount+=quantity*items_price;
           		
           	    cout<<"\nTotal bill is = "<<total_amount<<endl;
           	    
           	    break;
           	    
           	  case 4:
           	  	
           	  	items_price=1050;
           		 
           		 cout<<setw(40)<<setfill(' ')<<" What amount of BBQ would you like to order :";
           		 cin>>quantity;
           		
           		total_amount+=quantity*items_price;
           		
           	    cout<<"\nTotal bill is = "<<total_amount<<endl;
           	    
           	    break;
           	    
           	   case 5:
           	   	
		        items_price=800;
           		 
           		 cout<<setw(40)<<setfill(' ')<<" What amount of Saji would you like to order :";
           		 cin>>quantity;
           		
           		total_amount+=quantity*items_price;
           		
           	    cout<<"\nTotal bill is = "<<total_amount<<endl;
           	    
           	    break;
		   }
		   break;
	    default :
			 	cout<<"\nError! Please enter correct option."<<endl;
	     	
		return 0;

		break;	
	}
	
	cout<<"\n Do you want to order someting else ?\n Press 'Y' for (Yes), 'N' for (No) :";
	cin>>ch;
 }while(ch=='y' || ch=='Y');
}
