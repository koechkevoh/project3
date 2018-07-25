// a function template
#include <iostream>
using namespace std;

//template definition
template <class kevin>
kevin addCrap(kevin a, kevin b){
    return a+b;

}


int main()
{
    double x=7.67,y=43.54,z;

    z=addCrap(x,y);

    cout << z  <<endl;


}
