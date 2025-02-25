#include<iostream>
using namespace std;
int main()
{
//	int array[5]={5,10,15,20,25};
//	for(int i=0;i<=4;i++)
//	{
//		cout<<array[i]<<" ";
//	}
//	

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&	
	
//	int N;
//	cout<<"Enter the size of an array(N): ";
//	cin>>N;
//	int arr[N];
//	cout<<"Enter "<<N<<" integers: ";
//	for(int i=0; i<N; i++)
//	{
//		cin>>arr[i];
//		
//	}
//	cout<<"The reverse order is : ";
//	for(int i=N-1; i>=0; i--)
//	{
//		cout<<arr[i]<<" ";
//	}

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

//    int array[5]={5,10,15,20,25};
//    int sum=0;
//    int average;
//    for(int i=0;i<5;i++)
//	{
//		sum+=array[i];	
//	}
//	average=sum/5;
//	cout<<"Sum is = "<<sum;
//	cout<<"\nAverage is = "<<average;

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

//   int array[6]={5,10,15,20,25,30};
//   int length;
//   
//   	length=sizeof(array)/sizeof(array[0]);
//   	
//   cout<<"Length of an array is = "<<length;

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

	int N;
	cout<<"Enter the size of array:";
	cin>>N;
	int largest=0;
	int array[N];
	for(int i=0;i<N;i++){
		cout<<"Enter the "<<i+1<<" number:";
		cin>>array[i];
	}
	for(int i=0;i<N;i++){
		if(array[i]>largest ){
			largest=array[i];
		}
		
	}
	cout<<"\nThe largest number is "<<largest;
	

	return 0;
}
