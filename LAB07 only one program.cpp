#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
   double total_marks,English,Math,Science;
   double percentage;
   char grade_eng,grade_math,grade_sci;
    cout<<" Enter the Marks in English =";
     cin>>English;
     if(English>=90)
	 {
	 	grade_eng='A';
     }
	 	else if (English>=80 && English<90)
	 	{
		 grade_eng='B';
        }	 
	    else if (English>=70 && English<80)
	    {
	 	grade_eng='C';
		}
	 	else if (English>=60 && English<70)
	 	{
		 grade_eng='D';
		}	 
	else
	    {
		 grade_eng='F';
		}
	 	
    cout<<" Enter the Marks in Math =";
     cin>>Math;
     if(Math>=90)
	 {
     	grade_math='A';
	 }
	 	else if (Math>=80 && Math<90)
	   	{
		 grade_math='B';
	    }
	 	else if (Math>=70 && Math<80)
	 	{
		 grade_math='C';
		}
	 	else if (Math>=60 && Math<70)
	 	{
		 grade_math='D';
		}
	else
         {
		 grade_math='F';
		 }
	 	
    cout<<" Enter the Marks in Science =";
     cin>>Science;
     if(Science>=90)
	  {
		 grade_sci='A';
	  }
	 	else if (Science>=80 && Science<90)
	 	{
		 grade_sci='B';
		}
	 	else if (Science>=70 && Science<80)
	 	{
		 grade_sci='C';
		}
	 	else if (Science>=60 && Science<70)
	 	{
		 grade_sci='D';
		}
	else
	 	 {
		 grade_sci='F';
		 }
		 
		cout<<setw(25)<<setfill('*')<<"\n";
	 	cout<<" OUTPUT'S ARE BELOW."<<endl;
	 	cout<<setw(25)<<setfill('*')<<"\n";
	 	
	 	cout<<" Grade in English= "<<grade_eng<<endl;

	 	cout<<" Grade in Math= "<<grade_math<<endl;

	 	cout<<" Grade in Science= "<<grade_sci<<endl;

      
    
    if(grade_sci=='F' || grade_math=='F'  || grade_eng=='F')
    {
   	cout<<" Failed"<<endl;
   	return 0;
	}
    total_marks=English+Math+Science;
      cout<<" Total marks ="<< total_marks<<endl;
      
    percentage=(total_marks/300)*100;
      cout<<" Percentage ="<<percentage<<endl;
    
 if(percentage>=90)
   {
   	cout<<" Grade= A";
   }
   else if(percentage>=80 && percentage<90)
   {
   	cout<<" Grade= B";
   }
   else if(percentage>=70 && percentage<80)
   {
   	cout<<" Grade= C";
   }
   else if(percentage>=60 && percentage<70)
   {
   	cout<<" Grade= D";
   }
   else 
   {
   	cout<<" Grade= F";
   }
   cout<<"\n************************";
    cout<<"\n Do yo want to check the scholorship eligibility?if yes then press 1: ";
    int check;
    cin>>check;
    if(check==1)
  {
    if(grade_sci=='A' && grade_math=='A'  && grade_eng=='A' &&  total_marks>=270)
    {
	    cout<<"\n You are eligible for a Merit Scholarship.";
	}
	   else if(grade_sci=='A'||'B'&& grade_math=='A'||'B'&& grade_eng=='A'||'B'&& total_marks>=240)
	   {
	   cout<<"\n You are Eligible for Regular Scholarship.";
	   }
    else 
     {
	      	cout<<"\n No Scholarship.";
     }
  }  
     else
	 {
	    cout<<" OK BYE";
     }
       
  return 0;

}





