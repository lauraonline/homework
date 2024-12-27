// Faça um algoritmo que leia dois vetores (A e B) de 50 posições de números inteiros. O algoritmo deve, então, subtrair o primeiro elemento de A do último de B, acumulando o valor em outro vetor, subtrair o segundo elemento de A do penúltimo de B, acumulando o valor, e assim por diante. Mostre o vetor resultante. 
#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    int A[5], B[5], C[5], i, v; // 5
    // leitura
    for (v = 1; v <= 2; v++) {
        for (i = 1; i <= 5; i++) { // 5
            switch (v) {
                case 1:
                    cout<<"Insira o "<<i<<"º valor do vetor A: ";
                    cin>>A[i-1];
                    break;
                case 2:
                    cout<<"Insira o "<<i<<"º valor do vetor B: ";
                    cin>>B[i-1];
                    break;
            }
        }
    }
    cout<<endl;
    // subtração
    for (i = 0; i <= 4; i++) { // 5
        C[i] = A[i] - B[4-i]; // 5
    }
    // exibição
    cout<<"Vetor A:"<<endl;
    for (i = 0; i <= 4; i++) { // 5
        cout<<A[i]<<"\t";
    }
    cout<<endl;
    cout<<"Vetor B:"<<endl;
    for (i = 0; i <= 4; i++) { // 5
        cout<<B[i]<<"\t";
    }
    cout<<endl;
    cout<<"Vetor calculado:"<<endl;
    for (i = 0; i <= 4; i++) { // 5
        cout<<C[i]<<"\t";
    }
    cout<<endl;
    system("Pause");
}