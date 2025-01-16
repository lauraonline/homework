// Escrever um algoritmo que lê uma matriz A(15,5) e a escreva. Verifique, a seguir, quais os elementos de A que estão repetidos e quantas vezes cada um está repetido. Escrever cada elemento repetido com uma mensagem dizendo que o elemento aparece X vezes em A.
#include <iostream>
#include <locale.h>
using namespace std;

main() {
float A[6][2];
int i, j;
    for (i = 0; i <= 5; i++) {
        for (j = 0; j <= 1; j++) {
            cout<<"["<<i+1<<"]["<<j+1<<"]: ";
            cin>>A[i][j];
        }
    }

}