#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int quantity,total,discount;
	cout<<"choose category"<<endl;
	char category;
	cout<<" enter E for electronics:";

	cout<<" enter C for clothing :";
	
	cout<<"enter G for groceries :";
	cin>>category;
	switch (category){
		case 'E':
			cout<<setw(60)<<setfill('*')<<"Electronics"<<setw(60)<<setfill('*')<<endl;
			int electronics;
			cout<<" enter \n 1 for laptop \n 2 for smartphone \n 3 for headphones :";
			cin>>electronics;
			switch(electronics){
				case 1:
					cout<<setfill('+')<<setw(20)<<"How may items you like to buy "<<endl;
					cin>> quantity;
					total=quantity*1000;
					break;
				case 2:
					cout<<setfill('+')<<setw(20)<<"How may items you like to buy "<<endl;
					cin>>quantity;
					total=quantity*700;
					break;
				case 3:
					cout<<setfill('+')<<setw(20)<<"How may items you like to buy"<<endl;
					cin>>quantity;
					total=quantity*150;
					break;	
					
			}
			break;
		case 'C':
			cout<<setfill('*')<<setw(30)<<"Clothing"<<setw(60)<<setfill('*')<<endl;
			int	clothing;
			cout<<" enter \n 1 for jacket \n 2 for t-shirt \n 3 for jeans"<<endl;
			cin>>clothing;
			switch(clothing){
				case 1:
					cout<<setfill('+')<<setw(20)<<" How may items you like to buy"<<endl;
					cin>>quantity;
					total=quantity*120;
					break;
				case 2:
					cout<<setfill('+')<<setw(20)<<" How may items you like to buy"<<endl;
					cin>>quantity;
					total=quantity*40;
					break;
				case 3:
					cout<<setfill('+')<<setw(20)<<" How may items you like to buy"<<endl;
					cin>>quantity;
					total=quantity*60;
					break;		
			}
			break;
		case 'G':
			cout<<setfill('*')<<setw(30)<<"Groceries"<<setw(60)<<setfill('*')<<endl;
			int groceries;
			cout<<" enter \n 1 for malik \n 2 for bread \n 3 for egg:"<<endl;
			cin>>groceries;
			switch (groceries){
				case 1:
					cout<<setfill('+')<<setw(20)<<"How may items you like to buy"<<endl;
					cin>>quantity;
					total=quantity*2;
					break;
				case 2:
					cout<<setfill('+')<<setw(20)<<" How may items you like to buy"<<endl;
					cin>>quantity;
					total=quantity*3;
					break;
				case 3:
					cout<<setfill('+')<<setw(20)<<" How may items you like to buy"<<endl;
					cin>>quantity;
					total=quantity*5;
					break;		
			}	
			break;
		default:
		 	cout<<setfill('=')<<setw(50)<<" ennter correct menu "<<setfill('=')<<setw(50)<<endl;	
		 	return 0;
		
			
	}
	cout<<setw(40)<<setfill('=')<<"your total amout= "<<total<<endl;
	
	if(total<100){
		cout<<"discount = 0%"<<endl;
	}
	else if (total>100 && total<500){
		discount=(10*total)/100;
		cout<<setw(50)<<setfill('<')<<"discount = "<<discount<<"%"<<endl;
	}
	else {
		discount=(20*total)/100 ;
		cout<<"discount = "<<discount<<"%"<<endl;
	}
}
