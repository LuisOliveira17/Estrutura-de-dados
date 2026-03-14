#include <stdio.h>
#include "Fila.h"


enum {
    OP_NAO_SELECIONADA=0,
    OP_PUSH,
    OP_POP,
    OP_SAIR
};
int menu();
int listar();

int main(void) {
    int opcao = OP_NAO_SELECIONADA;
    int num;

    while (opcao!=OP_SAIR) {
        opcao= menu();

        switch (opcao) {
            case OP_PUSH:
                printf("Digite um numero: ");
                scanf("%d",&num);
                if (!push(num)) {
                    printf("FILA CHEIA");
                }
                listar();
                break;
            case OP_POP:
                if (pop(&num)) {
                    printf("ITEM %d RETIRADO\n",num);
                }
                listar();
                break;
            case OP_SAIR:
                break;
            default:
                printf("Opcao invalido");

        }
    }

    return 0;
}

int menu() {
    int op=0;
    printf("\nMenu:\n");

    printf("%d. PUSH\n",OP_PUSH);
    printf("%d. POP\n",OP_POP);
    printf("%d. SAIR\n",OP_SAIR);
    printf("-------------------\n");
    printf("Escolha:");
    scanf("%d",&op);


    return op;
}
int listar() {
    int i = inicio;
    while (i != fim) {
        printf("[%d] ", fila[i]);

        if (i == TAMANHO) {
            i = 0;
        } else {
            i++;
        }
    }
    printf("\n");
}