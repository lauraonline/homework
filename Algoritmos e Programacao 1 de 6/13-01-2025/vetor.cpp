#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    int i, imaior;
    float vet[4], maior, soma=0;
    for (i=1; i<=4;i++) {
        cout<<"Insira o "<<i<<"º valor do vetor: ";
        cin>>vet[i-1];
    }
    cout<<endl;
    maior = vet[0];
    imaior = 0;
    cout<<"Vetor final:"<<endl;
    for (i=0; i <=3; i++) {
        cout<<vet[i]<<"\t";
        if (vet[i] > maior) {
            maior = vet[i];
            imaior = i;
        }
        soma = soma + vet[i];
    }
    cout<<endl;
    cout<<"Soma dos valores: "<<soma<<endl;
    cout<<"Média dos valores: "<<soma/4.0<<endl;
    cout<<"Maior valor: "<<maior<<", posição "<<imaior+1<<endl;
    system("pause");
}