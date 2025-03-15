	#include<iostream>
	#include<iomanip>
	#include<windows.h>
	using namespace std;
	struct Menus{
		string MenuItems;
		double price;	
	};
	
	void display_breakfast(Menus menu[], int size)
	{
		cout<<"----------------------------BREAKFAST MENU-----------------------------"<<endl;
		for(int i=0; i<size; i++){
			cout<<"=>"<<"\t"<<menu[i].MenuItems<<"\t (Rs."<<menu[i].price<<")"<<endl;
		}		
	}
	
	void display_lunch(Menus menu[], int size){
		cout<<"----------------------------LUNCH MENU------------------------------"<<endl;
		for(int i=0; i<size; i++){
			cout<<"=>"<<"\t"<<menu[i].MenuItems<<"\t (Rs."<<menu[i].price<<")"<<endl;
		}		
	}
	
	void display_dinner(Menus menu[], int size){
		cout<<"----------------------------DINNER MENU------------------------------"<<endl;
		for(int i=0; i<size; i++){
			cout<<"=>"<<"\t"<<menu[i].MenuItems<<"\t (Rs."<<menu[i].price<<")"<<endl;
		}		
	}
	void generateBill(double Total_amount) {
    double discount = 0;
    if (Total_amount >= 3000 && Total_amount < 5000) {
        discount = Total_amount * 0.10;
    } else if (Total_amount >= 5000 && Total_amount < 7000) {
        discount = Total_amount * 0.15;
    } else if (Total_amount >= 7000 && Total_amount < 9000) {
        discount = Total_amount * 0.20;
    } else if (Total_amount >= 9000) {
        discount = Total_amount * 0.25;
    }
    cout<<"\n----------BILL----------\n";
    cout << "\nDiscount: Rs." << discount;
    cout << "\nTotal Amount: Rs." << Total_amount - discount << endl;
}
	int main()
	{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout<<"=====================";
	SetConsoleTextAttribute(hConsole, 13  );
	cout<<"Welcome to Bismillah Restaurant";
	SetConsoleTextAttribute(hConsole, 7 );
	cout<<"=====================\n\n";
	SetConsoleTextAttribute(hConsole, 1 );
	cout<<"\tAssalamunAlaikum!\n";
	cout<<"\tWelcome dear Sir/Madam.\n";
	SetConsoleTextAttribute(hConsole, 7 );
        cout<<"==============================";
	SetConsoleTextAttribute(hConsole, 30 );
	cout<<"Main Menu";
	SetConsoleTextAttribute(hConsole, 7 );
	cout<<"==============================\n\n";
	cout<<"* Breakfast\t\t\t* Lunch\t\t\t* Dinner\n\n";
	cout<<"--------------------------------------------------------------------\n";
	cout<<"\nPlease!Choose any one from the main menu.\n";
	cout<<" Press 'B' or 'b' for Breakfast.\n";
	cout<<" Press 'L' or 'l' for Lunch.\n";
	cout<<" Press 'D' or 'd'for Dinner.\n";
	char ch;
 	int Total_amount=0;
	int items_price, quantity,bill_amount;
    double discount;
    Menus breakfast[8] = {
        {"Anda Paratha", 50}, {"Nan Channy", 80}, {"Siri Paye", 170}, {"Karak Chai", 200},
        {"Fried Egg", 160}, {"Latte Coffee", 250}, {"Cheese Paratha", 350}, {"Sooji Halwa", 200}
    };
    
    Menus lunch[8] = {
        {"Chicken Biryani", 500}, {"Nihari", 1000}, {"Mutton Pulao", 900}, {"Saji", 750},
        {"Yak Karahi", 1500}, {"Chicken Sandwich", 300}, {"Haleem", 300}, {"Shami Kabab", 200}
    };
    
    Menus dinner[8] = {
        {"Chicken Karahi", 1200}, {"Mutton Karahi", 2000}, {"Beef Karahi", 1600}, {"BBQ", 1400},
        {"Chappal Kabab", 1000}, {"Chicken Roll Paratha", 300}, {"Yakhni Goshtaba", 300}, {"Mixed Vegetable", 200}
    };
    Menus* menu;
    int menuSize;
    char choise;
    cout<<"Enter your choice:";
	cin>>choise;
     do{
	 int sub_menu;
	 switch(choise)
	 {
		case 'B':
		case 'b':
		   menu = breakfast;
                   menuSize = 8;                
			display_breakfast(menu, menuSize);
			cout<<"-----------------------------------------------------------------------\n";
		    cout<<"\nChoose Your breakfast menu.\n Press:"<<endl;
		    cout<<" '1' for Anda Paratha"<<endl;
		    cout<<" '2' for Nan Channy"<<endl;
		    cout<<" '3' for Siri Paye"<<endl;
		    cout<<" '4' for Karak Chai"<<endl;
		    cout<<" '5' for Fried Egg"<<endl;
		    cout<<" '6' for Latte Coffee"<<endl;
		    cout<<" '7' for Cheese Paratha"<<endl;
		    cout<<" '8' for Sooji Halwa"<<endl;
		   cout<<"\nEnter your choice:";
           cin>>sub_menu;
           switch(sub_menu)
           {
           	case 1:
           	   items_price=50;
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Anda Paratha would you like to order :";
           		cin>>quantity;
           		bill_amount=quantity*items_price;
           	    break;
           	case 2:
           	   items_price=80;
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Nan Channy would you like to order :";
           		cin>>quantity;
           		bill_amount=quantity*items_price;
           	    break;
           	case 3:
           	   items_price=170;
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Siri Paye would you like to order :";
           		cin>>quantity;
           		bill_amount=quantity*items_price;
           	    break;
           	case 4:
           	   items_price=200;
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Karak Chai would you like to order :";
           		cin>>quantity;
           		bill_amount=quantity*items_price;
           	    break;
           	case 5:
		   items_price=160;
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Fried Egg would you like to order :";
           		cin>>quantity;
           		bill_amount=quantity*items_price;
           	    break;
           	case 6:
		   items_price=250;
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Latte Coffee would you like to order :";
           		cin>>quantity;
           		bill_amount=quantity*items_price;
           	    break;   
                case 7:
		   items_price=350;
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Cheese Pratha would you like to order :";
           		cin>>quantity;
           		bill_amount=quantity*items_price;
           	    break; 
		case 8:
		   items_price=200;
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Sooji Halwa would you like to order :";
           		cin>>quantity;
           		bill_amount=quantity*items_price; 
           	    break;
		default :
	            SetConsoleTextAttribute(hConsole, 12 );
			 cout<<"Error! Please enter the correct option.";
	     	    SetConsoleTextAttribute(hConsole, 7 );
	            return 0;     
		    }  
	    break;
		case 'L':
		case 'l':	
                  menu = lunch;
                  menuSize = 8;
		    display_lunch(menu, menuSize);
		    cout<<"--------------------------------------------------------------------"<<endl;
		    cout<<"\nChoose Your Lunch menu.\n Press:"<<endl; 
		    cout<<" '1' for Chicken Biryani."<<endl;
		    cout<<" '2' for Nihari."<<endl;
		    cout<<" '3' for Mutton Pulao."<<endl;
		    cout<<" '4' for Saji."<<endl;
		    cout<<" '5' for Yak Karahi."<<endl;
		    cout<<" '6' for Chicken Sandwich."<<endl;
		    cout<<" '7' for Haleem"<<endl;
		    cout<<" '8' for Shami Kabab"<<endl;
		    cout<<"\nEnter your choice:";
                    cin>>sub_menu;
           switch(sub_menu)
           {
           	case 1:
           	   items_price=500;
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Chicken Biryani would you like to order :";
           	        cin>>quantity;
           		bill_amount=quantity*items_price;
           	    break;
           	case 2:
           	   items_price=1000;
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Nihari would you like to order :";
           		cin>>quantity;
           		bill_amount=quantity*items_price;
           	    break;
           	case 3:
           	   items_price=900;
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Mutton Pulao would you like to order :";
           		cin>>quantity;
           		bill_amount=quantity*items_price;
           	    break;
           	case 4:
           	   items_price=750;
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Saji would you like to order :";
           		cin>>quantity;
           		bill_amount=quantity*items_price;
           	    break;
           	case 5:
           	   items_price=1500;
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Yak Karahi would you like to order :";
           		cin>>quantity;
           		bill_amount=quantity*items_price;
           	    break;
           	case 6:
           	   items_price=300;
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Chicken Sandwich would you like to order :";
           		cin>>quantity;
           		bill_amount=quantity*items_price;
           	    break;  
		case 7:
		   items_price=300;
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Haleem would you like to order :";
           		cin>>quantity;
           		bill_amount=quantity*items_price;
           	    break;    
                case 8:
		   items_price=200;
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Shami Kabab would you like to order :";
           		cin>>quantity;
           		bill_amount=quantity*items_price;    
           	    break; 
	        default :
	            SetConsoleTextAttribute(hConsole, 12 );
			 cout<<"Error! Please enter the correct option.";
	     	    SetConsoleTextAttribute(hConsole, 7 );
	            return 0;  
		   }
		break;
		case 'D':
		case 'd':
                 menu = dinner;
                 menuSize = 8;
		     display_dinner(menu, menuSize);
		    cout<<"-----------------------------------------------------------------------"<<endl;
		    cout<<"\nChoose Your Dinner menu.\n Press:"<<endl;
		    cout<<" '1' for Chicken Karahi."<<endl;
		    cout<<" '2' for Mutton Karahi."<<endl;
		    cout<<" '3' for Beaf Karahi."<<endl;
		    cout<<" '4' for BBQ."<<endl;
		    cout<<" '5' for Chappal Kabab"<<endl;
		    cout<<" '6' for Chicken Roll Paratha"<<endl;
		    cout<<" '7' for Yakhni Goshtaba"<<endl;
		    cout<<" '8' for Mixed Vegetable"<<endl;
		    cout<<"\nEnter your choice:";
                    cin>>sub_menu;
           switch(sub_menu)
           { 
              case 1:
               items_price=1200;
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Chicken Karahi would you like to order :";
           		cin>>quantity;
           		bill_amount=quantity*items_price;
           	    break;
              case 2:
               items_price=2000;
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Mutton Karahi would you like to order :";
           		cin>>quantity;
           		bill_amount=quantity*items_price;
           	    break;
              case 3:
               items_price=1600;
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Beaf Karahi would you like to order :";
           		cin>>quantity;
           		bill_amount=quantity*items_price;
           	    break;
               case 4:
           	items_price=1050;
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of BBQ would you like to order :";
           		cin>>quantity;
           		bill_amount=quantity*items_price;
           	    break;
           	case 5:
		 items_price=1000;
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Chappal Kabab would you like to order :";
           		cin>>quantity;
           		bill_amount=quantity*items_price;
           	    break; 
           	case 6:
		 items_price=300;
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Chicken Roll Paratha would you like to order :";
           		cin>>quantity;
           		bill_amount=quantity*items_price;
           	    break; 
           	case 7:
	         items_price=300;
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Yakhni Goshtaba would you like to order :";
           		cin>>quantity;
           		bill_amount=quantity*items_price;
           	    break; 
		case 8:
		 items_price=200;
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Mixed Vegetable would you like to order :";
           		cin>>quantity;
           		bill_amount=quantity*items_price;
           	    break; 
		default :
	            SetConsoleTextAttribute(hConsole, 12 );
			 	cout<<"Error! Please enter the correct option.";
	     	    SetConsoleTextAttribute(hConsole, 7 );
	        	return 0;
		   }
		   break;
	     default :
	     {      
	            SetConsoleTextAttribute(hConsole, 12 );
			 	cout<<"Error! Please enter the correct option.";
	     	    SetConsoleTextAttribute(hConsole, 7 );
		return 0;
	     }
		break;	
	 }
	Total_amount+=bill_amount;
	cout<<" \n\n\t\t\t Do you want to order someting else ?\n\t\t\t Press 'Y' or 'y' for (Yes), 'N' or 'n' for (No) :";
	cin>>ch;
    }while(ch=='y' || ch=='Y');
     generateBill(Total_amount);
    return 0;
}
