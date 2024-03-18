#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void alteraSegundaMetade(int tamPalEscolhida, char palavraAtual[], char segundaMetade[], int limPrimeiraMetade, char novaPalavra[]){

  int i, j = 0, tamPalAtual;

  tamPalAtual = strlen(palavraAtual);
  for (i = 0; i < tamPalEscolhida; i++){
    if (i >= limPrimeiraMetade){
      novaPalavra[i] = segundaMetade[j];
      j++;
    }
  }

}

void alteraPrimeiraMetade(int tamPalEscolhida, char palavraAtual[], char primeiraMetade[], int limPrimeiraMetade, char novaPalavra[]){

  int i, tamPalAtual;

  tamPalAtual = strlen(palavraAtual);
  for (i = 0; i < tamPalEscolhida; i++){
    if (i < limPrimeiraMetade){
      novaPalavra[i] = primeiraMetade[i];
    }
  }

}

void diminuiPalavra(int tamPalEscolhida, char palavraAtual[], char novaPalavra[]){
  
  int i;
  
  for (i = 0; i < tamPalEscolhida; i++){
    novaPalavra[i] = palavraAtual[i];
  }

}

void aumentaPalavra(int tamPalEscolhida, char palavraAtual[], char novaPalavra[], int tamPalAtual){

int i;

for (i = 0; i < tamPalEscolhida; i++){
  if (i < tamPalAtual) {
    novaPalavra[i] = palavraAtual[i];
  }
  else {
    novaPalavra[i] = palavraAtual[tamPalAtual-1];
  }
}

}

void julgaTamPalavra(int tamPalEscolhida, char palavraAtual[], char novaPalavra[]){

  int i, tamPalAtual;

  tamPalAtual = strlen(palavraAtual);
  if (tamPalAtual < tamPalEscolhida){       // aumentar palavra
    aumentaPalavra(tamPalEscolhida, palavraAtual, novaPalavra, tamPalAtual);
  }
  else if (tamPalAtual >= tamPalEscolhida){  // diminuir palavara
    diminuiPalavra(tamPalEscolhida, palavraAtual, novaPalavra);
  }

}

