#include<iostream>
#include<cmath>
#include<string>
using namespace std;
//struct Student
//{
//	string first_name;
//	string last_name;
//	int roll_no;
//	int marks;
//	
//	void StudentInfo(Student Std){
//		
//		cout<<"The First_Name of student is : "<<Std.first_name<<endl;
//		cout<<"The Last_Name of student is : "<<Std.last_name<<endl;
//		cout<<"The Roll_No of student is : "<<Std.roll_no<<endl;
//		cout<<"The Marks of student is : "<<Std.marks<<endl;
//		
//	}
//		
//};
//
//int main()
//{   
//  //First Student
//	Student S1;
//	S1.first_name="Kamal Ali";
//	S1.last_name="Akmal";
//	S1.roll_no=38;
//	S1.marks=89;
//	S1.StudentInfo(S1);
//	
//  return 0;
//}

// &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

//struct Student
//{
//	string first_name;
//	string last_name;
//	int marks;
//	
//	
//	void StudentInfo(){
//		cout<<"\nThe Full name of student is : "<<first_name<<" "<<last_name<<endl;
//		cout<<"The Marks of student is : "<<marks<<endl;
//		
//	}
//};
//int main()
//{   
//    int N;
//	cout<<"Enter the number of students:";
//	cin>>N;
//	Student student[N];
//	for(int i=0; i<N; i++){
//		cout<<"\nEnter the first name of student "<<i+1<<" : ";
//		cin>>student[i].first_name;
//		cout<<"Enter the last name of student "<<i+1<<" : ";
//		cin>>student[i].last_name;
//		cout<<"Enter the marks of student "<<i+1<<" : ";
//		cin>>student[i].marks;
//		
//	}
//	for(int i=0;i<N;i++)
//	{
//		student[i].StudentInfo();
//	}
//	return 0;
//}


//  &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

struct Student
{
	string first_name;
	string last_name;
	int marks;
	
	void StudentInfo(){
		
		cout<<"\nThe Full name of student is : "<<first_name<<" "<<last_name<<endl;
		cout<<"The Marks of student is : "<<marks<<endl;
	}
};
int main()
{   
    int N;
	cout<<"Enter the number of students:";
	cin>>N;
	Student student[N];
	 Student* ptr;
	 ptr= student;
	for(int i=0; i<N; i++){
		cout<<"\nEnter the first name of student "<<i+1<<" : ";
		cin>>ptr->first_name;
		cout<<"Enter the last name of student "<<i+1<<" : ";
		cin>>ptr->last_name;
		cout<<"Enter the marks of student "<<i+1<<" : ";
		cin>>ptr->marks;
		ptr++;
	}
	ptr=student;
	for(int i=0;i<N;i++)
	{
		ptr-> StudentInfo();
		ptr++;
	}
	return 0;
}




























