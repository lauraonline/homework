#include <iostream>
#include <locale.h>
using namespace std;

void read(int* n, int i) {
    cout<<i<<" = ";
    cin>>*n;
}

void avg(int* no1, int* no2) {
float avg;
avg = (*no1 + *no2) / 2.0;
cout<<"avg == "<<avg<<endl;
}

float avgr (int *no1, int *no2) {
    float avg;
    avg = (*no1 + *no2) / 2.0;
    return avg;
}

main() {
    setlocale (LC_ALL, "Portuguese");
    int a1, a2;
    read(&a1, 1);
    read(&a2, 2);
    cout<<"1 == "<<a1<<endl;
    cout<<"2 == "<<a2<<endl;
    avg(&a1, &a2);
    cout<<"return avg == "<<avgr(&a1, &a2)<<endl;
    system("Pause");
}