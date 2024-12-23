#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    float soma, vet[4], maior, menor;
    for (int con=1;con<=4;con++) {
        cout<<"Insira o "<<con<<"º valor:"<<endl;
        cin>>vet[con-1];
        soma = soma + vet[con-1];
    }
    maior = vet[0];
    menor = vet[0];
    for (int con=1;con<=4;con++) {
        if (vet[con-1] < menor) {
            menor = vet[con-1];
        }
        if (vet[con-1] > maior) {
            maior = vet[con-1];
        }
    }
    cout<<"Maior valor: "<<maior<<endl;
    cout<<"Menor valor: "<<menor<<endl;
    cout<<"Média dos valores: "<<soma/4<<endl;
    cout<<"Soma dos valores: "<<soma<<endl;    
    system("Pause");
}