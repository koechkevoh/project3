#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream objectFile("object.text");

    string name;
    int x;
    cout << "Enter name"<<endl;

    while(cin>>name>>x){
        objectFile<<name<<x<<endl;
    }
}

