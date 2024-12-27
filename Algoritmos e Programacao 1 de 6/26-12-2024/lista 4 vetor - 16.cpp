// Ler um vetor R de 5 elementos contendo o gabarito da LOTO. A seguir ler um vetor A de 10 elementos contendo uma aposta. A seguir imprima quantos pontos fez o apostador.
#include <iostream>
#include <locale.h>
using namespace std;

main () {
    setlocale (LC_ALL, "Portuguese");
    int gab[5], bet[10], i, j, score;
    for (i = 1; i <= 5; i++) {
        cout<<"Insira o "<<i<<"º dígito do resultado: ";
        cin>>gab[i-1];
    }
    for (i = 1; i <= 10; i++) {
        cout<<"Insira o "<<i<<"º dígito da aposta: ";
        cin>>bet[i-1];
    }
    cout<<endl;
    for (i = 0; i <= 9; i++) {
        for (j = 0; j <= 4; j++) {
            if (bet[i] == gab[j]) {
                score++;
            }
        }
    }
    cout<<"Número de pontos marcados: "<<score<<endl;
    system("pause");
}