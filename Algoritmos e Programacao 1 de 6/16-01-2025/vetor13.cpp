// 3. Faça um algoritmo que leia dois vetores (A e B) de 50 posições de números inteiros. O algoritmo deve, então, subtrair o primeiro elemento de A do último de B, acumulando o valor em outro vetor, subtrair o segundo elemento de A do penúltimo de B, acumulando o valor, e assim por diante. Mostre o vetor resultante
#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    int vetA[5], vetB[5], vetC[5], i;
    for (i = 0; i <= 4; i++) {
        cout<<"Insira o valor "<<i+1<<" do vetor A: ";
        cin>>vetA[i];
    }
    for (i = 0; i <= 4; i++) {
        cout<<"Insira o valor "<<i+1<<" do vetor B: ";
        cin>>vetB[i];
    }
    for (i = 0; i <= 4; i++) {
        vetC[i] = vetB[4-i] - vetA[i];
    }
    cout<<"Vetor A: ";
    for (i = 0; i <= 4; i++) {
        cout<<vetA[i]<<"\t";
    }
    cout<<endl<<"Vetor B: ";
    for (i = 0; i <= 4; i++) {
        cout<<vetB[i]<<"\t";
    }
    cout<<endl<<"Vetor resultante: ";
    for (i = 0; i <= 4; i++) {
        cout<<vetC[i]<<"\t";
    }
    system("Pause");
}