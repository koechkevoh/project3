#include <iostream>
using namespace std;

template <class T>
class kevin{
    T first,second;
public:
     kevin(T a, T b){
       first=a;
       second=b;
    }
    T bigger();
};
template <class T>
T kevin<T>::bigger(){
      return (first>second?first:second);
}

int main()
{
    kevin<int> ko(40,21);
   cout<< ko.bigger();


}


