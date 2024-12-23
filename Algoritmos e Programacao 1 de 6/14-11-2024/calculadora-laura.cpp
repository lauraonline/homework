#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    float numA, numB, res;
    int op;
    cout<<"insira um número:\n";
    cin>>numA;
    cout<<"insira outro número:\n";
    cin>>numB;
    cout<<"opções de operações\n1 - soma\n2 - subtração\n3 - multiplicação\n4 - divisão real\n5 - divisão inteira\n6 - potenciação\n";
    cin>>op;
    switch(op) {
        case 1:
        res = numA + numB;
        cout<<"resultado: "<<res<<endl;
        break;

        case 2:
        res = numA - numB;
        cout<<"resultado: "<<res<<endl;
        break;

        case 3:
        res = numA * numB;
        cout<<"resultado: "<<res<<endl;
        break;

        case 4:
        if (numB = 0) {
            cout<<"não dá pra dividir por zero\n";
        } else {
            res = numA / numB;
            cout<<"resultado: "<<res<<endl;
        }
        break;

        case 5:
        if (numB = 0) {
            cout<<"não dá pra dividir por zero\n";
        } else {
            res = int(numA) / int(numB);
            cout<<"resultado: "<<res<<endl;
        }
        break;

        case 6:
        res = pow(numA, numB);
        cout<<"resultado: "<<res<<endl;
        break;

        default:
        cout<<"opção não listada";
    }
    system("pause");
}