// Escrever um algoritmo que lê um vetor X(20) e o escreva. Escreva, a seguir, cada um dos valores distintos que aparecem em X dizendo quantas vezes cada valor aparece em X.
#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    float x[20], con[20];
    int i, i2, val = 0, proc;
    // leitura
    for (i = 1; i <= 20; i++) {
        cout<<"Insira o "<<i<<"º valor: ";
        cin>>x[i-1];
    }
    cout<<endl;
    // impressão
    cout<<"Vetor final:"<<endl;
    for (i = 0; i <= 19; i++) {
        cout<<x[i]<<"\t";
    }
    cout<<endl;
    // contagem
    for (i = 0; i <= 19; i++) {
        con[i] = x[i];
        for (i2 = 0; i2 <= 19; i2++) {
            if (x[i2] == con[i]) {
                val++;
            }
        }
    }
    system("Pause");
}