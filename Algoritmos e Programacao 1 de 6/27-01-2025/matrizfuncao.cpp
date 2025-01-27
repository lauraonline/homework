#include <iostream>
#include <locale.h>
using namespace std;

void lermatriz(int* mat, int tam) {
	int i, j;
	for (i=0; i<=tam-1; i++) {
		for (j=0; j<=tam-1; j++) {
			cout<<"["<<i<<"]["<<j<<"]: ";
			cin>>mat[i][j];
		}
	}
}

void exibirmatriz(int* mat, int tam) {
	int i, j;
	for (i=0; i<=tam-1; i++) {
		for (j=0; j<=tam-1; j++) {
			cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}
}

main() {
	setlocale (LC_ALL, "Portuguese");
	int mat[3][3];
	lermatriz(mat, 3);
	exibirmatriz(mat, 3);
	system("Pause");
}
