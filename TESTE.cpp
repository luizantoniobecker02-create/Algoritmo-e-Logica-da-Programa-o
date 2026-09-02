#include <stdio.h>
#include <string.h>

int main() {

    char alunos[5][50];
    float notas[5][3];
    float media;

    // Cadastro dos nomes dos alunos
    printf("--- Cadastro de alunos ---\n");

    for (int i = 0; i < 5; i++) {

        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(alunos[i], 50, stdin);

        // Remove o \n capturado pelo fgets
        alunos[i][strcspn(alunos[i], "\n")] = '\0';
    }

    // Cadastro das notas
    printf("\n--- Cadastro das notas ---\n");

    for (int i = 0; i < 5; i++) {

        printf("\nAluno: %s\n", alunos[i]);

        for (int j = 0; j < 3; j++) {

            printf("Digite a nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }

        // Limpa o ENTER deixado pelo scanf
        getchar();
    }

    // Exibindo os alunos, notas e médias
    printf("\n--- Resultado final ---\n");

    for (int i = 0; i < 5; i++) {

        printf("\nAluno: %s\n", alunos[i]);

        printf("Notas: ");

        for (int j = 0; j < 3; j++) {
            printf("%.1f ", notas[i][j]);
        }

        // Calculando a média
        media = (notas[i][0] + notas[i][1] + notas[i][2]) / 3;

        printf("\nMedia: %.1f\n", media);

        if (media >= 7) {
            printf("Situacao: Aprovado\n");
        } else {
            printf("Situacao: Reprovado\n");
        }
    }

    return 0;
}
