#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, n;
  float* v;
  float med, var;

  /*Leitura de quantidade de valores*/
  scanf("%d", &n);

  /*Alocação Dinâmica*/
  v = (float*) malloc(n * sizeof(float));
  if (v == NULL) {
    printf("Memória insuficiente.\n");
    return 1;
  }

  /*Leitura dos valores*/
  for (i = 0; i < n; i++) {
    scanf("%f", &v[i]);
  }
  med = media(n,v);
  var = variancia(n,v,med);
  printf("Media: %f\n Variância: %f\n", med, var);

  /*Libera memória*/
  free(v);
  return 0;

  /*Função para cálculo da média*/
  float media (int n, float* v) {
    int i;
    float s = 0.0;
    for (i = 0; i < n; i++) {
      s += v[i];              //acumula soma dos elementos
    }
    return s/n;
  }

  /*Função para cálculo da variância*/
  float variancia (int n, float* v, float m) {
    int i;
    float s = 0.0;
    for (i = 0; i < n, i++) {
      s += (v[i] - m) * (v[i] - m);     //acumula quadrado da diferença
    }
    return s/n;
  }
}
