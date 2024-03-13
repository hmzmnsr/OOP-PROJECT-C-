#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
class Details{
	protected:
		int choice;
		int a;
		int amount;
		string name;
    public:
    	void menu(int);
    	void money(){
		SetConsoleTextAttribute(h,3);
		cout<<"Insert the amount: Rs";
		cin>>amount;
		cout<<endl;
	}

	};
	void Details::menu(int a)
		{
    		cout<< "\n\t\t\t     Press 1 for Snacks OR Press 2 for Drinks OR Press 3 for Frozen Food: ";
   			cin >> a;
   			choice = a;
    		
    		if(choice == 1){
    			SetConsoleTextAttribute(h,3);
    			cout<<endl;
    			cout<<"\t\t\t\t\t\t\t" << "1. Lays:     50rs " << endl<<"\t\t\t\t\t\t\t" << "2. Slanty:   20rs " << endl<<"\t\t\t\t\t\t\t" << "3. Kurkure:  30rs " << endl <<"\t\t\t\t\t\t\t"<< "4. OyeHoye:  40rs " << endl<<"\t\t\t\t\t\t\t" << "5. Kitkat:   100rs " << endl<<"\t\t\t\t\t\t\t" << "6. Cadbury:  100rs " << endl <<"\t\t\t\t\t\t\t"<< "7. Twix:     80rs" ;
}
			else if(choice == 2){
				SetConsoleTextAttribute(h,3);
				cout<<endl;
				cout<<"\t\t\t\t\t\t\t" << " 8. Coke:      50rs " << endl<<"\t\t\t\t\t\t\t" << " 9. 7up:       50rs " << endl<<"\t\t\t\t\t\t\t" <<  "10. Sting:     60rs " << endl<<"\t\t\t\t\t\t\t" << "11. Nesfruita: 35rs " <<endl<<"\t\t\t\t\t\t\t"<< "12. Milo:      40rs " ;
			}
			else if(choice == 3){
				SetConsoleTextAttribute(h,3);
				cout<<endl;
				cout<<"\t\t\t\t\t\t" << "    13. Chicken Biryani: 250rs " << endl<<"\t\t\t\t\t\t" << "    14. Chicken Pulao:   240rs " << endl<<"\t\t\t\t\t\t" <<  "    15. 12'Pizza:        500rs " << endl<<"\t\t\t\t\t\t" << "    16. 18'Pizza:        1000rs " <<endl<<"\t\t\t\t\t\t"<< "    17. Chicken Burger:  450rs " ;
			}
			else{
				SetConsoleTextAttribute(h,4);
				cout<<"\nWrong choice, press again!\n ";
			}
		}
	

class Order_one : public Details {
	protected:
		int orderno, b;
		int qty;
		int total;
		int GRANDtotal=0;
		char yesno;
		
	public:

