#include<iostream>
using namespace std;
int main()
{
	int number1,number2=20;
   const float PI=3.14;
    int num1=8,num2=7,sum;
    sum=num1+num2;

    cout<<num1<<'+'<<num2<<'='<<sum;
   
	cout<<sizeof(number1)<<endl;
	cout<<INT_MAX<<endl;
	
	cout<<"The value of number2="<<number2<<endl;
     
	 	
	
//	PI=3.14;
//	
	
	double x1=3,x2=6;
	double y1=4,y2=8;
	double squared_distance;
	
	squared_distance=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	
	cout<<"The squared distance between the points ("<<x1<<"," <<x2<<") and ("<<y1<<","<<y2<<") is:"<<squared_distance<<endl;
	

	
	return 0;
}
