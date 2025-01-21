#include<iostream>
using namespace std;
int main()
{ 
    //    *****************   TASK#01   ******************
    
//     int x;
//     cout<<"Enter the integer :";
//     cin>>x;
//     if(x>0)
//     {
//     	cout<<"The number is positive.";
//	   }

    //     &&&&&&&&&&&&&&&&   TASK#02    &&&&&&&&&&&&&&&&&&
 
//       int a;
//	   cout<<"Enter the integer :";
//	   cin>>a;
//	   if(a%2==0)
//	   {
//	   	cout<<"The number is even";
//	   }
    //    $$$$$$$$$$$$$$$$     TASK#03    $$$$$$$$$$$$$$$$$$$
 
//          int a,b,c;
//          cout<<"Enter the three numbers :"<<endl;
//          cin>>a>>b>>c;
//          if(a>b && a>c)
//          {
//          	cout<<"greater is = a";
//		    }
//		  if(b>a && b>c)
//		  {
//		  	cout<<"greater is = b";
//		  }
//		  if(c>a && c>b)
//		  cout<<"greater is = c";
    
    //    ##################    TASK#04    ###################
 
//        int marks;
//        cout<<"Enter the marks :";
//        cin>>marks;
//        if(marks>=90)
//        {
//        	cout<<"Grade is 'A+'.";
//		  }
//          if(marks>=80 && marks<=89)
//           {
//           	cout<<"Grade is 'A'.";
//		     }
//		     if(marks>=70 && marks<=79)
//		       {
//		     	cout<<"Grade is 'B'.";
//			   }
//                if(marks>=60 && marks<=69)
//                 {
//                	cout<<"Grade is 'C'.";
//			       }
//				 if(marks<60)
//				 {
//				 	cout<<"Fail.";
//				 }

    //    &&&&&&&&&&&&&&&&        TASK#05    &&&&&&&&&&&&&&&&&&
    
  
//           char Traffic_signal;
//           cout<<"Enter the traffic signal colour :";
//           cin>>Traffic_signal;
//           if(Traffic_signal=='R')
//          {
//		    cout<<"Stop.";
//	        }
//           if(Traffic_signal=='G')
//            {
//			cout<<"Go.";
//		      }
//           if(Traffic_signal=='Y')
//              {
//		        cout<<"Slow Down.";
//	            }           

    //  $$$$$$$$$$$$$$$$$     TASK#06    $$$$$$$$$$$$$$$$$$
	
	
	//    COMPANY'S PAYROLL  SYSTEM 
	
	
		 
		 int service,basic_salary,bonus,gross_salary;
		 int tax,net_salary;
		 char grade;
		 cout<<"************* \tCOMPANY'S  PAYROLL  SYSTEM    ***************\n"<<endl;
		 cout<<"Enter the grade :";
		 cin>>grade;
		 if(grade=='A')
		 {
		  basic_salary=50000;
	     }
	      if(grade=='B')
	      {
	      	basic_salary=30000;
		  }
		   if(grade=='C')
		   {
		   	basic_salary=20000;
		   }
	     cout<<"\nEnter the service :";
		 cin>>service;
		     if(service>=10)
		     {
		     	bonus=(10*basic_salary/100);
			 }
			  if(service>=5 && service<=9)
			  {
			  	bonus=(5*basic_salary/100);
			  }
			   if(service<5)
			   {
			   	bonus=0;
			   }
			   gross_salary=basic_salary+bonus;
			   if(gross_salary>40000)
			   {
			   	tax=(20*gross_salary/100);
			   }
			    if(gross_salary>=30000 && gross_salary<=40000)
			    {
			    	tax=(10*gross_salary/100);
				}
				 if(gross_salary<30000)
				 {
				 	tax=0;
				 }
				 net_salary=gross_salary-tax;
				 cout<<"\n****************************"<<endl;
				 cout<<"\nOUTPUT'S  ARE  GIVEN  BELOW"<<endl;
				 cout<<"\n*****************************"<<endl;
				 cout<<"\nBasic_salary is ="<<basic_salary<<endl;
				 cout<<"\nGrade is ="<<grade<<endl;
				 cout<<"\nBonus is ="<<bonus<<endl;
				 cout<<"\nGross_salary is ="<<gross_salary<<endl;
				 cout<<"\nService is ="<<service<<endl;
				 cout<<"\nTax is ="<<tax<<endl;
				 cout<<"\nNet_salary is ="<<net_salary<<endl;
		 
	 
	 return 0;
}
