#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//              TASK# 01
//	int a,b;
//	char op;
//	cout<<"Enter the first number:";
//	cin>>a;
//	cout<<"Enter the second number:";
//	cin>>b;
//	cout<<"Enter the operator:";
//	cin>>op;
//	switch(op)
//	{
//		case '+':
//			cout<<"\nThe sum of "<<a<<"+"<<b<<" is"<<" ="<<a+b;
//			break;
//		case '-':
//		    cout<<"\nThe difference of "<<a<<"-"<<b<<" is"<<" ="<<a-b;
//			break;
//		case '*':	
//		    cout<<"\nThe multiplication of "<<a<<"*"<<b<<" is"<<" ="<<a*b;
//			break;
//		case '/':
//	        cout<<"\nThe division of "<<a<<"/"<<b<<" is"<<" ="<<a/b;
//			break;
//		default:
//		    cout<<"\nYou entered invalid operator.";	
//	}
	
	//               TASK# 02
	
//	int num;
//	cout<<"Enter the number:";
//	cin>>num;
//	switch(num)
//	{
//		case 1:
//			cout<<"\n\tMonday.";
//			break;
//		case 2:
//		    cout<<"\n\tTuesday.";
//	        break;
//		case 3:
//		    cout<<"\n\tWednesday.";
//			break;
//	    case 4:
//		    cout<<"\n\tThursday.";
//			break;
//		case 5:
//		    cout<<"\n\tFriday.";
//			break;
//		case 6:
//		    cout<<"\n\tSaturday.";
//            break;
//		case 7:
//		    cout<<"\n\tSunday.";
//			break;
//		default:
//		    cout<<"\n\tYou entered out of range number.";
//	}
	
	//               TASK# 03
	
//	const float PI=3.1415;
//    int Area;
//	int num;
//	cout<<"Enter the number '1' for circle OR '2' for Rectangle OR '3' for Triangle :";
//	cin>>num;
//	switch(num)
//	{
//		case 1:
//			int radius;
//			cout<<"Enter the radius of circle:";
//			cin>>radius;
//			Area=PI*(radius*radius);
//			cout<<"\n\tArea of circle="<<Area;
//			break;
//		case 2:
//			int length,width;
//			cout<<"Enter the length of rectangle:";
//			cin>>length;
//			cout<<"Enter the width of rectangle:";
//			cin>>width;
//			Area=length*width;
//			cout<<"\n\tArea of rectangle="<<Area;
//			break;
//		case 3:
//			double base,height;
//			cout<<"Enter the base of triangle:";
//			cin>>base;
//			cout<<"Enter the height of triangle:";
//			cin>>height;
//			Area=0.5*(base*height);
//			cout<<"\n\tArea of triangle="<<Area;
//			break;
//		default:
//			cout<<"\n\tYou entered wrong number.";	
//	}
	
	//               TASK# 04
	
