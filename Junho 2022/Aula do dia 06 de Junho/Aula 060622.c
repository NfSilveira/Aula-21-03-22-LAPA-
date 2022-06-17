#include <stdio.h>
#include <stdlib.h>

#define QTDE_NOMES 3
#define TAM_NOMES 20
#define NOME_ARQUIVO "dados_lapa_1.txt"

void grava_arquivo();
void ler_arquivo();

int main(void) {
  printf("Gravando um arquivo...\n\n");
  grava_arquivo();

  printf("Lendo o arquivo...\n\n");
  ler_arquivo();

  return 0;
}

void grava_arquivo() {
  FILE *meuArquivo;
  char nomes[QTDE_NOMES][TAM_NOMES];
  int i;

  /** Obtem os dados a serem salvos **/
  for (i = 0; i < QTDE_NOMES; i++) {
    printf("Nome: ");
    fgets(nomes[i], TAM_NOMES, stdin);
  }

  /*Abre o arquivo*/
  meuArquivo = fopen(NOME_ARQUIVO, "a");

  /* Verifica se a abertura foi feita com sucesso*/
  if (meuArquivo == NULL) {
    printf("Impossivel abrir o arquivo");
    exit(1);
  }

  /* Escreve as linhas no arquivo */
  for (i = 0; i < QTDE_NOMES; i++) {
    fputs(nomes[i], meuArquivo);
  }

  /* Fecha o arquivo aberto */
  fclose(meuArquivo);
}

void ler_arquivo() {
  FILE *meuArquivo;
  char nome[TAM_NOMES];

  /*Abre o arquivo*/
  meuArquivo = fopen(NOME_ARQUIVO, "r");

  /* Verifica se a abertura foi feita com sucesso*/
  if (meuArquivo == NULL) {
    printf("Impossivel abrir o arquivo");
    exit(1);
  }

  /* Lê os caracteres contidos no arquivo */
  while (fgets(nome, TAM_NOMES, meuArquivo) != NULL) {
    printf("Nome: %s", nome);
  }

  /* Fecha o arquivo aberto */
  fclose(meuArquivo);
}
