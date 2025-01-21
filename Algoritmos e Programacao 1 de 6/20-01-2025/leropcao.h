using namespace std;
char leropcao(char *opcao) {
    cout<<"Insira a opção:\n(A = média aritmética)\n(P = média ponderada 5/3/2)\n(H = média harmônica)"<<endl;
    cin>>*opcao;
    while (*opcao != 'A' && *opcao != 'P' && *opcao != 'H') {
        cout<<"Insira uma opção válida!"<<endl;
        cout<<"Insira a opção:\n(A = média aritmética)\n(P = média ponderada 5/3/2)\n(H = média harmônica)"<<endl;
        cin>>*opcao;
    }
    return *opcao;
}