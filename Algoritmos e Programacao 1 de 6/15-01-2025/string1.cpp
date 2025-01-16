// Escreva um algoritmo que leia uma string de até 50 caracteres e conte quantas vogais (a, e, i, o, u, maiúsculas e minúsculas) existem na string. Mostre o total de vogais encontradas.
#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    char str[50];
    int i, vogais=0;
    cout<<"Insira a string:"<<endl;
    gets(str);
    for (i = 0; i <=49; i++) {
        if (str[i] == 'a' ||
        str[i] == 'e' ||
        str[i] == 'i' ||
        str[i] == 'o' ||
        str[i] == 'u' ||
        str[i] == 'A' ||
        str[i] == 'E' ||
        str[i] == 'I' ||
        str[i] == 'O' ||
        str[i] == 'U') {
            vogais++;
        }
    }
    cout<<"Número de vogais encontradas: "<<vogais<<endl;
    system("Pause");
}