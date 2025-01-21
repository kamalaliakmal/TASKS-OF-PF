#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    //	 *************************TASK# 01*************************
//	int a;
//	cout<<"Enter the number:";
//	cin>>a;
//	if(a>0)
//	{
//	cout<<"Positive no.";
//	}
//	  else if(a<0)
//	  {
//	  	cout<<"Negative no.";
//	  }
//	 else
//	 {
//	 	cout<<"Zero.";
//	 	
//	 } 
	
	// *****************************TASK # 02*********************************
	
	
//	double temprature;
//	cout<<"Enter the temprature :";
//	cin>>temprature;
//	if(temprature>=40)
//	{
//   	cout<<"Stay indoors because it is extremely hot and could be dangerous to health.";
//    }
//	else if(temprature>=30 && temprature<=39)
//	{
//   	cout<<"Drinking plenty of water to stay hydrated in the hot weather.";
//    }
//	else if(temprature>20 && temprature<=29)
//	{
//   	cout<<"The weather is pleasent and suitable for outdoor activities.";
//    }else
//	{
//   	cout<<"Wearing warm clothes to stay comfortable in the cooler weather.";
//    }
	
	// *********************TASK# 03**************************
	
//	string Username;
//	string password;
//	cout<<"Enter the username :";
//	cin>>Username;
//	cout<<"Enter the password :";
//	cin>>password;
//	if (Username=="admin" && password=="12345")
//	{
//		cout<<"Access Granted";
//	}
//	else if(Username=="admin" && password!="12345")
//	{
//		cout<<"Wrong password";
//	}
//	else 
//	{
//	cout<<"user not found";
//    }
	
    // **********************TASK# 04*****************************
	
//   double total_marks,English,Math,Science;
//   double percentage;
//   char grade_eng,grade_math,grade_sci;
//    cout<<" Enter the Marks in English =";
//     cin>>English;
//     if(English>=90)
//	 {
//	 	grade_eng='A';
//     }
//	 	else if (English>=80 && English<90)
//	 	{
//		 grade_eng='B';
//        }	 
//	    else if (English>=70 && English<80)
//	    {
//	 	grade_eng='C';
//		}
//	 	else if (English>=60 && English<70)
//	 	{
//		 grade_eng='D';
//		}	 
//	else
//	    {
//		 grade_eng='F';
//		}
//	 	
//    cout<<"\n Enter the Marks in Math =";
//     cin>>Math;
//     if(Math>=90)
//	 {
//     	grade_math='A';
//	 }
//	 	else if (Math>=80 && Math<90)
//	   	{
//		 grade_math='B';
//	    }
//	 	else if (Math>=70 && Math<80)
//	 	{
//		 grade_math='C';
//		}
//	 	else if (Math>=60 && Math<70)
//	 	{
//		 grade_math='D';
//		}
//	else
//         {
//		 grade_math='F';
//		 }
//	 	
//    cout<<"\n Enter the Marks in Science =";
//     cin>>Science;
//     if(Science>=90)
//	  {
//		 grade_sci='A';
//	  }
//	 	else if (Science>=80 && Science<90)
//	 	{
//		 grade_sci='B';
//		}
//	 	else if (Science>=70 && Science<80)
//	 	{
//		 grade_sci='C';
//		}
//	 	else if (Science>=60 && Science<70)
//	 	{
//		 grade_sci='D';
//		}
//	else
//	 	 {
//		 grade_sci='F';
//		 }
//		 
//		cout<<setw(25)<<setfill('*')<<"\n";
//	 	cout<<" OUTPUT'S ARE BELOW."<<endl;
//	 	cout<<setw(25)<<setfill('*')<<"\n";
//	 	
//	 	cout<<" Grade in English= "<<grade_eng<<endl;
//
//	 	cout<<"\n Grade in Math= "<<grade_math<<endl;
//
//	 	cout<<"\n Grade in Science= "<<grade_sci<<endl;
//	 	
//    
//    if(grade_sci=='F' || grade_math=='F'  || grade_eng=='F')
//    {
//   	cout<<"\n Failed"<<endl;
//   	return 0;
//	}
//    total_marks=English+Math+Science;
//      cout<<"\n Total marks ="<< total_marks<<endl;
//      
//    percentage=(total_marks/300)*100;
//      cout<<"\n Percentage ="<<percentage<<endl;
//    
// if(percentage>=90)
//   {
//   	cout<<"\n Grade= A";
//   }
//   else if(percentage>=80 && percentage<90)
//   {
//   	cout<<"\n Grade= B";
//   }
//   else if(percentage>=70 && percentage<80)
//   {
//   	cout<<"\n Grade= C";
//   }
//   else if(percentage>=60 && percentage<70)
//   {
//   	cout<<"\n Grade= D";
//   }
//   else 
//   {
//   	cout<<"\n Grade= F";
//   }
//   cout<<"\n************************";
//    cout<<"\n Do yo want to check the scholorship eligibility?if yes then press 1: ";
//    int check;
//    cin>>check;
//    if(check==1)
//  {
//    if(grade_sci=='A' && grade_math=='A'  && grade_eng=='A' &&  total_marks>=270)
//    {
//	    cout<<"\n You are eligible for a Merit Scholarship.";
//	}
//	   else if(grade_sci=='A'||'B' &&  grade_math=='A'||'B' &&  grade_eng=='A'||'B' &&  total_marks>=240)
//	   {
//	   cout<<"\n You are Eligible for Regular Scholarship.";
//	   }
//    else 
//     {
//	      	cout<<"\n No Scholarship.";
//     }
//  }  
//     else
//	 {
//	    cout<<"\n OK BYE";
//     }
	

     //********************TASK# 05*****************************
     
     
     ///////////// LOAN ELIGIBILITY CHECKER PROGRAM////////////////
     
//      cout<<"********LOAN ELIGIBILITY CHECKER PROGRAM********"<<endl;
//     int age,income;
//     cout<<"\nEnter the age:";
//     cin>>age;
//     if(age>=18)
//      {
//     cout<<"\nEnter the income:";
//     cin>>income;
//     cout<<"\n**********************"<<endl;
//	   if(income<30000)
//       {
//	    cout<<"\nYou meet the age requirement but are not eligible for a loan because your income is below $30,000.";
//		}
//      
//       if(income>=30000)
//      {
//	  cout<<"\nCongratulations! You are eligible for loan.";
//	  
//  }
//  
//       }
//     else
//      { 
//      cout<<"\nYou are not eligible for a loan because you are under 18 years of age."<<endl;
//	  }
     
    // ********************TASK# 06******************************
    
    string a="admin";
    string b="password123";
    string Username,Password;
    cout<<"Enter the Username: ";
    cin>>Username;
    cout<<"\nEnter the Password: ";
    cin>>Password;
    if(Username=="a" && Password=="b")
    {
	cout<<"\nAuthentication Successful.";
	}
	if(Username!="admin" || Password!="password123")
	{
	cout<<"\nAuthentication Failed.Access Denied.";
    }
     
     string Role;
     cout<<"\n\nEnter Your Role: ";
     cin>>Role;
     if(Role=="Admin")
	 {
	 	cout<<"\nFull Access.";
	 }
	 else if(Role=="Guest")
	 {
	 	cout<<"\nLimted Access.";
	 }
	 else
	 {
	 	cout<<"\nNo Access.";
	 }
     return 0;
}
