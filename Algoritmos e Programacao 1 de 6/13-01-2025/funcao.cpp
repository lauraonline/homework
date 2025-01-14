#include <iostream>
#include <locale.h>
using namespace std;
int ler() {
    int n;
    cout<<"Insira um número inteiro: ";
    cin>>n;
    return n;
}
void soma3(int a, int b, int c) {
    cout<<"Soma: "<<a+b+c<<endl;
}
float media3(int x, int y, int z) {
    float res;
    res = (x + y + z) / 3.0;
    return res;
}
main() {
    int a, b, c;
    a = ler();
    b = ler();
    c = ler();
    cout<<"Número inteiro 1: "<<a<<endl;
    cout<<"Número inteiro 2: "<<b<<endl;
    cout<<"Número inteiro 3: "<<c<<endl;
    soma3(a, b, c);
    cout<<"Média: "<<media3(a, b, c)<<endl;
    system("pause");
}
