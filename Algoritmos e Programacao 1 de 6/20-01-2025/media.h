using namespace std;
void media(float nota1, float nota2, float nota3, char opcao) {
    if (opcao == 'A') {
        cout<<"Média aritmética: "<<(nota1+nota2+nota3)/3<<endl;
    }
    if (opcao == 'P') {
        cout<<"Média ponderada: "<<((nota1*5)+(nota2*3)+(nota3*2))/10<<endl;
    }
    if (opcao == 'H') {
        cout<<"Média harmônica: "<<3/((1/nota1)+(1/nota2)+(1/nota3))<<endl;
    }
}