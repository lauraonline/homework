// Ler as notas finais de uma turma de 10 alunos armazenando-as em um vetor N. A seguir calcule a média aritmética das notas dos alunos aprovados (nota maior ou igual a 6). Armazene em um vetor P a posição (índice) que cada aluno ocupa no vetor N, dos alunos que obtiveram nota maior que a média calculada. Imprimir a média calculada e logo após o vetor P. OBS: Não deixar valores em branco entre os elementos de P.
#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    float n[10], m = 0;
    int i, j = 0, k;
    // leitura
    for (i = 1; i <= 10; i++) {
        cout<<"Insira a nota do aluno "<<i<<": ";
        cin>>n[i-1];
    }
    cout<<endl;
    // cálculo da média
    for (i = 0; i <= 10; i++) {
        while (n[i] >= 6) {
            m = m + n[i];
        }
    }
    m = m/10;
    // criação e preenchimento do vetor
    for (i = 0; i <= 10; i++) {
        while (n[i] > m) {
            j++;
        }
    }
    int p[j];
    for (i = 0; i <= 10; i++) {
        for (k = 0; k <= j-1; k++) {
            while (n[i] > m) {
                p[k] = i;
            }
        }
    }
    // exibição
    cout<<"Média dos alunos aprovados: "<<m<<endl;
    cout<<"Alunos acima da média: ";
    for (i = 0; i <= j-1; i++) {
        if (i < j-1) {
            cout<<p[i]<<", ";
        } else {
            cout<<p[i];
        }
    }
    system("pause");
}