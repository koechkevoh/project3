#include <iostream>
using namespace std;

class employee{
  public:
    int employeeNumber;
    string name;


     void putData(int dataArray[],int sizeOfArray){
         for (int x=0;x<sizeOfArray;x++){

            cout<< "Enter employee name"<<endl;
            cin>>name[x];

            cout << "Enter the employee number"<<endl;
            cin>>employeeNumber;
         }


     }

void  getData(int dataArray[],int sizeOfArray){
    for (int x=0; x<sizeOfArray; x++){
        cout << dataArray[x]<<endl;
    }



      }

 };

void main()
{
    void  getData(int dataArray[],int sizeOfArray);
    void putData(int dataArray[],int sizeOfArray);
    int employeeNumber;
    string name;
    int employeeNo[2]={employeeNumber};
    string empName[2] ={name};
    getData(employeeNo, 2);
    //getData(empName,2);

    employee emp;
    //emp.putData();
    //emp.getData();
    return 0;

}
