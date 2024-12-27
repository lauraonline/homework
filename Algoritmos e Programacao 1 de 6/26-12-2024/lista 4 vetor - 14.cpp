// Elaborar um algoritmo que lê um conjunto de 30 valores e os colocar em 2 vetores conforme sejam identificados como pares ou ímpares. O tamanho de cada vetor é de 5 posições. Se algum vetor estiver cheio, escrevê-lo. Terminada a leitura escrever o conteúdo dos dois vetores. Cada vetor pode ser preenchido tantas vezes quantas forem necessárias.
#include <iostream>
#include <locale.h>
using namespace std;

main () {
    setlocale (LC_ALL, "Portuguese");
    int vet[15], impar[5], par[5], i; // 15
    // leitura
    for (i = 1; i <= 15; i++) { // 15
        cout<<"Insira o "<<"º valor: ";
        cin>>vet[i];
    }
    for (i = 0; i <= 14; i++) {
        if (vet[i] % 2 == 0) {
            
        } 
    }
    system("Pause");
}