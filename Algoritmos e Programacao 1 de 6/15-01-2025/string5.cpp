// Desenvolva um algoritmo que leia duas strings de mesmo tamanho (até 50 caracteres) e gere uma terceira string que contenha os caracteres das posições ímpares da primeira string e os caracteres das posições pares da segunda string. Mostre as três strings.
#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    char str1[50], str2[50], str3[50];
    int i, tam1, tam2, maxtam;
    cout<<"Insira a primeira string:"<<endl;
    gets(str1);
    while (strlen(str1) > 50) {
        cout<<"String longa demais!"<<endl;
        cout<<"Insira a primeira string:"<<endl;
        gets(str1);
    }
    cout<<"Insira a segunda string:"<<endl;
    gets(str2);
    while (strlen(str2) > 50) {
        cout<<"String longa demais!"<<endl;
        cout<<"Insira a segunda string:"<<endl;
        gets(str1);
    }
    tam1 = strlen(str1);
    tam2 = strlen(str2);
    if (tam1 > tam2) {
        maxtam = tam1;
    } else {
        maxtam = tam2;
    }
    for (i = 0; i < maxtam; i++) {
        if (i % 2 == 0) {
            str3[i] = str1[i];
        } else {
            str3[i] = str2[i];
        }
    }
    cout<<"String 1: "<<str1<<endl;
    cout<<"String 2: "<<str2<<endl;
    cout<<"String resultante: "<<str3<<endl;
    cout<<"Tamanho: "<<maxtam<<endl;
    system("pause");
}