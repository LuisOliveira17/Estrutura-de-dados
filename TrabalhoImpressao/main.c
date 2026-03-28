#include <stdio.h>
#include <string.h>

#include "TrabalhoImpressao.h"

enum {
    OP_NAO_SELECIONADA=0,
    OP_ADICIONA_TRABALHO,
    OP_PROCESSA_TRABALHO,
    OP_SAIR
};

int menu();
int listar();

int main(void) {
    int opcao = OP_NAO_SELECIONADA;

    while (opcao!=OP_SAIR) {
        opcao = menu();

        switch (opcao) {
            case OP_ADICIONA_TRABALHO:{
                if (esta_cheia()) {
                    printf("SEM ESPACOS PARA ADICIONAR");
                }
                TrabalhoImpressao novoTrabalho;

                printf("Digite o id do trabalho:");
                scanf("%d",&novoTrabalho.id);


                printf("Digite o nome do trabalho:");
                scanf("%s",&novoTrabalho.nome_arquivo);

                printf("Digite o num de paginas:");
                scanf("%d",&novoTrabalho.num_paginas);

                adiciona_trabalho(novoTrabalho);

                break;
            }

            case OP_PROCESSA_TRABALHO: {
                if (esta_vazia()) {
                    printf("SEM TRABALHOS");
                }
                TrabalhoImpressao trabalhoRetirado;
                processa_proximo_trabalho(&trabalhoRetirado);
                printf("TRABALHO RETIRADO\nID:%d",trabalhoRetirado.id);
                break;
            }
        }
    }
    return 0;
}

int menu() {
    int op=0;
    printf("\nMenu:\n");
    printf("%d ADICIONAR",OP_ADICIONA_TRABALHO);
    printf("%d PROCESSAR TRABALHO", OP_PROCESSA_TRABALHO);
    printf("%d SAIR",OP_SAIR);
    printf("--------------------\n");
    printf("Escolha:");
    scanf("%d",&op);

    return op;
}

int listar() {

}