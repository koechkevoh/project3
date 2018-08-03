#include <iostream>
using namespace std;

class employee{
    string name;
    long emp_num;
public:
    void putdata(){
        cout<< "\nEnter the employee name :";
        cin >> name;
        cout<< "Enter the employee number :";
        cin>> emp_num;

    }
    void getdata(){
        cout<<endl<<setw(10)<<name<<setw(25)<<emp_num;

    }

};
void main(void){
    cout<< "### Programed By Kevin ,right restricted.~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<< "---------------------------------------------------------------------\n";
    employee emp[50]; int i=0;

    do{
        while(true){
            if(i<50){
                cout<< "Enter more ?(y) to continue: ";
                if{
                    toupper(getche())=='Y')continue;
                }
                break;
            }
            cout <<"\nEmployee name"<<setw(25)<< "Employee number";
            for(int j=0;j<i;j++)
                emp[j].getdata();
            cout<< "\n\n !Press c to continue or any key to exit."<<endl<<endl;
        }
        while(getch()=='c');
    }
}
{

}
