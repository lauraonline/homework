#include <iostream>
using namespace std;

int main() {
    float num, maior, menor;
    int con = 0;
    
    cout << "Insira 10 números para determinar o maior e o menor." << endl;

    while (con < 10) {
        cout << "Insira um número (" << 10 - con << " restantes): ";
        cin >> num;

        // Verifica se é o primeiro número
        if (con == 0) {
            menor = num;
            maior = num;
        }

        // Atualiza o menor número
        if (num < menor) {
            menor = num;
        }

        // Atualiza o maior número
        if (num > maior) {
            maior = num;
        }

        con++;
    }

    // Exibe o maior e o menor número
    cout << "Maior número: " << maior << endl;
    cout << "Menor número: " << menor << endl;

    // Espera o usuário antes de encerrar o programa (método mais portátil)
    cout << "Pressione Enter para sair...";
    cin.ignore();
    cin.get();

    return 0;
}
