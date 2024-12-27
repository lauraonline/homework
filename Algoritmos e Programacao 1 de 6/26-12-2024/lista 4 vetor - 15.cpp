//Ler 2 vetores, R de 5 elementos e S de 10 elementos. Gere um vetor X que possua os elementos comuns a R e a S. Considere que no mesmo vetor não haverá números repetidos. Escrever o vetor X. 
#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    float R[5], S[10], X[5];
    int i, j, comum, vet;
    for (vet = 1; vet <= 2; vet++) {
        if (vet == 1) {
            for (i = 1; i <= 5; i++) { 
                cout<<"Insira o "<<i<<"º valor de R: ";
                cin>>R[i-1];
            }
        } else {
            for (i = 1; i <= 10; i++) {
                cout<<"Insira o "<<i<<"º valor de S: ";
                cin>>S[i-1];
            }
        }
    }
    cout<<endl;
    for (i = 0; i <= 9; i++) {
        for (j = 0; i <= 4; j++) {
            if (S[i] == R[j]) {
                X[j] = S[i];
            }
        }
    }
    cout<<"Vetor X:"<<endl;
    for (i = 0; i <= 4; i++) {
        cout<<X[i]<<"\t";
    }
    cout<<endl;
    system("pause");
}