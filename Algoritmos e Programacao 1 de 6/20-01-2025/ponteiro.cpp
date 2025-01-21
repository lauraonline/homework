#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    int a, *ptr;
    cout<<"a = ";
    cin>>a;
    ptr = &a;
    cout<<"a == "<<a<<endl;
    cout<<"ptr a == "<<&a<<endl;
    cout<<"ptr == "<<ptr<<endl;
    *ptr = 11;
    cout<<"new ptr == "<<a<<endl;
    system("Pause");
}