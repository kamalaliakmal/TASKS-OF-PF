#include<iostream>
using namespace std;
int main()
{
	double item1=12.95,item2=24.95,item3=6.95,item4=14.95,item5=3.95;
	double subtotal,sale_tax,total;
	
	cout<<"Price of item1:  $"<<item1<<endl;
	cout<<"Price of item2:  $"<<item2<<endl;
	cout<<"Price of item3:  $"<<item3<<endl;
	cout<<"Price of item4:  $"<<item4<<endl;
	cout<<"Price of item5:  $"<<item5<<endl;
	
	subtotal=item1+item2+item3+item4+item5;
	cout<<"subtotal:  $"<<subtotal<<endl;
	
	sale_tax=  6*(subtotal/100);
	cout<<"Sales Tax (6%): $"<<sale_tax<<endl;
	
	total=subtotal+sale_tax;
	cout<<"Total:  $"<<total<<endl;
	
// &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
	
	float num1=85.5,num2=90.75,num3=88.25;
	float average;
	average=(num1+num2+num3)/3;
	cout<<"the average of"<<num1<<","<<num2<<"and"<<num3<<"="<<average<<endl;
	
// &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&	

	int number1,number2,Addition,Subtraction,product,Division,Modulus;
	cout<<"Enter two numbers:"<<endl;
	cout<<"number1:";
	cin>>number1;
	cout<<"number2:";
	cin>>number2;
    Addition=number1+number2;
    Subtraction=number1-number2;
    product=number1*number2;
    Division=number1/number2;
    Modulus=number1%number2;
    
    cout<<"\tAddition:\n\t\t"<<number1<<"+"<<number2<<"="<<Addition<<endl;
    cout<<"\tSubtraction:\n\t\t"<<number1<<"-"<<number2<<"="<<Subtraction<<endl;
    cout<<"\tproduct:\n\t\t"<<number1<<"*"<<number2<<"="<<product<<endl;
    cout<<"\tDivision:\n\t\t"<<number1<<"/"<<number2<<"="<<Division<<endl;
    cout<<"\tModulus:\n\t\t"<<number1<<"%"<<number2<<"="<<Modulus<<endl;    
	
// &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

	double Weight,Height,BMI;
	cout<<"BMI Calculator\n";
	cout<<"--------------"<<endl;
	cout<<"Enter your weight in kilograms:  ";
	cin>>Weight;
	cout<<"Enter your height in meters:  ";
	cin>>Height;
	BMI=Weight/(Height*Height);
	cout<<"Your BMI is:  "<<BMI;
  
// &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&  
   
   int Distance,FuelEfficiency,FuelPerLiter,TotalCost;
    cout<<"Trip Cost Estimator\n";
    cout<<"---------------------\n";
    cout<<"Enter distance of the trip in kilometers:  ";
    cin>>Distance;
    cout<<"Enter vehicle's fuel efficiency(km per liter):  ";
    cin>>FuelEfficiency;
    cout<<"Enter fuel cost per liter:  ";
    cin>>FuelPerLiter;
    TotalCost=(Distance/FuelEfficiency)*FuelPerLiter;
    cout<<"Total trip cost: "<<TotalCost;
    
	
	return 0;
}
