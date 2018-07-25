//handling an error that might occur in your program.
#include <iostream>
using namespace std;

int main()
{
   try{
   int dadsAge=20;
   int sonsAge=30;

   if (sonsAge>dadsAge){
        throw 99;
      }
   }catch(int x){
       cout << "son cannot be older than dad, ERROR NUMBER: "<<x<<endl;

   }
}


