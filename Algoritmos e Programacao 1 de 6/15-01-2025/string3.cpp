// Escreva um algoritmo que leia uma string de até 40 caracteres e gere uma nova string com os caracteres na ordem inversa. Por exemplo, se a string original for "programa", a string resultante deve ser "amargorp". Mostre ambas as strings.
#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    char str[40], rts[40];
    int i, tamanho;
    cout<<"Insira a string:"<<endl;
    gets(str);
    tamanho = strlen(str);
    for (i = 0; i <= tamanho-1; i++) {
        rts[tamanho-1-i] = str[i];
    }
    cout<<"String: "<<str<<endl;
    cout<<"String invertida: "<<rts<<endl;
}