		void select(){
			
			if(choice==1){
			cout<<endl;
			SetConsoleTextAttribute(h,3);
			cout<<"Select your product number(1-7): ";
			cin>>orderno;
			cout<<endl;
			if(orderno<1){
				SetConsoleTextAttribute(h,4);
				cout<<"ERROR! You choosed wrong order number";
				cout<<endl;
			}
			else if(orderno>7){
				SetConsoleTextAttribute(h,4);
				cout<<"ERROR! You choosed wrong order number";
				cout<<endl;
			}
			else{
				SetConsoleTextAttribute(h,3);
				cout<<"Enter the quantity: ";
				cin>>qty;
			if (orderno == 1){
				total = 50 * qty;
				GRANDtotal = total+GRANDtotal;
				name = "Lays";
			}
			else if(orderno == 2){
				total = 20 * qty;
				GRANDtotal = total+GRANDtotal;
				name = "Slanty";
			}
			else if(orderno == 3){
				total = 30 * qty;
				GRANDtotal = total+GRANDtotal;
				name = "Kurkure";
			}
			else if(orderno == 4){
				total = 40 * qty;
				GRANDtotal = total+GRANDtotal;
				name = "OyeHoye";
			}
			else if(orderno == 5){
				total = 100 * qty;
				GRANDtotal = total+GRANDtotal;
				name = "Kitkat";
			}
			else if(orderno == 6){
				total = 100 * qty;
				GRANDtotal = total+GRANDtotal;
				name = "Cadbury";
			}
			else if(orderno == 7){
				total = 80 * qty;
				GRANDtotal = total+GRANDtotal;
				name = "Twix";
			}
			else{
				SetConsoleTextAttribute(h,4);
				cout<<" You choosed wrong product number ";
			}
		}
		}
			
    }
};
class Order_two : public Order_one {
	protected:
		int change;
		int totalqty;
		int totalqty1;
	public:
		void select_one(){
			if(choice==2){
			cout<<endl;
			SetConsoleTextAttribute(h,3);
			cout<<"Select your product number(8-12): ";
			cin>>orderno;
			cout<<endl;
			if(orderno<8){
				SetConsoleTextAttribute(h,4);
				cout<<"ERROR! You choosed wrong product number";
				cout<<endl;
			}
			else if(orderno>12){
				SetConsoleTextAttribute(h,4);
				cout<<"ERROR! You choosed wrong product number";
				cout<<endl;
			}
			else{
				SetConsoleTextAttribute(h,3);
			cout<<"Enter the quantity: ";
			cin>>qty;
			if (orderno == 8){
				total = 50 * qty;
				GRANDtotal = total+GRANDtotal;
				name = "Coke";
			}
			else if(orderno == 9){
				total = 50 * qty;
				GRANDtotal = total+GRANDtotal;
				name = "7up";
			}
			else if(orderno == 10){
				total = 60 * qty;
				GRANDtotal = total+GRANDtotal;
				name = "Sting";
			}
			else if(orderno == 11){
				total = 35 * qty;
				GRANDtotal = total+GRANDtotal;
				name = "Nesfruita";
			}
			else if(orderno == 12){
				total = 40 * qty;
				GRANDtotal = total+GRANDtotal;
				name = "Milo";
			}
			else{
				SetConsoleTextAttribute(h,4);
				cout<<" You choosed wrong product number ";
			}
		}
		}		
    }
	void totalbill(){
		SetConsoleTextAttribute(h,4);
		cout<<"\n\t\t\t\t\t\t\t\tBILL\n";
		if(GRANDtotal>amount){
		cout<<"Money Returned! The inserted amount is less";
	}
	else{
		
		cout<<endl;
		cout<<"Total bill is:  "<<GRANDtotal<<"rs";
		change=amount-GRANDtotal;
		cout<<"\nMoney Returned: " << change << "rs";
	}
}
};
class Order_three : public Order_two{
	protected: 
	public:
		void select_two(){
			if(choice==3){
			cout<<endl;
			SetConsoleTextAttribute(h,3);
			cout<<"Select your product number(13-17): ";
			cin>>orderno;
			cout<<endl;
			if(orderno<13){
				SetConsoleTextAttribute(h,4);
				cout<<"ERROR! You choosed wrong product number";
				cout<<endl;
			}
			else if(orderno>17){
				SetConsoleTextAttribute(h,4);
				cout<<"ERROR! You choosed wrong product number";
				cout<<endl;
			}
			else{
				SetConsoleTextAttribute(h,3);
			cout<<"Enter the quantity: ";
			cin>>qty;
			if (orderno == 13){
				total = 250 * qty;
				GRANDtotal = total+GRANDtotal;
				name = "Chicken Biryani";
			}
			else if(orderno == 14){
				total = 240 * qty;
				GRANDtotal = total+GRANDtotal;
				name = "Chicken Pulao";
			}
			else if(orderno == 15){
				total = 500 * qty;
				GRANDtotal = total+GRANDtotal;
				name = "12'Pizza";
			}
			else if(orderno == 16){
				total = 1000 * qty;
				GRANDtotal = total+GRANDtotal;
				name = "18'Pizza";
			}
			else if(orderno == 17){
				total = 450 * qty;
				GRANDtotal = total+GRANDtotal;
				name = "Chicken Burger";
			}
			else{
				SetConsoleTextAttribute(h,4);
				cout<<" You choosed wrong product number ";
			}
		  }
		}		
    }
	
};
class Thanks{
	protected:
	public:
		virtual void tysm();
};
class Thanks1 : public Thanks{
	protected:
	public:
		void tysm(){
			cout<<"\n\t\t\t\t\t\t  Thanks for ordering, come again!";
		}
}; 
int main(){
	Order_three obj;
	char yesno;
	SetConsoleTextAttribute(h,13);
	cout << "\n\n\t\t\t\t\t\t WELCOME TO MANSOOR VENDING MACHINE "<<endl;
	obj.money();
    SetConsoleTextAttribute(h,7);
	cout << " \n\n\t\t\t\t\t\t\t        MENU " << endl;
	do
	{
	 obj.menu(0);
	 obj.select();
	 obj.select_one();
	 obj.select_two();
	 SetConsoleTextAttribute(h,3);
	 cout<< "\nDo you want to order again? Press Y for YES or Press N for NO: ";
	 cin>>yesno;
	 cout<<endl;	
    }
     while(yesno == 'Y'|| yesno == 'y');
	 obj.totalbill();
	 
	 Thanks *ptr;
	 Thanks1 obj1;
	 ptr = &obj1;
	 ptr->tysm();
	 
	 return 0;
}