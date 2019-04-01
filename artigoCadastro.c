#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include "artigoCadastro.h"

void inicialiazar(LISTA* l){
    l->inicio = NULL;
}

void quantidadeArtigos(LISTA* l){
    PONT end = l->inicio;
    int quantidade = 0;

    while(end!=NULL){
        quantidade++;
        end = end->prox;
    }
    printf("O CADASTRO POSSUI --> %d ARTIGOS", quantidade);
}

void imprimir(LISTA* l){
    PONT end = l->inicio;
    printf("\nCADASTRO DE ARTIGOS: \n");

    while(end!=NULL){
        printf("\nAUTOR: %s", end->reg.autores);
        printf("\nTITULO: %s", end->reg.titulo);
        printf("\nREVISTA: %s", end->reg.revista);
        printf("\nANO: %d", end->reg.ano);
        printf("\nDOI: %s\n\n", end->reg.doi);
        end = end->prox;
    }
}

void inserir(LISTA* l, REGISTRO reg){
    PONT novo = NULL;
    PONT depois = l->inicio;
    PONT anterior = NULL;

    novo = (PONT) malloc(sizeof(ELEMENTO));
    if (novo==NULL){
        printf("NAO DEU PARA ALOCAR \n\n");
        return;
    }

    novo->reg = reg;
    novo->prox = NULL;

    if (l->inicio==NULL){
        l->inicio = novo;
    }

    else{
        while(depois!=NULL && strcmp(depois->reg.autores, reg.autores)<0){
            anterior = depois;
            depois = depois->prox;
        }

        if(depois==NULL && anterior!=NULL){
            anterior->prox = novo;
        }
        else{
            if(depois!=NULL && anterior==NULL){
                novo->prox = depois;
                l->inicio = novo;
            }
            else{
                anterior->prox = novo;
                novo->prox = depois;
            }
        }
    }
}

void busca_sequencial(LISTA* l, char* autor){
    PONT atual = l->inicio;

    if (atual==NULL){
        printf("\nLISTA VAZIA");
        return;
    }
    else{
        while (atual!=NULL && strcmp(atual->reg.autores, autor)<0){
            atual = atual->prox;
            }

        if(atual!=NULL && strcmp(atual->reg.autores, autor)==0){
            printf("--------------------------------------------------------------------\n");
            printf("\t\t\t  VOCE BUSCOU:  \n\n");
            printf("\nAUTOR: %s", atual->reg.autores);
            printf("\nTITULO: %s", atual->reg.titulo);
            printf("\nREVISTA: %s", atual->reg.revista);
            printf("\nANO: %d", atual->reg.ano);
            printf("\nDOI: %s\n", atual->reg.doi);
            printf("--------------------------------------------------------------------\n");
        }
        else{
            printf("NAO ENCONTRADO");
        }
        return NULL;
    }
}

void excluir_elemento(LISTA* l, char* autor){
    PONT atual = l->inicio;
    PONT anterior = NULL;

    if (atual==NULL){
        printf("\nLISTA VAZIA");
        return;
    }
    else{
        while (atual!=NULL && strcmp(atual->reg.autores, autor)<0){
            anterior = atual;
            atual = atual->prox;
            }

        if(atual!=NULL && strcmp(atual->reg.autores, autor)==0){
            if(l->inicio==atual){
                l->inicio = atual->prox;
                free(atual);
                printf("--------------------------------------------------------------------\n");
                printf("\t\t\tELEMENTO EXCLUIDO\n");
                printf("--------------------------------------------------------------------\n");
            }
            else{
                anterior->prox = atual->prox;
                free(atual);
                printf("--------------------------------------------------------------------\n");
                printf("\t\t\tELEMENTO EXCLUIDO\n");
                printf("--------------------------------------------------------------------\n");
            }

        }
        return NULL;
    }
}

void reinicilizar(LISTA*l){
    PONT end = l->inicio;
    while (end!=NULL){
        PONT apagar = end;
        end = end->prox;
        free(apagar);
    }
    l->inicio = NULL;
}
