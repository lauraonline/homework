// Escreva um algoritmo que leia um vetor G de 20 elementos caracter que representa o gabarito de uma prova. A seguir, para cada um dos 50 alunos da turma, leia o vetor de respostas (R) do aluno e conte o número de acertos. Mostre o nº de acertos do aluno e uma mensagem APROVADO, se a nota for maior ou igual a 6; e mostre uma mensagem de REPROVADO, caso contrário.
#include <iostream>
#include <locale.h>
using namespace std;

main () {
    setlocale (LC_ALL, "Portuguese");
    char g[20], aluno[20];
    int i, q, n = 0;
    // leitura gabarito
    for (i = 1; i <= 20; i++) {
        cout<<"Insira a resposta da questão "<<i<<": ";
        cin>>g[i-1];
    }
    system("cls");
    // leitura aluno
    for (i = 1; i <= 50; i++) { // 5
        cout<<"ALUNO "<<i<<":"<<endl;
        for (q = 1; q <= 20; q++) {
            cout<<"Insira a resposta da questão "<<q<<": ";
            cin>>aluno[q-1];
        }
        for (q = 0; q <= 19; q++) {
            if (g[q] == aluno[q]) {
                n++;
            }
        }
        cout<<"Número de acertos: "<<n<<endl;
        if (n < 12) {
            cout<<"Aluno "<<i<<" REPROVADO."<<endl;
        } else {
            cout<<"Aluno "<<i<<" APROVADO."<<endl;
        }
        n = 0;
        cout<<endl;
    }
    system("Pause");
}