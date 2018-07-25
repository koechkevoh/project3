#include <iostream>
using namespace std;
template <class T>
class kevin{
public:
    kevin(T x){
        cout << x << " is not a character\n";
    }


};
template<>
class kevin<char>{
 public:
    kevin(char x){
        cout << x<< "is indeed a character\n";
    }

};

int main()
{
    kevin<int> ko1(3);
    kevin<double> ko2(3.909);
    kevin<float> ko3(3/9);
    kevin<char> ko4('k');


}


