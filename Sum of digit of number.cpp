#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int num;
	int sum=0;
	cout<<"Enter the number:";
	cin>>num;
	while(num>0){
	int last_digit=num%10;
	num=num/10;
	 sum+=last_digit;	
	}
    cout<<"Sum = "<<sum<<endl;
	return 0;
}
