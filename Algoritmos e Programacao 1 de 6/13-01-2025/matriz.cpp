#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    int i, j, imenor, jmenor;
    float mat[3][2], menor, soma=0;
    for (i=0; i <= 2; i++) {
        for (j=0; j<=1; j++) {
            cout<<"Insira o elemento ["<<i+1<<"]["<<j+1<<"]: ";
            cin>>mat[i][j];
        }
    }
    cout<<endl;
    menor = mat[0][0];
    imenor = 0;
    jmenor = 0;
    cout<<"Matriz final:"<<endl;
    for (i=0; i<=2; i++) {
        for (j=0; j<=1; j++) {
            cout<<mat[i][j]<<"\t";
            if (mat[i][j] < menor) {
                menor = mat[i][j];
                imenor = i;
                jmenor = j;
            }
            if (i == 1) {
                    soma = soma + mat[i][j];
                }
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Soma dos valores da linha 2: "<<soma<<endl;
    cout<<"Média dos valores da linha 2: "<<soma/2.0<<endl;
    cout<<"Menor valor: "<<menor<<", posição ["<<imenor<<"]["<<jmenor<<"]"<<endl;
    system("pause");
}