// Faça um algoritmo que leia um código numérico inteiro e um vetor de 50 posições de números reais. Se o código for zero, termine o algoritmo. Se o código for 1, mostre o vetor na ordem direta. Se o código for 2, mostre o vetor na ordem inversa.
#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    int set, i;
    float vet[50]; // 5
    // leitura vetor
    for (i = 1; i <= 50; i++) { // 5
        cout<<"Insira o "<<i<<"º valor: ";
        cin>>vet[i-1];
    }
    // leitura código
    cout<<"Agora insira o código:\n0 - Fechar programa\n1 - Exibir vetor\n2 - Exibir vetor invertido\nCódigo: ";
    cin>>set;
    while (set < 0 || set > 2) {
        cout<<"Insira uma opção válida!\nCódigo: ";
        cin>>set;
    }
    switch (set) {
        case 0:
            break;
        case 1:
            cout<<"Vetor final:"<<endl;
            for (i = 0; i <= 49; i++) { // 5
                cout<<vet[i]<<"\t";
            }
            cout<<endl;
            break;
        case 2:
            cout<<"Vetor invertido:"<<endl;
            for (i = 49; i >=0; i--) {
                cout<<vet[i]<<"\t";
            }
            cout<<endl;
            break;
    }
    system("Pause");
}