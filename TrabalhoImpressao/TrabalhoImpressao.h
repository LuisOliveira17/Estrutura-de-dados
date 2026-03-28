//
// Created by gusta on 28/03/2026.
//

#ifndef TRABALHOIMPRESSAO_TRABALHOIMPRESSAO_H
#define TRABALHOIMPRESSAO_TRABALHOIMPRESSAO_H
#include <stdbool.h>
enum {
    TAMANHO = 10
};

typedef struct {
    int id;
    char nome_arquivo[50];
    int num_paginas;
} TrabalhoImpressao;

extern TrabalhoImpressao filaImpressao [TAMANHO]; //Variavel do tipo Struct
extern int posicao;
extern int fim;
extern int inicio;
extern int total; //Vai ficar mais facil de verificar se está cheia ou não;
extern TrabalhoImpressao t; //Variavel struct para acessar

void inicializa_fila();
bool esta_vazia();
bool esta_cheia();

bool adiciona_trabalho (TrabalhoImpressao trabalho);
bool processa_proximo_trabalho (TrabalhoImpressao *trabalho);
#endif //TRABALHOIMPRESSAO_TRABALHOIMPRESSAO_H