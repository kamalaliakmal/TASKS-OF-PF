#include<iostream>
#include<cmath>
using namespace std;
//int main(){
//	
//	int a=10;
//	cout<<a<<endl;
//	cout<<&a<<endl;
//	
//	int* ptr;
//	ptr=&a;
//	cout<<*ptr<<endl;
//    cout<<ptr<<endl;
//    
//return 0;
//}


//
//int main(){
//	
//	int var=10;
//	int* ptr=&var;
//	int** ptr2=&ptr;
//	**ptr2=30;
//	cout<<var<<endl;
//	
//	return 0;
//}


int main(){
	
	int num=10;
	string name="Awais";
	void *ptr;
	void *ptr2;
	ptr=&num;
	ptr2=&name;
	*(int* )ptr;
	*(string* )ptr2;
	cout<<ptr<<endl;
	cout<<*(int* )ptr<<endl;
	cout<<ptr2<<endl;
	cout<<*(string* )ptr2<<endl;
	
	
	
	return 0;
}

















