int main(){

  int tamPalEscolhida, i, j = 0, limPrimeiraMetade;
  char palavraEscolhida[40], novaPalavra[40], primeiraMetade[40], segundaMetade[40];

  for (i = 0; i < 40; i++){
    palavraEscolhida[i] = '\0';
    novaPalavra[i] = '\0';
    primeiraMetade[i] = '\0';
    segundaMetade[i] = '\0';
  }

  printf("\nEscolha uma palavra: \n");
  scanf("%s", palavraEscolhida);

  tamPalEscolhida = strlen(palavraEscolhida);

  limPrimeiraMetade = tamPalEscolhida/2;  // define onde dividir a palavra
  for (i = 0; i < tamPalEscolhida; i++){
    if (i < limPrimeiraMetade){
      primeiraMetade[i] = palavraEscolhida[i];
    }
    else {
      primeiraMetade[i] = '\0';
      segundaMetade[j] = palavraEscolhida[i];
      j++;
    }
  }

  printf("\nGenio: voce tem 3 desejos");
  printf("\nEu: faca todas as palavras terem %d letras", tamPalEscolhida);

  // Genio: desejo concedido

  julgaTamPalavra(tamPalEscolhida, "Genio", novaPalavra);
  printf("\n%s: ", novaPalavra);
  julgaTamPalavra(tamPalEscolhida, "desejo", novaPalavra);
  printf("%s ", novaPalavra);
  julgaTamPalavra(tamPalEscolhida, "concedido", novaPalavra);
  printf("%s ", novaPalavra);

  // Eu: faça todas as palavras começarem com [1°metade da palavra escolhida]

  julgaTamPalavra(tamPalEscolhida, "Eu", novaPalavra);
  printf("\n%s: ", novaPalavra);
  julgaTamPalavra(tamPalEscolhida, "faca", novaPalavra);
  printf("%s ", novaPalavra);
  julgaTamPalavra(tamPalEscolhida, "todas", novaPalavra);
  printf("%s ", novaPalavra);
  julgaTamPalavra(tamPalEscolhida, "as", novaPalavra);
  printf("%s ", novaPalavra);
  julgaTamPalavra(tamPalEscolhida, "palavras", novaPalavra);
  printf("%s ", novaPalavra);
  julgaTamPalavra(tamPalEscolhida, "comecarem", novaPalavra);
  printf("%s ", novaPalavra);
  julgaTamPalavra(tamPalEscolhida, "com", novaPalavra);
  printf("%s ", novaPalavra);
  printf("%s ", primeiraMetade);

  // Genio: desejo concedido
  
  julgaTamPalavra(tamPalEscolhida, "Genio", novaPalavra);
  alteraPrimeiraMetade(tamPalEscolhida, novaPalavra, primeiraMetade, limPrimeiraMetade, novaPalavra);
  printf("\n%s: ", novaPalavra);
  julgaTamPalavra(tamPalEscolhida, "desejo", novaPalavra);
  alteraPrimeiraMetade(tamPalEscolhida, novaPalavra, primeiraMetade, limPrimeiraMetade, novaPalavra);
  printf("%s ", novaPalavra);
  julgaTamPalavra(tamPalEscolhida, "concedido", novaPalavra);
  alteraPrimeiraMetade(tamPalEscolhida, novaPalavra, primeiraMetade, limPrimeiraMetade, novaPalavra);
  printf("%s ", novaPalavra);
  
  // Eu: faça todas as palavras terminarem com [2°metade da palavra escolhida]

  julgaTamPalavra(tamPalEscolhida, "Eu", novaPalavra);
  alteraPrimeiraMetade(tamPalEscolhida, novaPalavra, primeiraMetade, limPrimeiraMetade, novaPalavra);
  printf("\n%s: ", novaPalavra);
  julgaTamPalavra(tamPalEscolhida, "faca", novaPalavra);
  alteraPrimeiraMetade(tamPalEscolhida, novaPalavra, primeiraMetade, limPrimeiraMetade, novaPalavra);
  printf("%s ", novaPalavra);
  julgaTamPalavra(tamPalEscolhida, "todas", novaPalavra);
  alteraPrimeiraMetade(tamPalEscolhida, novaPalavra, primeiraMetade, limPrimeiraMetade, novaPalavra);
  printf("%s ", novaPalavra);
  julgaTamPalavra(tamPalEscolhida, "as", novaPalavra);
  alteraPrimeiraMetade(tamPalEscolhida, novaPalavra, primeiraMetade, limPrimeiraMetade, novaPalavra);
  printf("%s ", novaPalavra);
  julgaTamPalavra(tamPalEscolhida, "palavras", novaPalavra);
  alteraPrimeiraMetade(tamPalEscolhida, novaPalavra, primeiraMetade, limPrimeiraMetade, novaPalavra);
  printf("%s ", novaPalavra);
  julgaTamPalavra(tamPalEscolhida, "terminarem", novaPalavra);
  alteraPrimeiraMetade(tamPalEscolhida, novaPalavra, primeiraMetade, limPrimeiraMetade, novaPalavra);
  printf("%s ", novaPalavra);
  julgaTamPalavra(tamPalEscolhida, "com", novaPalavra);
  alteraPrimeiraMetade(tamPalEscolhida, novaPalavra, primeiraMetade, limPrimeiraMetade, novaPalavra);
  printf("%s ", novaPalavra);
  printf("%s ", segundaMetade);
  
  // [palavraEscolhida]: [palavraEscolhida]

  julgaTamPalavra(tamPalEscolhida, "tantofaz:", novaPalavra);
  alteraPrimeiraMetade(tamPalEscolhida, novaPalavra, primeiraMetade, limPrimeiraMetade, novaPalavra);
  alteraSegundaMetade(tamPalEscolhida, novaPalavra, segundaMetade, limPrimeiraMetade, novaPalavra);
  printf("\n%s: ", novaPalavra);
  julgaTamPalavra(tamPalEscolhida, "tantofaz", novaPalavra);
  alteraPrimeiraMetade(tamPalEscolhida, novaPalavra, primeiraMetade, limPrimeiraMetade, novaPalavra);
  alteraSegundaMetade(tamPalEscolhida, novaPalavra, segundaMetade, limPrimeiraMetade, novaPalavra);
  printf("%s ", novaPalavra);

  // [palavraEscolhida]: [palavraEscolhida]

  julgaTamPalavra(tamPalEscolhida, "tantofaz", novaPalavra);
  alteraPrimeiraMetade(tamPalEscolhida, novaPalavra, primeiraMetade, limPrimeiraMetade, novaPalavra);
  alteraSegundaMetade(tamPalEscolhida, novaPalavra, segundaMetade, limPrimeiraMetade, novaPalavra);
  printf("\n%s: ", novaPalavra);
  julgaTamPalavra(tamPalEscolhida, "tantofaz", novaPalavra);
  alteraPrimeiraMetade(tamPalEscolhida, novaPalavra, primeiraMetade, limPrimeiraMetade, novaPalavra);
  alteraSegundaMetade(tamPalEscolhida, novaPalavra, segundaMetade, limPrimeiraMetade, novaPalavra);
  printf("%s \n\n", novaPalavra);
  
  system("pause");
  return 0;

}