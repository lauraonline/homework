// Fazer um algoritmo para ler uma matriz de inteiros MAT(3,3) e imprimir a matriz. Emseguida, calcular e informar a média dos valores da matriz.
#include <iostream>
#include <locale.h>
using namespace std;
main() {
    setlocale (LC_ALL, "Portuguese");
    int mat[3][3], i, j, soma=0;
    for (i = 0; i <= 2; i++) {
        for (j = 0; j <= 2; j++) {
            cout<<"["<<i+1<<"]["<<j+1<<"]: ";
            cin>>mat[i][j];
            soma = soma + mat[i][j];
        }
    }
    cout<<"Média dos valores: "<<soma/9.0<<endl;
    system("pause");
}