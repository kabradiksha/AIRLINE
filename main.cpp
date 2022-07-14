#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management{
	public:
		Management(){
			mainMenu();
		}
};


class Details{
	public:
		static string name, gender;
		int phoneNo, age;
		string add;
		static int cId;
		char arr[100];
		
		void information(){
			cout<<"\nEnter the Customer ID:";
			cin>>cId;
			cout<<"\nEnter the name:";
			cin>>name;
			cout<<"\nEnter the age:";
			cin>>age;
			cout<<"\nEnter the Address:";
			cin>>add;
			cout<<"\nEnter your gender:";
			cin>>gender;
			cout<<"Your details are saved with us\n"<<endl;
		}
};


int Details::cId;
string Details::name;
string Details::gender;

class Registration{
	public:
		static int choice;
		int choice1,back;
		static float charges;
		
		void flights(){
			string flight[]={"Dubai","Canada", "UK", "USA", "Australia", "Europe"};
			for(int i=0;i<6;i++){
				cout<<(i+1)<<".flight to"<<flight[i]<<endl;
			}
			cout<<"\nWelcome to the Airlines!"<<endl;
			cout<<"Press the number of the country of which you want to book the flight:";
			cin>>choice;
			
			switch(choice){
				case 1:
					{
						cout<<"_____________________________Welcome to Dubai Emirates_____________________________\n"<<endl;
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. DUB- 498"<<endl;
						cout<<"\t 08-09-2022  8:00AM 10hrs   Rs.  14000"<<endl;
						cout<<"2. DUB- 654"<<endl;
						cout<<"\t 09-09-2022  5:00PM 9hrs   Rs.  16000"<<endl;
						cout<<"3. DUB- 320"<<endl;
						cout<<"\t 12-09-2022  6:00AM 12hrs   Rs.  11000"<<endl;
						
						cout<<"\nSelect the flight you want to book:";
						cin>>choice1;
						
						if(choice1==1){
							charges=14000;
							cout<<"\n you have successfully booked the flight DUB- 498"<<endl;
							cout<<"you can go back to menu and take the ticket"<<endl;
						}
						else if(choice1==2){
							charges=16000;
							cout<<"\n you have successfully booked the flight DUB- 654"<<endl;
							cout<<"you can go back to menu and take the ticket"<<endl;
						}
						else if(choice1==3){
							charges=11000;
							cout<<"\n you have successfully booked the flight DUB- 320"<<endl;
							cout<<"you can go back to menu and take the ticket"<<endl;
						}
						else{
							cout<<"Invalid Input, Shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1){
							mainMenu();
						}
						else{
							mainMenu();
						}
						
						break;
					}
				case 2:
					{
						cout<<"_____________________________Welcome to Canadian Airlines_____________________________\n"<<endl;
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. CA- 45"<<endl;
						cout<<"\t 02-09-2022  7:00AM 8hrs   Rs.  9000"<<endl;
						cout<<"2. CA- 23"<<endl;
						cout<<"\t 10-09-2022  4:00PM 9hrs   Rs.  13000"<<endl;
						cout<<"3. CA- 32"<<endl;
						cout<<"\t 13-09-2022  5:00AM 12hrs   Rs.  11000"<<endl;
						
						cout<<"\nSelect the flight you want to book:";
						cin>>choice1;
						
						if(choice1==1){
							charges=9000;
							cout<<"\n you have successfully booked the flight CA- 45"<<endl;
							cout<<"you can go back to menu and take the ticket"<<endl;
						}
						else if(choice1==2){
							charges=13000;
							cout<<"\n you have successfully booked the flight CA- 23"<<endl;
							cout<<"you can go back to menu and take the ticket"<<endl;
						}
						else if(choice1==3){
							charges=11000;
							cout<<"\n you have successfully booked the flight CA- 32"<<endl;
							cout<<"you can go back to menu and take the ticket"<<endl;
						}
						else{
							cout<<"Invalid Input, Shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1){
							mainMenu();
						}
						else{
							mainMenu();
						}
						
						break;	
					}
				case 3:
					{
						cout<<"_____________________________Welcome to UK Airways_____________________________\n"<<endl;
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. UK- 432"<<endl;
						cout<<"\t 01-09-2022  6:00AM  7hrs    Rs.  15000"<<endl;
						cout<<"2. UK- 987"<<endl;
						cout<<"\t 05-09-2022  2:00PM  9hrs    Rs.  13000"<<endl;
						cout<<"3. UK- 326"<<endl;
						cout<<"\t 06-09-2022  8:00PM  12hrs   Rs.  10000"<<endl;
						
						cout<<"\nSelect the flight you want to book:";
						cin>>choice1;
						
						if(choice1==1){
							charges=15000;
							cout<<"\n you have successfully booked the flight UK- 432"<<endl;
							cout<<"you can go back to menu and take the ticket"<<endl;
						}
						else if(choice1==2){
							charges=13000;
							cout<<"\n you have successfully booked the flight UK- 987"<<endl;
							cout<<"you can go back to menu and take the ticket"<<endl;
						}
						else if(choice1==3){
							charges=10000;
							cout<<"\n you have successfully booked the flight UK- 326"<<endl;
							cout<<"you can go back to menu and take the ticket"<<endl;
						}
						else{
							cout<<"Invalid Input, Shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1){
							mainMenu();
						}
						else{
							mainMenu();
						}
						
						break;
					}
					
				case 4:
					{
						cout<<"_____________________________Welcome to US Airways _____________________________\n"<<endl;
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. US- 245"<<endl;
						cout<<"\t 08-09-2022  8:00AM 10hrs   Rs.  15000"<<endl;
						
						cout<<"\nSelect the flight you want to book:";
						cin>>choice1;
						
						if(choice1==1){
							charges=15000;
							cout<<"\n you have successfully booked the flight US- 245"<<endl;
							cout<<"you can go back to menu and take the ticket"<<endl;
						}
						else{
							cout<<"Invalid Input, Shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1){
							mainMenu();
						}
						else{
							mainMenu();
						}
						
						break;
					}
					
				case 5:
					{
						cout<<"_____________________________Welcome to Australian Airlines_____________________________\n"<<endl;
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. AS- 638"<<endl;
						cout<<"\t 07-09-2022  4:00AM 10hrs   Rs.  23000"<<endl;
						cout<<"2. AS- 123"<<endl;
						cout<<"\t 15-09-2022  5:00PM 9hrs   Rs.  25000"<<endl;
						
						cout<<"\nSelect the flight you want to book:";
						cin>>choice1;
						
						if(choice1==1){
							charges=23000;
							cout<<"\n you have successfully booked the flight AS- 638"<<endl;
							cout<<"you can go back to menu and take the ticket"<<endl;
						}
						else if(choice1==2){
							charges=25000;
							cout<<"\n you have successfully booked the flight AS- 123"<<endl;
							cout<<"you can go back to menu and take the ticket"<<endl;
						}
						else{
							cout<<"Invalid Input, Shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1){
							mainMenu();
						}
						else{
							mainMenu();
						}
						
						break;
					}
					
				case 6:
					{
							cout<<"_____________________________Welcome to European Airlines_____________________________\n"<<endl;
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. EU- 932"<<endl;
						cout<<"\t 10-09-2022  9:00AM 11hrs   Rs.  21000"<<endl;
						cout<<"2. EU- 786"<<endl;
						cout<<"\t 13-09-2022  3:00PM 13hrs   Rs.  23000"<<endl;
						cout<<"3. EU- 543"<<endl;
						cout<<"\t 18-09-2022  9:00PM 16hrs   Rs.  28000"<<endl;
						
						cout<<"\nSelect the flight you want to book:";
						cin>>choice1;
						
						if(choice1==1){
							charges=21000;
							cout<<"\n you have successfully booked the flight EU- 932"<<endl;
							cout<<"you can go back to menu and take the ticket"<<endl;
						}
						else if(choice1==2){
							charges=23000;
							cout<<"\n you have successfully booked the flight EU- 786"<<endl;
							cout<<"you can go back to menu and take the ticket"<<endl;
						}
						else if(choice1==3){
							charges=28000;
							cout<<"\n you have successfully booked the flight EU- 543"<<endl;
							cout<<"you can go back to menu and take the ticket"<<endl;
						}
						else{
							cout<<"Invalid Input, Shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1){
							mainMenu();
						}
						else{
							mainMenu();
						}
						
						break;
					}
					
				default:
					{
						cout<<"Invalid Input, Shifting you to the main menu!"<<endl;
						mainMenu();
						break;
					}
			}
		}
};

