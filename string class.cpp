#include <iostream>
#include <fstream>//gives you string functions

using namespace std;

 int main()
 {
     string s1 = "dkjfd;fkkdlki";
    cout << s1.at(10)<<endl;

    for(int x=0; x<s1.length(); x++){
        cout <<s1.at(x)<<endl;
    }
 }

