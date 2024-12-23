#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale(LC_ALL, "Portuguese");
    int numA = 0, numB = 0, numC = 1, con = 1;
    while (con <= 20) {
        cout<<"Número "<<con<<": "<<numC<<endl;
        numA = numB;
        numB = numC;
        numC = numA + numB;
        con++;
    }
}