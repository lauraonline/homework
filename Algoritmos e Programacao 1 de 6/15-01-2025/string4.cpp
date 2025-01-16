// Elabore um algoritmo que leia uma string de até 20 caracteres e substitua todas as ocorrências de espaço por um caractere underscore '_'. O programa deve mostrar a string original e a string modificada, além de informar quantas substituições foram realizadas.
#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;
main() {
    setlocale (LC_ALL, "Portuguese");
    char str1[20], str2[20];
    int i, tam, no=0;
    cout<<"Insira a string:"<<endl;
    gets(str1);
    tam = strlen(str1);
    for (i = 0; i <= tam-1; i++) {
        str2[i] = str1[i];
        if (str1[i] == ' ') {
            str2[i] = '_';
            no++;
        }
    }
    cout<<"String final: "<<str1<<endl;
    cout<<"String modificada: "<<str2<<endl;
    cout<<"Número de modificações: "<<no<<endl;
    system("pause");
}