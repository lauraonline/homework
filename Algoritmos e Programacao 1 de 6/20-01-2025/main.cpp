// 3 notas de um aluno por parÃ¢metro + letra
// Se A -> média aritmética
// Se P -> média ponderada 5/3/2
// Se H -> média harmônica
// retornar por parâmetro

#include <iostream>
#include <locale.h>
#include "lernota.h"
#include "media.h"
#include "leropcao.h"
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    int i;
    float nota1, nota2, nota3;
    char opcao;
    lernota(&nota1, 1);
    lernota(&nota2, 2);
    lernota(&nota3, 3);
    leropcao(&opcao);
    media(nota1, nota2, nota3, opcao);  
    system("Pause");
}