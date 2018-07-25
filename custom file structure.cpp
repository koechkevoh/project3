#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream theFile("player.txt");
    cout << "Enters players Name and number"<<endl;
    cout << "Press ctrl+z to quit\n";

    int number;
    string name;

    while(cin >>name>>number){

        theFile<< name << ' '<<number<<endl;
    }


}


