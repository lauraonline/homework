#include <iostream>
#include <locale.h>
using namespace std;

main() {
	setlocale(LC_ALL, "Portuguese");
	int senha, con, ten;
	con = 0;
	cout<<"JOGADOR 1 - Insira a senha"<<endl;
	cin>>senha;
	system("cls");
	while ((senha < 0) || (senha > 100)) {
		cout<<"A senha deve ser um número entre 0 e 100"<<endl;
		cout<<"JOGADOR 1 - Insira a senha"<<endl;
		cin>>senha;
		system("cls");
	}
	while (con < 5) {
		cout<<"JOGADOR 2 - Insira o palpite "<<con+1<<endl;
		cin>>ten;
		while ((ten < 0) || (ten > 100)) {
			cout<<"O palpite deve ser um número entre 0 e 100"<<endl;
			cout<<"JOGADOR 2 - Insira o palpite "<<con+1<<endl;
			cin>>ten;
		}
		if (ten == senha) {
			con++;
			cout<<"Você acertou! Número de rodadas jogadas: "<<con<<endl;
			con = con + 5;
		}
		else {
			if (ten < senha) {
				cout<<"A senha é maior que "<<ten<<". Número de tentativas restantes: "<<5-(con+1)<<endl;
			}
			else {
				cout<<"A senha é menor que "<<ten<<". Número de tentativas restantes: "<<5-(con+1)<<endl;
			}
		}
		con++;
	}
	if (ten != senha) {
		cout<<"JOGADOR 2 - Você não acertou em 5 tentativas. A senha era "<<senha<<endl;
	}
	cout<<"Fim de jogo"<<endl;
}
