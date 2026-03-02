#include<iostream>
#include<cmath>
using namespace std;

  //  Program which passess address and get address by some member

//struct Person
//{
//	int age;
//	int marks;
//	string firstname;
//	string lastname;
//	double salary;
//	
//	void displayInfo(Person p)
//	{
//		cout<<p.firstname<<endl;
//		cout<<p.lastname<<endl;
//		cout<<p.marks<<endl;
//		cout<<p.age<<endl;
//		cout<<p.salary<<endl<<endl;
//		
//	}
//};
//int main(){
//	Person p1,p2;
//	p1.firstname="Kamal ALi";
//	p1.age=20;
//	p1.lastname="Akmal";
//	p1.marks=89;
//	p1.salary=90000;
//	p1.displayInfo(p1);
//	
//	p2.firstname="Jawahir";
//	p2.age=21;
//	p2.lastname="Mehboob";
//	p2.marks=90;
//	p2.salary=80000;
//	p2.displayInfo(p2);
//	return 0;
//}


    //  Program that passes address but do not get or use means empty address.
	
// struct Person
//    {
//	int age;
//	int marks;
//	string firstname;
//	string lastname;
//	double salary;
//	
//	void displayInfo( )
//	{
//		cout<<firstname<<endl;
//		cout<<lastname<<endl;
//		cout<<marks<<endl;
//		cout<<age<<endl;
//		cout<<salary<<endl<<endl;
//	}
//};
//int main(){
//	Person p1,p2;
//	p1.firstname="Kamal ALi";
//	p1.age=20;
//	p1.lastname="Akmal";
//	p1.marks=89;
//	p1.salary=90000;
//	p1.displayInfo();
//	
//	p2.firstname="Jawahir";
//	p2.age=21;
//	p2.lastname="Mehboob";
//	p2.marks=90;
//	p2.salary=80000;
//	p2.displayInfo();
//	return 0;
//} 


   //  Program that passes address and pointer "this" use to display output 

//struct Person
//{
//	int age;
//	int marks;
//	string firstname;
//	string lastname;
//	double salary;
//	
//	void displayInfo(Person p)
//	{
//		cout<<this->firstname<<endl;
//		cout<<this->lastname<<endl;
//		cout<<this->marks<<endl;
//		cout<<this->age<<endl;
//		cout<<this->salary<<endl<<endl;
//		
//	}
//};
//int main(){
//	Person p1,p2;
//	p1.firstname="Kamal ALi";
//	p1.age=20;
//	p1.lastname="Akmal";
//	p1.marks=89;
//	p1.salary=90000;
//	p1.displayInfo(p1);
//	
//	p2.firstname="Jawahir";
//	p2.age=21;
//	p2.lastname="Mehboob";
//	p2.marks=90;
//	p2.salary=80000;
//	p2.displayInfo(p2);
//	return 0;
//}

//***********************************

struct Person
{
	int age;
	int marks;
	string firstname;
	string lastname;
	double salary;
	
	void displayInfo()
	{
		cout<<"\nThe First_Name of person is : "<<firstname<<endl;
		cout<<"The Last_Name of person is : "<<lastname<<endl;
		cout<<"The Marks of person is : "<<marks<<endl;	
	}
};
int main(){
	int N;
	cout<<"Enter the number of persons:";
	cin>>N;
	Person personArray[N];
	for(int i=0;i<N;i++){
		cout<<"\nEnter the first name of person "<<i+1<<" : ";
		cin>>personArray[i].firstname;
		cout<<"Enter the last name of person "<<i+1<<" : ";
		cin>>personArray[i].lastname;
		cout<<"Enter the marks of person "<<i+1<<" : ";
		cin>>personArray[i].marks;
	}
	for(int i=0;i<N;i++)
	{
	     personArray[i].displayInfo();
	}
	return 0;
}














