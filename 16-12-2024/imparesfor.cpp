#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    int impar, con=1;
    for (impar=1;impar<20;impar=impar+2) {
        cout<<"Ímpar "<<con<<": "<<impar<<endl;
        con++;
    }
    system("Pause");
}