#include <iostream>
using namespace std;

class bank{
public:
    void menu(void);
    void login();
    void createAccount();


    private:
    int userpick;
    string username;
    char password[30];
    };
void bank::createAccount(){
    cout << "username"<<endl;
    cin >> username;

    cout << "password"<<endl;
    cin >> password;


}

void bank::menu(){
    cout<<"SELECT OPTION"<<endl;
	cout<<"1 create account "<<endl;
	cout<<"2 login"<<endl;
	cout<<"3 quit"<<endl;
	cin>>userpick;
}

void bank::login(){
	string *username2=&username;
	char password2=&password;
	cout<<"LOGIN TO ACCOUNT"<<endl;
	cout<<"enter your username"<<endl;
	cin>>username2;
	if (username2=username){
	cout<<"\n enter your password:"<<endl;
	cin>>password;

	if (password2=password){
		cout<<"LOGIN SUCCESSFULL"<<endl;
		int userchoice=0;
	int	accessmenu( int &userchoice,int &savingsaccount,int &currentaccount);
}
else if(password2!=password){
	cout<<"enter password again"<<endl;
	cin>>password;
	menu(userpick,username,password);
}
else{
	cout<<"code error!!!!!"<<endl;
}
	}else if(username2!=username){
		cout<<"wrong username"<<endl;

		menu(userpick,username,password);
	}
	else{
		cout<<"error!!!!";
	}
	return 0;
}

	switch(userpick){
		case 1:
			 createAccount();
			break;

        case 2:
            login();
            break;


		/*
		case 2:
			int login(int &userpick,string &username,char &password);
			break;

		case 3:
			break;

		default:
			cout<<"wacha ujinga"<<endl;

	}*/
}
}




int main()
{
 bank bankObj;
 bankObj.menu();
 bankObj.createAccount();

}
