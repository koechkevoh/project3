//class templates....generic data type.
#include <iostream>
using namespace std;

template <class K>
class kevin{
    K first, second;

public:
    kevin(K a, K b){
        first =a;
        second =b;

    }
    K bigger();

};

template <class K>
K kevin<K>::bigger(){
    return(first>second?first:second);
}


int main()
{
    kevin <int>ko(78,90);
    cout<<ko.bigger();

}