float Registration::charges;
int Registration::choice;

class Ticket: public Registration, Details {
	public:
		void Bill(){
			string destination="";
			ofstream outf("records.txt");
				{
					outf<<"_________________________Sahara Airlines_________________________"<<endl;
					outf<<"_____________________________Ticket______________________________"<<endl;
					outf<<"_________________________________________________________________"<<endl;
					
					outf<<"Customer ID:"<<Details::cId<<endl;
					outf<<"Customer Name:"<<Details::name<<endl;
					outf<<"Customer Gender:"<<Details::gender<<endl;
					outf<<"\tDescription"<<endl<<endl;
					
					if(Registration::choice==1){
						destination="Dubai";
					}
					else if(Registration::choice==2){
						destination="Canada";
					}
					else if(Registration::choice==3){
						destination="UK";
					}
					else if(Registration::choice==4){
						destination="USA";
					}
					else if(Registration::choice==5){
						destination="Australia";
					}
					else if(Registration::choice==6){
						destination="Europe";
					}
					
					outf<<"Destination\t\t"<<destination<<endl;
					outf<<"Flight cost:\t\t"<<Registration::charges<<endl;
				}
				
				outf.close();
			}
			
			void display(){
				ifstream ifs("records.txt");
				{
					if(!ifs){
						cout<<"File error!"<<endl;
					}
					while(!ifs.eof()){
						ifs.getline(arr, 100);
						cout<<arr<<endl;
					}
				}
				ifs.close();
			}
};


