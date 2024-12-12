#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    float nota, acc=0;
    int con=1;
    do {
        cout<<"Insira a nota "<<con<<endl;
        cin>>nota;
        acc = acc + nota;
        con++;
    } while (con <= 4);
    if (acc/con>=7) {
        cout<<"Aluno aprovado";
    } else {
        if (acc/con>=5) {
            cout<<"Aluno em recuperação";
        } else {
            cout<<"Aluno reprovado";
        }
    }
}