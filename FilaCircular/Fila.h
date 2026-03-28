//
// Created by gusta on 07/03/2026.
//

#ifndef AULA0703_FILA_H
#define AULA0703_FILA_H
#include <stdbool.h>
enum {
    TAMANHO = 5
};

extern int fila [TAMANHO];
extern int posicao;
extern int fim;
extern int inicio;

bool push (int valor);
bool pop (int *valor);

#endif //AULA0703_FILA_H