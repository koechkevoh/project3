#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

    class Bank{
        public:
             void menu(void);
             void get(void);
             void deposit(void);
             void withdraw(void);
             void check(void);
             void BankInfo(void);


        private:
             char name[50];
             char faculty[50];
             char course[50];
             char yearOfStudy[30];
             char university[50];
             char eMailAddress[40];
             int telephoneContact;
             int balance;
             int depo;
             int with;


    };
    int num;
    void Bank::menu(){
    cout << "-----------------------------------------";
    cout << "\n PLEASE SELECT AN OPTION FROM MENU BELOW"<<endl;
    cout << "-----------------------------------------"<<endl;
    cout << "\t\t----\n";
    cout << "\t\tMENU"<<endl;
    cout << "\t\t----"<<endl;
    cout << "\t1. Create a Saving Account"<<endl;
    cout << "\t2. Deposit Money to Your Account"<<endl;
    cout << "\t3. Withdraw Money From Your Account"<<endl;
    cout << "\t4. Check Your Balance"<<endl;
    cout << "\t5. Your Account's info"<<endl;
    cout << "\t6. Exit"<<endl<<endl<<endl;

     cin>>num;
    switch(num){
        case 1:
            get();
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdraw();
            break;
        case 4:
            check();
            break;
        case 5:
            BankInfo();
            break;

          }
    }
 void Bank::get(){
     int go;
     cout << "\tStudent Name: ";
     cin.getline(name,50);
     cout << "\tFaculty: ";
     cin >>faculty;
     cout << "\tCourse: ";
     cin >>course;
     cout << "\tYear Of Study: ";
     cin >>yearOfStudy;
     cout << "\tUniversity: ";
     cin >>university;
     cout << "\tTelephone Contact: ";
     cin >>telephoneContact;
     cout << "\tEmail-Address: ";
     cin >>eMailAddress;
     cout<< "\t\n\nHIT ZERO TO GO TO MAIN MENU"<<endl;
     cout<<"\n";
     cin >>go;

     if(go==0){

        menu();
     }else return;
     }
void Bank::deposit(){
    int go;
    cout<< "\tEnter amount your want to Deposit to Your Account"<<endl;
    cin>>depo;
    balance+=depo;
    cout<< "\t\nHIT ZERO TO GO TO MAIN MENU"<<endl;
    cout<< "\n";
    cin >>go;

     if(go==0){

        menu();
     }else return;
}
void Bank::check(){
    int go;
    cout << "\tYour Account Balance : Ksh ";
    cout << balance;
    cout<< "\t\n\nHIT ZERO TO GO TO MAIN MENU"<<endl;
    cin >>go;

     if(go==0){

        menu();
     }else return;
}
void Bank::withdraw(){

    int go;
    cout<< "\tEnter amount you want to withdraw: Ksh ";
    cin >>with;
    cout<<"\tYou have successfully withdrawn : Ksh "<<with;
	balance-=with;
	cout << "\n";
	cout<<"\tBalance is : Ksh"<<balance<<endl<<endl;
	cout<< "HIT ZERO TO GO TO MAIN MENU"<<endl;
    cin >>go;


     if(go==0){

        menu();
     }else return;



}
void Bank::BankInfo()
{
	int go;
	cout<<"\tstudent's name: "<<name;
	cout<<"\n";
	cout<<"\tfaculty: "<<faculty;
	cout<<"\n";
	cout<<"\tcourse: "<<course;
	cout<<"\n";
	cout<<"\tyear of study: "<<yearOfStudy<<endl;
	cout<<"\tuniversity:"<<university;
	cout<<"\n";
	cout<<"\ttelephone contact:"<<telephoneContact;
	cout<<"\n";
	cout<<"\temail- address:"<<eMailAddress;
	cout<<"\n";


    cout<<"\t\nHIT ZERO TO GO TO MAIN MENU";

	cout<<"\n";
	cin>>go;

	if(go==0)
	{
		menu();
	}
	else return;


	cout<<"\n";
}

int main()
{
    Bank object;
    object.menu();

    return 0;

}
