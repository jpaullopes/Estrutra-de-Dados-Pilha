#ifndef PILHADINAMICA_H
#define PILHADINAMICA_H

typedef struct aluno{ // Estrutura de dados do aluno
    int matricula;
    char nome[30];
    float n1, n2, n3;
}Aluno;

typedef struct elemento{
    Aluno dados;
    struct elemento *prox;
}No;

typedef struct pilha{
    No *topo;
}Pilha;


#endif // PILHADINAMICA_H