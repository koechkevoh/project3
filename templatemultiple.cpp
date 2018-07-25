#include <iostream>
using namespace std;


template <class FIRST, class SECOND>//need more than one generic class
SECOND smaller(FIRST a, SECOND b){
    return (a<b?a:b);

}

int main()
{
    int x =50;
    double y=40.23;
    cout << smaller(x,y)<<endl;


}
