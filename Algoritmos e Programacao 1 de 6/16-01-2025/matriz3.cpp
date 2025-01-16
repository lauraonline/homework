// Escreva um algoritmo que leia um número inteiro A e uma matriz V 30x30 de inteiros. Conte quantos valores iguais a A estão na matriz. Crie, a seguir, uma matriz X contendo todos os elementos de V diferentes de A. Mostre os resultados.
#include <iostream>
#include <locale.h>
using namespace std;
main() {
    setlocale (LC_ALL, "Portuguese");
    int i, j, v[4][4], a, soma=0, x[4][4]; // 4
    cout<<"Insira o valor de A: ";
    cin>>a;
    for (i = 0; i <= 3; i++) { // 4
        for (j = 0; j <= 3; j++) { // 4
            cout<<"V ["<<i+1<<"]["<<j+1<<"]: ";
            cin>>v[i][j];
            if (v[i][j] == a) {
                soma++;
            } else {
                x[i][j] = v[i][j];
            }
        }
    }
    cout<<"Número de valores A na matriz V: "<<soma<<endl;
    cout<<"Matriz X:"<<endl;
    for (i = 0; i <= 3; i++) { // 4
        for (j = 0; j <= 3; j++) { // 4
            cout<<x[i][j]<<"\t";
        }
        cout<<endl;
    }
    system("Pause");
}