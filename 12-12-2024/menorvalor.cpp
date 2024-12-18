#include <iostream>
#include <locale.h>
using namespace std;

main() {
    int valor, mevalor, con = 1;
    while (valor != -1) {
        cout<<"Insira o número "<<con<<" ou insira -1 para terminar:"<<endl;
        cin>>valor;
        while (valor == 0 || valor < -1) {
            cout<<valor<<" não é um valor válido! Ele deve ser inteiro e positivo."<<endl;
            cout<<"Insira o número "<<con<<" ou insira -1 para terminar:"<<endl;
            cin>>valor;
        }
        if (con == 1 || valor < mevalor) {
            mevalor = valor;
        }
        con++;
    }
    cout<<"O menor valor da sequência de "<<con<<" números é "<<mevalor<<endl;
}