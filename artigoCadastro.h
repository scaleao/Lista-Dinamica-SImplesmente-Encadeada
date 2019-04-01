#ifndef ARTIGOCADASTRO_H_INCLUDED
#define ARTIGOCADASTRO_H_INCLUDED



typedef struct{
    char autores[100];
    char doi[100];
    char revista[100];
    char titulo[200];
    int ano;
}REGISTRO;

typedef struct aux{
    REGISTRO reg;
    struct aux* prox;
}ELEMENTO;

typedef ELEMENTO* PONT;

typedef struct{
    PONT inicio;
}LISTA;

void inicialiazar(LISTA*l);
void quantidadeArtigos(LISTA*l);
void imprimir(LISTA*l);
void busca_sequencial(LISTA*, char*);
void inserir(LISTA* l, REGISTRO reg);
#endif // ARTIGOCADASTRO_H_INCLUDED
