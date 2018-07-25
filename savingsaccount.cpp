#include <iostream>
#include <string>

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
             string name;
             string faculty;
             string course;
             char yearOfStudy[30];
             string university;
             char eMailAddress[40];
             int telephoneContact;
             int balance;
             int depo;
             int with;


    };
    int num;
    void Bank::menu(){
    cout << "\n choose your options from 1 to 6 "<<endl<<endl;
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
     cout << "\tStudent Name:"<<endl;
     getline(cin, name);
     cout <<name;
     cout << "\tFaculty:"<<endl;
     cin >>faculty;
     cout << "\tCourse:"<<endl;
     cin >>course;
     cout << "\tYear Of Study:"<<endl;
     cin >>yearOfStudy;
     cout << "\tUniversity:"<<endl;
     cin >>university;
     cout << "\tTelephone Contact:"<<endl;
     cin >>telephoneContact;
     cout << "\tEmail-Address:"<<endl;
     cin >>eMailAddress;
     cout<<"\n";
     cin >>go;

     if(go==0){

        menu();
     }else return;
     }
void Bank::deposit(){
    int go;
    cout<< "\t\tEnter amount your want to Deposit to Your Account"<<endl;
    cin>>depo;
    balance+=depo;
    cout<< "\tHit Zero to go to Main Menu"<<endl;
    cout<< "\n";
    cin >>go;

     if(go==0){

        menu();
     }else return;
}
void Bank::check(){
    int go;
    cout << "Your Account balance"<<endl;
    cout << balance;
    cout<< "\tHit Zero to go to Main Menu:"<<endl;
    cin >>go;

     if(go==0){

        menu();
     }else return;
}
void Bank::withdraw(){
    int go;
    cout<< "Enter amount you want to withdraw:\n";
    cin >>with;
    cout<<"you have successfully withdrawn :Ksh"<<with;
	balance-=with;
	cout<<"\nbalance is :Ksh\n"<<balance<<endl;
	cout<< "\tHit Zero to go to Main Menu:"<<endl;
    cin >>go;

     if(go==0){

        menu();
     }else return;



}
void Bank::BankInfo()
{
	int go;
	cout<<"student's name:"<<name;
	cout<<"\n";
	cout<<"faculty:"<<faculty;
	cout<<"\n";
	cout<<"course:"<<course;
	cout<<"\n";
	cout<<"year of study:"<<yearOfStudy<<endl;
	cout<<"university:"<<university;
	cout<<"\n";
	cout<<"telephone contact:"<<telephoneContact;
	cout<<"\n";
	cout<<"email- address:"<<eMailAddress;
	cout<<"\n";


		cout<<"\t\nHit zero to go to main menu:";

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
