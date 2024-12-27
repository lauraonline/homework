// Escrever um algoritmo que lê 2 vetores X(10) e Y(10) e os escreva. Crie, a seguir, um vetor Z que seja 
// a) a união de X com Y; 
// b) a soma entre X e Y; 
// c) o produto entre X e Y; 
// Escreva o vetor Z a cada cálculo. 
#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    float x[10], y[10], z[20];
    int i, vetor;
    // leitura
    for (vetor = 1; vetor <= 2; vetor++) {
        for (i = 1; i <= 10; i++) {
        cout<<"Insira o valor "<<i<<" do vetor "<<vetor<<": ";
        if (vetor == 1) {
            cin>>x[i-1];
        } else {
            cin>>y[i-1];
        }
        }
    }
    // união
    for (i = 0; i <= 19; i++) {
        if (i <= 9) {
            z[i] = x[i];
        } else {
            z[i] = y[i-10];
        }
    }
    cout<<"União dos vetores:"<<endl;
    for (i = 0; i <= 19; i++) {
        cout<<z[i]<<"\t";
    }
    cout<<endl;
    // soma
    cout<<"Soma dos vetores:"<<endl;
    for (i = 0; i <= 9; i++) {
        z[i] = x[i] + y[i];
        cout<<z[i]<<"\t";
    }
    cout<<endl;
    // produto
    cout<<"Produto dos vetores:"<<endl;
    for (i = 0; i <= 9; i++) {
        z[i] = x[i] * y[i];
        cout<<z[i]<<"\t";
    }
    cout<<endl;
    system("Pause");
}