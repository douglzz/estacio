#include <stdio.h>

int main() {

    int index;

    char * nomesAlunos[3] [3] = {
        {"Aluno 0", "Pt: 30", "Mat: 90"},
        {"Aluno 1", "Pt: 25", "Mat: 40"},
        {"Aluno 2", "Pt: 56", "Mat: 30"}
    };

    printf("Digite o numero correspondente com os alunos:\n");
    printf("[0] - Aluno 0\n");
    printf("[1] - Aluno 1\n");
    printf("[2] - Aluno 2\n");
    printf("Digite o numero do aluno: ");

    scanf("%d", &index);

    printf("A nota do %s é %s, %s\n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);



    return 0;
}