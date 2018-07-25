#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream kevinFile("kevikevo.txt");
      if (kevinFile.is_open()){
        cout<< "ok the file is open\n";

    }else{

    cout << "kevin you messed up\n";
    }


    kevinFile <<"self love bro"<<endl;
    kevinFile.close();


}