void mainMenu(){
	int lchoice, schoice, back;
	
	cout<<"\t                        Sahara Airlines \n"<<endl;
	cout<<"\t___________________________Main Menu____________________________"<<endl;
	
	cout<<"\t________________________________________________________________"<<endl;
	cout<<"\t\t\t\t\t\t"<<endl;
	
	cout<<"\t|\t Press 1 to add the Customer Details   \t| "<<endl;
	cout<<"\t|\t Press 2 for Flight Registration       \t| "<<endl;
	cout<<"\t|\t Press 3 for Ticket and Charges        \t| "<<endl;
	cout<<"\t|\t Press 4 to Exit                       \t| "<<endl;
	
	cout<<"\t________________________________________________________________"<<endl;
	
	cout<<"Enter Your Choice: ";
	cin>>lchoice;
	
	Details d;
	Registration r;
	Ticket t;
	
	switch(lchoice){
		case 1:
			{
				cout<<"___________________Customers___________________\n"<<endl;
				d.information();
				cout<<"Press any key to go to main menu";
				cin>>back;
				
				if(back==1){
					mainMenu();
				}
				else{
					mainMenu();
				}
				break;
			}
			
		case 2:
			{
				cout<<"_____________Book a flight using this system_____________\n"<<endl;
				r.flights();
				break;
			}
			
		case 3:
			{
				cout<<"____________GET YOUR TICKET_____________\n"<<endl;
				t.Bill();
				
				cout<<"Your ticket is printed, You can collect it \n"<<endl;
				cout<<"Press 1 to display your ticket ";
				cin>>back;
				if(back==1){
					t.display();
					cout<<"Press any key to go back main menu:";
					cin>>back;
					if(back==1){
						mainMenu();
					}
					else{
						mainMenu();
					}
				}
				else{
					mainMenu();
				}
				break;
			}
			
		case 4:
			{
				cout<<"\n\n\t________________THANK YOU _________________"<<endl;
				break;
			}
			
		defaule:
			{
				cout<<"Invalid Input, Please try again!\n"<<endl;
				mainMenu();
				break;
			}
	}

}



int main(){
	Management Mobj;
	return 0;
}