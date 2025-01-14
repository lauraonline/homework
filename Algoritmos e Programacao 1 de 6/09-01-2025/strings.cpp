#include <iostream>
#include <locale.h>
#include <string.h>
using namespace std;
main() {
    setlocale (LC_ALL, "Portuguese");
    char nome[100];
    int mat, i, tam, a=0;
    cout<<"Matrícula: "<<endl;
    cin>>mat;
    fflush(stdin);
    cout<<"Nome: "<<endl;
    gets(nome);
    tam = strlen(nome);
    for (i=0;i<tam;i++) {
        if (nome[i] == 'A' || nome[i] == 'a') {
            a++;
        }
    }
    cout<<"Matrícula: "<<mat<<endl;
    cout<<"Nome: "<<nome<<endl;
    cout<<"Número de caracteres:"<<tam<<endl;
    cout<<"Nome letra por letra: ";
    for (i=0;i<tam;i++) {
        cout<<nome[i];
    }
    cout<<endl;
    cout<<"Nome ao contrário: ";
    for (i=tam-1;i>=0;i--) {
        cout<<nome[i];
    }
    cout<<endl;
    strupr(nome);
    cout<<"Nome em maiúsculo: ";
    for (i=0;i<tam;i++) {
        cout<<nome[i];
    }
    cout<<endl;
    strlwr(nome);
    cout<<"Nome em minúsculo: ";
    for (i=0;i<tam;i++) {
        cout<<nome[i];
    }
    cout<<endl;
    cout<<"Número de letras \"A\": "<<a;
    cout<<endl;
    system("pause");
}