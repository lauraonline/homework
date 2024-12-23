#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    int ti, tj, i, j;
    cout<<"Insira o número de linhas da matriz:"<<endl;
    cin>>ti;
    while (ti < 1) {
        cout<<"O número deve ser maior que 0!"<<endl<<"Insira o número de linhas da matriz:";
        cin>>ti;
    }
    cout<<"Insira o número de colunas da matriz:"<<endl;
    cin>>tj;
    while (tj < 1) {
        cout<<"O número deve ser maior que 0!"<<endl<<"Insira o número de colunas da matriz:";
        cin>>tj;
    }
    float M[ti][tj], s = 0, sl = 0;
    for (i = 0; i <= ti - 1; i++) {
        for (j = 0; j <= tj-1; j++) {
            cout<<"["<<i<<"]["<<j<<"]: ";
            cin>>(M[i][j]);
            s = s + M[i][j]; 
            if (i == ti-1) {
                sl = sl + M[i][j];
            }
        }
    }
    cout<<"Matriz final:";
    for (i = 0; i <= ti - 1; i++) {
        cout<<endl;
        for (j = 0; j <= tj - 1; j++) {
            cout<<M[i][j]<<"\t";
        }
    }
    cout<<endl;
    cout<<"Soma da matriz: "<<s<<endl;
    cout<<"Média da matriz: "<<s / (ti * tj)<<endl;
    cout<<"Soma da última linha: "<<sl<<endl;
    system("Pause");
}
