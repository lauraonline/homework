// Escreva um algoritmo que lê uma matriz M(5,5) e calcula as somas:
// a) da linha 4 de M
// b) da coluna 2 de M
// c) da diagonal principal
// d) da diagonal secundária
// e) de todos os elementos da matriz M
// Escrever essas somas e a matriz.
#include <iostream>
#include <locale.h>
using namespace std;

main() {
    float mat[5][5], somal4=0, somac2=0, somadp=0, somads=0, soma=0;
    int i, j;
    for (i = 0; i <= 4; i++) {
        for (j = 0; j <= 4; j++) {
            cout<<"["<<i+1<<"]["<<j+1<<"]: ";
            cin>>mat[i][j];
            soma += mat[i][j];
            if (i == 3) { // linha 4
                somal4 += mat[i][j];
            }
            if (j == 1) { // coluna 2
                somac2 += mat[i][j];
            }
            if (i == j) { // dp
                somadp += mat[i][j];
            }
            if (i + j == 4) { // ds
                somads += mat[i][j];
            }
        }
    }
    cout<<"Soma da linha 4: "<<somal4<<endl;
    cout<<"Soma da coluna 2: "<<somac2<<endl;
    cout<<"Soma da diagonal principal: "<<somadp<<endl;
    cout<<"Soma da diagonal secundária: "<<somads<<endl;
    cout<<"Soma total da matriz: "<<soma<<endl;
    cout<<"Matriz final:"<<endl;
    for (i = 0; i <= 4; i++) {
        for (j = 0; j <= 4; j++) {
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
}