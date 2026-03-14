//
// Created by gusta on 07/03/2026.
//

#include "Fila.h"

int fila [TAMANHO];
int posicao = 0;
int inicio = 0;
int fim=0;
bool vazia=true;

bool push (int valor) {
    if (inicio==0 && fim==TAMANHO||(fim+1==inicio)) { //Verifica se está cheia
        return false;
    }
    fila[fim]=valor;

    if (fim==TAMANHO) {
        fim=0;
    }else {
        fim++;
    }
    return true;
}

bool pop (int *valor) {
    if (inicio==fim) {
        return false;
    }
    *valor=fila[inicio];

    if (inicio == TAMANHO) {
        inicio = 0;
    } else {
        inicio++;
    }

    return true;
}