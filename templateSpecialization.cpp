//template specialization -make you make a class has a different notation when a class is passed into it.
#include <iostream>
using namespace std;

template <class T>

class Spunky{
public:
    Spunky(T x){
        cout << x << "is not a character!"<<endl;
#include <iostream>
using namespace std;

int main()
{

}


    }



};

template<>
class Spunky<char>{
public:
    Spunky(char x){
        cout <<x<< "is indeed a character!"<<endl;

    }

};

int main()
{
    Spunky <int> ko1(3);
    Spunky <double> ko2(3.56);
    Spunky <char> ko3('t');


}


