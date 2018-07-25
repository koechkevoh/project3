#include <iostream>
using namespace std;

class BaseClass{
   public:
       BaseClass(){

       cout << "Thgsjdkdmd;ls"<<endl;
       }
       ~BaseClass(){
       cout  << "tsakshbsj"<< endl;

       }

};

class DerivedClass : public BaseClass{
   public:
    DerivedClass (){
        cout << "tahagjshsnj"<<endl;

    }
    ~DerivedClass (){
        cout << "augshbzhjasu"<<endl;

    }

};

int main ()
{
    cout << "we will now define ksmamsk"<<endl;
    DerivedClass object;

    return 0;
}
