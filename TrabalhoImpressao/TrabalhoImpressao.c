//
// Created by gusta on 28/03/2026.
//
#include "TrabalhoImpressao.h"

TrabalhoImpressao filaImpressao [TAMANHO]; //Variavel do tipo Struct. Fila
TrabalhoImpressao trabalho; //Variavel para acessar e criar structs
int posicao;
int fim;
int inicio;
int total=0;

void inicializa_fila() {
    inicio = 0;
    fim = 0;
    posicao=0;
    total=0;
}

bool esta_vazia() {
    if (total==0) {
        return true;
    }else {
        return false;
    }
}

bool esta_cheia() {
    if (total==TAMANHO) {
        return true;
    }else {
        return false;
    }
}

bool adiciona_trabalho (TrabalhoImpressao trabalho) {
    if (esta_cheia()) {
        return false;
    }
    filaImpressao[fim]=trabalho;

    if (fim==TAMANHO) {
        fim=0;
    }else {
        fim++;
    }
    total++;
    return true;
}

bool processa_proximo_trabalho(TrabalhoImpressao *trabalho) {
    if (esta_vazia()) {
        return false;
    }
    *trabalho=filaImpressao[inicio];

    if (inicio == TAMANHO) {
        inicio = 0;
    } else {
        inicio++;

    }
    total--;
    return true;
}
