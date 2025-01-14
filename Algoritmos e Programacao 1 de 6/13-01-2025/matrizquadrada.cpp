#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    int i, j, mt, mj, tam, imparesabaixoenadp;
    float soma=0, somadp=0, maiorabaixoenadp;
    cout<<"Insira o tamanho da matriz: ";
    cin>>tam;
    float mat[tam][tam];
    for (i = 0; i <= tam-1; i++) {
        for (j = 0; j <= tam-1; j++) {
            cout<<"Insira o elemento ["<<i<<"]["<<j<<"]: ";
            cin>>mat[i][j];
        }
    }
    cout<<endl;
    maiorabaixoenadp = mat[0][0];
    mt = 0;
    mj = 0;
    cout<<"Matriz final:"<<endl;
    for (i = 0; i <= tam-1; i++) {
        for (j = 0; j <= tam-1; j++) {
            cout<<mat[i][j]<<"\t";
            soma = soma + mat[i][j];
            if (i == j) {
                somadp = somadp + mat[i][j];
            }
            if (i == j || i > j) {
                
            }
        }
        cout<<endl;
    }

    system("pause");
}