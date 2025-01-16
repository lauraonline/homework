// Desenvolva um algoritmo que leia duas strings de até 30 caracteres cada e verifique se a segunda string está contida dentro da primeira. O programa deve informar a posição inicial em que a segunda string foi encontrada ou uma mensagem indicando que não foi encontrada
#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    char str1[30], str2[30];
    int i, pos;
    cout<<"Insira a primeira string:"<<endl;
    gets(str1);
    cout<<"Insira a segunda string:"<<endl;
    gets(str2);
    for (i = 0; i <= 29; i++) {
        if (str1[i] == str2) {
            pos = i+1;
        } else {
            pos = 0;
        }
    }
    if (pos > 0) {
        cout<<"Posição inicial da string 2 dentro da string 1: "<<pos<<endl;
    } else {
        cout<<"String 2 não encontrada dentro da string 1"<<endl;
    }
    system("pause");
}