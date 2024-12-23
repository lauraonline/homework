// Escreva um algoritmo que leia um vetor de 20 posições e mostre-o. Em seguida, troque o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e assim sucessivamente. Mostre o novo vetor depois da troca.
#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    float vet[20], inv[20];
    int i;
    // leitura
    for (i = 1; i <= 20; i++) {
        cout<<"Insira o valor "<<i<<": ";
        cin>>vet[i-1];
    }
    cout<<endl;
    for (i = 0; i <= 19; i++) {
        inv[19-i] = vet[i];
    }
    cout<<"Vetor fornecido:"<<endl;
    for (i = 0; i <= 19; i++) {
        cout<<vet[i]<<"\t";
    }
    cout<<endl;
    cout<<"Vetor invertido:"<<endl;
    for (i = 0; i <= 19; i++) {
        cout<<inv[i]<<"\t";
    }
    cout<<endl;
    system("Pause");
}