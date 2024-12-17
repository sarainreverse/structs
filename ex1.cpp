// Cria uma estrutura chamada aluno com os campos nome, idade e notafinal

#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float notaFinal;
};

int main() {    
    // Exemplo de como declarar uma variável do tipo Aluno
    struct Aluno aluno1;

    // Atribuindo valores aos campos da estrutura
    printf("Digite o nome do aluno: ");
    scanf("%49s", aluno1.nome);
    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno1.idade);
    printf("Digite a nota final do aluno: ");
    scanf("%f", &aluno1.notaFinal);

    // Exibindo os valores armazenados
    printf("\nInformacoes do Aluno:\n");
    printf("Nome: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Nota Final: %.2f\n", aluno1.notaFinal);

}