#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    // saída: matriz final, soma, média, no. de ímpares abaixo e na diagonal secundária, soma dos valores da diagonal principal, maior valor abaixo e na diagonal principal 
    int i, j, mi, mj, tam, imparesabds=0; // linha, coluna, linha do maior, coluna do maior, tamanho da matriz, número de ímpares abaixo e na diagonal secundária
    float soma=0, somadp=0, maiorabdp; // soma da matriz, soma dos valores da diagonal principal, maior valor abaixo e na diagonal principal
    cout<<"Insira o tamanho da matriz: ";
    cin>>tam;
    int mat[tam][tam];
    for (i = 0; i <= tam-1; i++) {
        for (j = 0; j <= tam-1; j++) {
            cout<<"Insira o elemento ["<<i+1<<"]["<<j+1<<"]: ";
            cin>>mat[i][j];
        }
    }
    cout<<endl;
    maiorabdp = mat[0][0];
    mi = 0;
    mj = 0;
    cout<<"Matriz final:"<<endl;
    for (i = 0; i <= tam-1; i++) {
        for (j = 0; j <= tam-1; j++) {
            cout<<mat[i][j]<<"\t";
            soma = soma + mat[i][j];
            if (i == j) {
                somadp = somadp + mat[i][j];
            }
            if (i + j == tam-1 || i + j >= tam) {
                if (mat[i][j] % 2 != 0) {
                    imparesabds++;
                }
            }
            if (i == j || i > j) {
                if (mat[i][j] > maiorabdp) {
                    maiorabdp = mat[i][j];
                    mi = i;
                    mj = j;
                }
            }
        }
        cout<<endl;
    }
    cout<<"Soma da matriz: "<<soma<<endl;
    cout<<"Média da matriz: "<<soma/(tam*2.0)<<endl;
    cout<<"Número de ímpares abaixo e na diagonal secundária: "<<imparesabds<<endl;
    cout<<"Soma da diagonal principal: "<<somadp<<endl;
    cout<<"Maior valor abaixo e na diagonal principal: "<<maiorabdp<<endl;
    system("pause");
}