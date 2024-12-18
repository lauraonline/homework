#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    float num, maior, menor;
    int con = 0;
    while (con < 10) {
        cout<<"Insira um número ("<<10-con<<" restantes):"<<endl;
        cin>>num;
        if (con == 0) {
            menor = num;
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
        if (num > maior) {
            maior = num;
        }
        con++;
    }
    cout<<"Maior número: "<<maior<<endl;
    cout<<"Menor número: "<<menor<<endl;
    system("Pause");
}