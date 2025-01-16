// Elaborar um algoritmo que lê uma matriz M(6,6) e um valor A e multiplicar a matriz M pelo valor A e colocar os valores da matriz multiplicada por A em um vetor V(36) e escrever no final o vetor V.
#include <iostream>
#include <locale.h>
using namespace std;
main() {
    setlocale (LC_ALL, "Portuguese");
    float mat[6][6], matmult[6][6], vet[36], mult;
    int i, j, k=-1;
    for (i = 0; i <= 5; i++) {
        for (j = 0; j <= 5; j++) {
            cout<<"["<<i+1<<"]["<<j+1<<"]: ";
            cin>>mat[i][j];
        }
    }
    cout<<"Insira o multiplicador: ";
    cin>>mult;
    for (i = 0; i <= 5; i++) {
        for (j = 0; j <= 5; j++) {
            matmult[i][j] = mat[i][j] * mult;
            k++;
            vet[k] = matmult[i][j];
        }
    }
    cout<<"Vetor final:"<<endl;
    for (i = 0; i <= 35; i++) {
        cout<<vet[i]<<"\t";
    }
    system("pause");
}