//	cout<<"****************CURRENCY CONVERTER******************";
//	int USD;
//	cout<<"\nEnter the amount in USD:";
//	cin>>USD;
//	int num;
//	cout<<"\nChoose  '1' for changing 'USD' into 'PKR'\n\t\t OR\n\t'2' for changing 'USD' into 'INR'\n\t\t OR\n\t'3' for changing 'USD' into 'Euros' :";
//	cin>>num;
//	switch(num)
//	{
//		case 1:
//			int PKR;
//			PKR=USD*280;
//			cout<<"\n\tPakistani Rupees="<<PKR;
//			break;
//		case 2:
//			int INR;
//			INR=USD*84;
//			cout<<"\n\tIndian Rupees="<<INR;
//			break;
//		case 3:
//			double Euros;
//			Euros=USD*0.95;
//			cout<<"\n\tEuros="<<Euros;
//			break;
//	}


	//               TASK# 05
	
	int Electronics,Clothing,Groceries;
    int quantity,total;
	char category;
	cout<<"Choose category of Item :";
	cin>>category;
	switch(category)
	{
		case 'E':
			cout<<"You selected Electronic.";
			int Electronics;
			cout<<"\nChoose '1' for Laptop OR '2' for Smartphone OR '3' for Headphone:";
			cin>>Electronics;
			
			switch(Electronics)
			{
				case 1:
					cout<<"Laptop\nPrice of '1' Laptop=1000";
					cout<<"\nEnter the number of quantity to purchase:";
					cin>>quantity;
					total=1000*quantity;
					cout<<"\nTotal="<<total;
					break;
				case 2:
					cout<<"Smartphone\nPrice of '1' Smartphone=700";
					cout<<"\nEnter the number of quantity to purchase:";
					cin>>quantity;
					total=700*quantity;
					cout<<"Total="<<total;
					break;
				case 3:
					cout<<"Headphone\nPrice of '1' Headphone=150";
					cout<<"\nEnter the number of quantity to purchase:";
					cin>>quantity;
					total=150*quantity;
					cout<<"\nTotal="<<total;
					
					break;
			}break;
		case 'C':
			cout<<"You selected Clothing.";
			int Clothing;
			cout<<"\nChoose '1' for Jacket OR '2' for T-shirt OR '3' for Jeans:";
			cin>>Clothing;
			int quantity,total;
			switch(Clothing)
			{
				case 1:
					cout<<"Jacket\nPrice of '1' Jacket=120";
					cout<<"\nEnter the number of quantity to purchase:";
					cin>>quantity;
					total=120*quantity;
					cout<<"\nTotal="<<total;
					break;
				case 2:
					cout<<"T-shirt\nPrice of '1' T-shirt=40";
					cout<<"\nEnter the number of quantity to purchase:";
					cin>>quantity;
					total=40*quantity;
					cout<<"\nTotal="<<total;
					break;
				case 3:
					cout<<"Jeans\nPrice of '1' Jeans=60";
					cout<<"\nEnter the number of quantity to purchase:";
					cin>>quantity;
					total=60*quantity;
					cout<<"\nTotal="<<total;
					break;	
					
			}break;
			
			case 'G':
	      	cout<<"You selected Groceries.";
			int Groceries;
			cout<<"\nChoose '1' for Milk OR '2' for Bread OR '3' for Egg:";
			cin>>Groceries;
			switch(Groceries)
			{
				case 1:
					cout<<"Milk\n Price of '1' Milk=2";
					cout<<"\nEnter the number of quantity to purchase:";
					cin>>quantity;
					total=150*quantity;
					cout<<"\nTotal="<<total;
					break;
				case 2:
					cout<<" Bread\n Price of '1'  Bread=3";
					cout<<"\nEnter the number of quantity to purchase:";
					cin>>quantity;
					total=150*quantity;
					cout<<"\nTotal="<<total;
					break;
				case 3:
					cout<<"Egg\n Price of '1' Egg=5";
					cout<<"\nEnter the number of quantity to purchase:";
					cin>>quantity;
					total=150*quantity;
					cout<<"\nTotal="<<total;
					break;
           	}break;
			
	}
	int discount;
	if(total>500)
	{
	
	discount=(20*total)/100;
	cout<<"\nDiscount="<<discount;
	}
	else if(total>=100 && total<=500)
	{
	discount=(10*total)/100;
	cout<<"\nDiscount="<<discount;
    }
    else
	{
		cout<<"\nNo Discount";
	}
	
	
	cout<<"\n"<<setw(50)<<setfill('*')<<"*"<<endl;
	cout<<"\t\t\t\t----------------------------------\n";
	cout<<setw(25)<<setfill('$')<<"$";
	cout<<"\tCHALLAN    OF    BYING    PRODUCTS\t";
	cout<<setw(25)<<setfill('$')<<"$"<<endl;
	cout<<setw(25)<<"-----------------------------------------------------------------------------------------------"<<endl;
	cout<<"Category\t\t Quantity\t\t Total\t\t Discount "<<endl;
	cout<<category<<"\t\t\t "<<quantity<<"\t\t\t "<<total<<"\t\t "<<discount<<endl;
	cout<<setw(25)<<"-----------------------------------------------------------------------------------------------"<<endl;
	
	
	return 0;
}
