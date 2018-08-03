#include <iostream>
using namespace std;

int main()
{
    int tura[5]= {67,38,90,56,89};
    int sum = 0;

    for (int x=0; x<5; x++){
        sum+=tura[x];
        cout << sum<<endl;
    }
}
