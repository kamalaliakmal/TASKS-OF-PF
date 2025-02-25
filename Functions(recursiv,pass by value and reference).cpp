#include<iostream>
#include<cmath>
using namespace std;

//  FUNCTION RECURSIVE

int fact(int n){
	if(n<=1){
		return 1;
	}
	int result=n*fact(n-1);	
	return result;
}
int main(){
	int n;
	cout<<"Enter the number to find factorial:";
	cin>>n;
  int factorial=fact(n);
  cout<<"Factorial of "<<n<<" is = "<<factorial;
}

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

//  PASS BY VALUE

void myfavNum(int num){
	num=5;
	cout<<num<<endl;
}
int main(){
	int a=10;
	cout<<a<<endl;
	myfavNum(a);
	cout<<a<<endl;
	
	return 0;
}

//  PASS BY REFERENCE

void myfavNum(int &num){
	num=5;
	cout<<num<<endl;
}

int main(){

int a=10;
cout<<a<<endl;
myfavNum(a);
cout<<a<<endl;
return 0;
}



