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


//int main(){
//	
//	int num=10;
//	string name="Awais";
//	void *ptr;
//	void *ptr2;
//	ptr=&num;
//	ptr2=&name;
//	*(int* )ptr;
//	*(string* )ptr2;
//	cout<<ptr<<endl;
//	cout<<*(int* )ptr<<endl;
//	cout<<ptr2<<endl;
//	cout<<*(string* )ptr2<<endl;
//	
//	
//	
//	return 0;
//}


//int main(){
//	
//int var=10;
//int* ptr=&var;
//   * ptr=20;
//int**ptr1=&ptr;
//   **ptr1=30;
//   cout<<var<<endl;
//
//return 0;
//}
 
 
//void greeks(){
//	
//	int val[3]={10,20,30};
//	// declare pointer variable
//	int* ptr;
//	// Assign the address of val[0] to ptr 
//	// We can use ptr=&val[0];(both are same)
//	ptr=val;
//	cout<<"Element of the array are: ";
//	cout<<ptr[0]<<" "<<ptr[1]<<" "<<ptr[2];
//}
//int main(){
// 	greeks();
// 	return 0;
// 	}

void greeks(){
// Declare an array
int v[3]={10,100,1000};

// declare pointer variable
int* ptr;

// Assign the address of v[0] to ptr
ptr=v;

for(int i=0; i<3; i++){
	cout<<"Value at ptr = "<<ptr<<"\n";
	cout<<"Value at *ptr = "<<*ptr<<"\n\n";
	
	// Increment pointer ptr by 1
	ptr++;
  }		
}
int main(){
	greeks();
	return 0;
}
































