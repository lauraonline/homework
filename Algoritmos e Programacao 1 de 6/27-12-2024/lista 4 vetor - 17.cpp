// Ler um vetor D de 10 elementos. Retire todos os valores nulos ou negativos do vetor D. Escrever o vetor após a retirada dos nulos e negativos. 
#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    float d[10];
    int i;
    // leitura
    for (i = 1; i <= 10; i++) {
        cout<<"Insira o "<<i<<"º valor: ";
        cin>>d[i-1];
    }
    cout<<endl;
    // exibição
    cout<<"Vetor final:"<<endl;
    for (i = 0; i <= 9; i++) {
        if (d[i] > 0) {
            cout<<d[i]<<"\t";
        }
    }
    cout<<endl;
    system("Pause");
}
