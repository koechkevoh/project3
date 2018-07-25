#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream kevinFile;

    kevinFile.open("tuna.txt");
    kevinFile << "i love tuna and tuna loves me!\n";
    kevinFile.close();


}


