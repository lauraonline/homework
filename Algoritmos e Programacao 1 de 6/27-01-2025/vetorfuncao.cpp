#include <iostream>
#include <locale.h>
using namespace std;

void lervetor(int* vet, int tam) {
    int i;
    for (i=0; i<=tam-1; i++) {
        cout<<"Insira o "<<i+1<<"º valor: ";
        cin>>vet[i];
    }
}

void exibirvetor(int* vet, int tam) {
    int i;
    cout<<"Vetor:"<<endl;
    for (i=0; i<=tam-1; i++) {
        cout<<vet[i]<<"\t";
    }
    cout<<endl;
}

int mediavetor(int* vet, int tam) {
    int i;
    int soma;
    for (i=0; i<=tam-1; i++) {
        soma += vet[i];
    }
    return float(soma)/tam;
}
int maiordovetor(int* vet, int tam) {
    int i;
    int maior=vet[0];
    for (i=0; i<=tam-1; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
    }
    return maior;
}
void imparesnovetor(int* vet, int* impares, int tam) {
	int i;
	for (i=0; i<=tam-1; i++) {
		if (vet[i] % 2 != 0) {
			*impares = *impares + 1;
		}
	}
}
main() {
    setlocale(LC_ALL, "Portuguese");
    int vet[5], i, impares=0;
    lervetor(vet, 5);
    exibirvetor(vet, 5);
    cout<<"Média: "<<mediavetor(vet, 5)<<endl;
    cout<<"Maior: "<<maiordovetor(vet, 5)<<endl;
	imparesnovetor(vet, &impares, 5);
	cout<<"Nº de ímpares: "<<impares<<endl;
    system("Pause");
}
