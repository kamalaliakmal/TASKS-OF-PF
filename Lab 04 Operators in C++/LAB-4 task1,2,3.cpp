#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    //                                        TASK # 01:
	
//	int x;
//	cout<<"Enter the number:";
//	cin>>x;
//	(x%2==0)?cout<<"The number "<<x<<" is even.":cout<<"The number "<<x<<" is odd.";
	
	//                                       TASK # 02:
	
//	int age;
//	cout<<"Enter your age:";
//	cin>>age;
//	 (age<13)?cout<<"Child": ( (age>=13) && (age<=19) )?cout<<"Teenager":cout<<"Adult";

   //                                        TASK # 03:
	
	
	int Account_balance;
	cout<<"Enter the balance of account: ";
	cin>>Account_balance;
	(Account_balance<100)?cout<<"\n\tYou Entered Low balanced account.":( (Account_balance>=100) && (Account_balance<=500) )?cout<<"\n\tYou Entered Standard Account.":cout<<"\n\tYou Entered Premium Account." ;

     cout<<"\n"<<setw(50)<<setfill('*')<<"\n\n";
	
	bool loyal;
	cout<<"Are You Loyal?1/0: ";
	cin>>loyal;
	(  (loyal==1) && (Account_balance>=200) )?cout<<"\n\tEligible for special offer.\n":cout<<"\n\tNot Eligible for special offer.\n";
	
	cout<<setw(60)<<setfill('*')<<"\n\n\t\tTHE END";
	
	return 0;
}
