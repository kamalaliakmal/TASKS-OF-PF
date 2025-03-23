	#include<iostream>
	#include<iomanip>
	#include<windows.h>
	using namespace std;
	struct Menus{
		string MenuItems;
		double price;	
	};
	struct Reservation {
    string name;
    int tableNumber;
    string time;
    };
	int MAX_RESERVATIONS = 5;
Reservation reservation[5];
int reservationCount = 0;
    
	void display_breakfast(Menus menu[], int size){   
	    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	    SetConsoleTextAttribute(hConsole, 10  );
		cout<<"----------------------------BREAKFAST MENU-----------------------------"<<endl;
		SetConsoleTextAttribute(hConsole, 7  );
		for(int i=0; i<size; i++){
			SetConsoleTextAttribute(hConsole, 13  );
			cout<<i+1<<")\t"<<menu[i].MenuItems<<"\t\t\t (Rs."<<menu[i].price<<")"<<endl;
			SetConsoleTextAttribute(hConsole, 7  );
		}		
	}
	
	void display_lunch(Menus menu[], int size){
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	    SetConsoleTextAttribute(hConsole, 10  );
		cout<<"----------------------------LUNCH MENU------------------------------"<<endl;
		SetConsoleTextAttribute(hConsole, 7  );
		for(int i=0; i<size; i++){
			SetConsoleTextAttribute(hConsole, 13  );
			cout<<i+1<<")\t"<<menu[i].MenuItems<<"\t\t\t (Rs."<<menu[i].price<<")"<<endl;
			SetConsoleTextAttribute(hConsole, 7  );
		}		
	}
	
	void display_dinner(Menus menu[], int size){
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	    SetConsoleTextAttribute(hConsole, 10  );
		cout<<"----------------------------DINNER MENU------------------------------"<<endl;
		SetConsoleTextAttribute(hConsole, 7  );
		for(int i=0; i<size; i++){
			SetConsoleTextAttribute(hConsole, 13  );
			cout<<i+1<<")\t"<<menu[i].MenuItems<<"\t\t\t (Rs."<<menu[i].price<<")"<<endl;
			SetConsoleTextAttribute(hConsole, 7  );
		}		
	}
	void generateBill(double Total_amount) {
    double discount = 0;
    if (Total_amount >= 9000) {
        discount = Total_amount * 0.25;
    } else if (Total_amount >= 7000) {
        discount = Total_amount * 0.20;
    } else if (Total_amount >= 5000) {
        discount = Total_amount * 0.15;
    } else if (Total_amount >= 3000) {
        discount = Total_amount * 0.10;
    }
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	    SetConsoleTextAttribute(hConsole, 11  );
    cout << "-----------------------BILL------------------------\n\n";
		SetConsoleTextAttribute(hConsole, 7  );
		SetConsoleTextAttribute(hConsole, 13  );
    cout << left << setw(20) << "Discount:" << "Rs." << discount << endl;
    cout << left << setw(20) << "Total Amount:" << "Rs." << Total_amount-discount<< endl;
        SetConsoleTextAttribute(hConsole, 7  );
        SetConsoleTextAttribute(hConsole, 10  );
    cout << "===================================================\n";
    cout << "   Thank you for dining with us!\n";
    cout << "===================================================\n";
        SetConsoleTextAttribute(hConsole, 7  );
}
void makeReservation() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	    SetConsoleTextAttribute(hConsole, 10  );
    if (reservationCount >= MAX_RESERVATIONS) {
        cout << "Sorry, all tables are booked!\n";
        return;
    }
    cout << "Enter your name: ";
    cin >> reservation[reservationCount].name;
    cout << "Enter table number: ";
    cin >> reservation[reservationCount].tableNumber;
    cout << "Enter time (hour:minutes): ";
    cin >> reservation[reservationCount].time;
	    SetConsoleTextAttribute(hConsole, 7  );
	    SetConsoleTextAttribute(hConsole, 5  );
    cout << "Reservation successful!\n";
    reservationCount++;
        SetConsoleTextAttribute(hConsole, 7  );
}
void showReservations() {
    if (reservationCount == 0) {
        cout << "No reservations yet.\n";
        return;
    }
    cout << "\n---- Reservations ----\n";
    for (int i = 0; i < reservationCount; i++) {
        cout << "Table " << reservation[i].tableNumber << " reserved by " << reservation[i].name 
             << " at " << reservation[i].time << "\n";
    }
}
int main()
	{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout<<"==================================";
	SetConsoleTextAttribute(hConsole, 13  );
	cout<<"Welcome to Bismillah Restaurant";
	SetConsoleTextAttribute(hConsole, 7 );
	cout<<"==================================\n\n";
	SetConsoleTextAttribute(hConsole, 1 );
	cout << "\tAssalamunAlaikum!\n\tWelcome dear Sir/Madam.\n";
	SetConsoleTextAttribute(hConsole, 7 );
    cout<<"===========================================";
	SetConsoleTextAttribute(hConsole, 3 );
	cout<<"Main Menu";
	SetConsoleTextAttribute(hConsole, 7 );
	cout<<"===========================================\n\n";
	SetConsoleTextAttribute(hConsole, 11  );
	cout << "* Breakfast\t\t* Lunch\t\t   * Dinner\t      * Reservations\n";
	SetConsoleTextAttribute(hConsole, 7  );
	cout<<"----------------------------------------------------------------------------------\n";
    
     Menus breakfast[] = { {"Anda Paratha", 50}, {"Nan Channy", 80}, {"Siri Paye", 170}, {"Karak Chai", 200},
                           {"Fried Egg", 160}, {"Latte Coffee", 250}, {"Cheese Paratha", 350}, {"Sooji Halwa", 200} };
    
    Menus lunch[] = { {"Chicken Biryani", 500}, {"Nihari", 1000}, {"Mutton Pulao", 900}, {"Saji", 750},
                       {"Yak Karahi", 1500}, {"Chicken Sandwich", 300}, {"Haleem", 300}, {"Shami Kabab", 200} };
    
    Menus dinner[] = { {"Chicken Karahi", 1200}, {"Mutton Karahi", 2000}, {"Beef Karahi", 1600}, {"BBQ", 1400},
                        {"Chappal Kabab", 1000}, {"Chicken Roll Paratha", 300}, {"Yakhni Goshtaba", 300}, {"Mixed Vegetable", 200} };
                        
    double discount;
    Menus* menu=0;
    int menuSize=0;
    char choice,ch;
    double Total_amount = 0;
     	cout<<"\nChoose an option from main menu:\n";
     	SetConsoleTextAttribute(hConsole, 3  );
     	cout << " 'B' for Breakfast\n 'L' for Lunch\n 'D' for Dinner\n 'R' for Make a Reservation\n 'V' for View Reservations\n 'E' for Exit\n";
     	SetConsoleTextAttribute(hConsole, 7  );
     	cout<<"Enter your choice:";
	    cin>>choice;
	    do{
	     int sub_menu, bill_amount = 0; 
	     int quantity;
	    switch(choice)
	 {
		case 'B':
			menu = breakfast;
            menuSize = 8;                
			display_breakfast(menu, menuSize);
			cout<<"-----------------------------------------------------------------------\n";
			SetConsoleTextAttribute(hConsole, 6  );
		    cout<<"\nChoose Your breakfast menu."<<endl;
		   cout<<"\nEnter your choice(1-8):";
		    SetConsoleTextAttribute(hConsole, 7  );
           cin>>sub_menu;
           switch(sub_menu)
           {
           	case 1:
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Anda Paratha would you like to order :";
           		cin>>quantity;
           		bill_amount = quantity * menu[sub_menu - 1].price;
           	    break;
           	case 2:
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Nan Channy would you like to order :";
           		cin>>quantity;
           		bill_amount = quantity * menu[sub_menu - 1].price;
           	    break;
           	case 3:
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Siri Paye would you like to order :";
           		cin>>quantity;
           		bill_amount = quantity * menu[sub_menu - 1].price;
           	    break;
           	case 4:
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Karak Chai would you like to order :";
           		cin>>quantity;
           		bill_amount = quantity * menu[sub_menu - 1].price;
           	    break;
           	case 5:
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Fried Egg would you like to order :";
           		cin>>quantity;
           		bill_amount = quantity * menu[sub_menu - 1].price;
           	    break;
           	case 6:
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Latte Coffee would you like to order :";
           		cin>>quantity;
           		bill_amount = quantity * menu[sub_menu - 1].price;
           	    break;   
            case 7:
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Cheese Pratha would you like to order :";
           		cin>>quantity;
           		bill_amount = quantity * menu[sub_menu - 1].price;
           	    break; 
			case 8:
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Sooji Halwa would you like to order :";
           		cin>>quantity;
           		bill_amount = quantity * menu[sub_menu - 1].price;
           	    break;
			default :
	            SetConsoleTextAttribute(hConsole, 12 );
			 	cout<<"Error! Invalid selection";
	     	    SetConsoleTextAttribute(hConsole, 7 );
	        	return 0;     
		    }  
	    break;
		case 'L':	
        menu = lunch;
        menuSize = 8;
		    display_lunch(menu, menuSize);
		    cout<<"--------------------------------------------------------------------"<<endl;
		    SetConsoleTextAttribute(hConsole, 6  );
		   cout<<"\nChoose Your Lunch menu."<<endl;
		   cout<<"\nEnter your choice(1-8):";
		    SetConsoleTextAttribute(hConsole, 7  );
           cin>>sub_menu;
           switch(sub_menu)
           {
           	case 1:
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Chicken Biryani would you like to order :";
           	    cin>>quantity;
           		bill_amount = quantity * menu[sub_menu - 1].price;
           	    break;
           	case 2:
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Nihari would you like to order :";
           		cin>>quantity;
           		bill_amount = quantity * menu[sub_menu - 1].price;
           	    break;
           	case 3:
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Mutton Pulao would you like to order :";
           		cin>>quantity;
           		bill_amount = quantity * menu[sub_menu - 1].price;
           	    break;
           	case 4:
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Saji would you like to order :";
           		cin>>quantity;
           		bill_amount = quantity * menu[sub_menu - 1].price;
           	    break;
           	case 5:
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Yak Karahi would you like to order :";
           		cin>>quantity;
           		bill_amount = quantity * menu[sub_menu - 1].price;
           	    break;
           	case 6:
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Chicken Sandwich would you like to order :";
           		cin>>quantity;
           		bill_amount = quantity * menu[sub_menu - 1].price;
           	    break;  
			case 7:
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Haleem would you like to order :";
           		cin>>quantity;
           		bill_amount = quantity * menu[sub_menu - 1].price;
           	    break;    
            case 8:
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Shami Kabab would you like to order :";
           		cin>>quantity;
           		bill_amount = quantity * menu[sub_menu - 1].price;   
           	    break; 
			default :
	            SetConsoleTextAttribute(hConsole, 12 );
			 	cout<<"Error! Invalid selection";
	     	    SetConsoleTextAttribute(hConsole, 7 );
	        	return 0;  
		   }
		break;
		case 'D':
           menu = dinner;
           menuSize = 8;
		     display_dinner(menu, menuSize);
		     cout<<"-----------------------------------------------------------------------"<<endl;
		     SetConsoleTextAttribute(hConsole, 6  );
		   cout<<"\nChoose Your Dinner menu."<<endl;
		   cout<<"\nEnter your choice(1-8):";;
           cin>>sub_menu;
             SetConsoleTextAttribute(hConsole, 7  );
           switch(sub_menu)
           { 
            case 1:
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Chicken Karahi would you like to order :";
           		cin>>quantity;
           		bill_amount = quantity * menu[sub_menu - 1].price;
           	    break;
           	case 2:
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Mutton Karahi would you like to order :";
           		cin>>quantity;
           		bill_amount = quantity * menu[sub_menu - 1].price;
           	    break;
           	case 3:
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Beef Karahi would you like to order :";
           		cin>>quantity;
           		bill_amount = quantity * menu[sub_menu - 1].price;
           	    break;
           	case 4:
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of BBQ would you like to order :";
           		cin>>quantity;
           		bill_amount = quantity * menu[sub_menu - 1].price;
           	    break;
           	case 5:
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Chappal Kabab would you like to order :";
           		cin>>quantity;
           		bill_amount = quantity * menu[sub_menu - 1].price;
           	    break;
           	case 6:
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Chicken Roll Paratha would you like to order :";
           		cin>>quantity;
           		bill_amount = quantity * menu[sub_menu - 1].price;
           	    break; 
           	case 7:
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Yakhni Goshtaba would you like to order :";
           		cin>>quantity;
           		bill_amount = quantity * menu[sub_menu - 1].price;
           	    break; 
			case 8:
           		cout<<setw(70)<<setfill(' ')<<"\nWhat amount of Mixed Vegetable would you like to order :";
           		cin>>quantity;
           		bill_amount = quantity * menu[sub_menu - 1].price;
           	    break; 	  
		    default :
	            SetConsoleTextAttribute(hConsole, 12 );
			 	cout<<"Error! Invalid selection";
	     	    SetConsoleTextAttribute(hConsole, 7 );
	        	return 0;
		   }
		   break;
		case 'R': 
			    makeReservation();
			    return 0;  
		case 'V':
			    SetConsoleTextAttribute(hConsole, 6  );
			    showReservations();
			    SetConsoleTextAttribute(hConsole, 7  );
			    return 0;
		case 'E': 
		        SetConsoleTextAttribute(hConsole, 10  );
			    cout << "Thank you for visiting Bismillah Restaurant!\n";
			    SetConsoleTextAttribute(hConsole, 7  );
			    return 0;  
	    default :
	     {      
	            SetConsoleTextAttribute(hConsole, 12 );
			 	cout<<"Error! Please enter the correct option.";
	     	    SetConsoleTextAttribute(hConsole, 7 );
		continue;
	     }	
	 }
    Total_amount += bill_amount;
    SetConsoleTextAttribute(hConsole, 11  );
	cout << "\nWould you like to order something else? (Y/N): ";
	SetConsoleTextAttribute(hConsole, 7  );
    cin >> ch;
    }while(ch=='Y');
     generateBill(Total_amount);
    return 0;
}
