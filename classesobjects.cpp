
#include <iostream>
using namespace std;
//make sure you are outside main
class KevinKip{
public://anything you going put in this you are going to use outside this class.
    //access specifier
    void coolSaying(){

    cout << "preaching to the choir\n";
    }


};
int main()
{
    KevinKip kevinObject;

    kevinObject.coolSaying();

    return 0;
}




