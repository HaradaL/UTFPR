#include <stdio.h>

/*Função para cálculo da média*/
float media (int n, float* v) {
  int i;
  float s = 0.0;
  for (i = 0; i < n; i++) {
    s += v[i];                  //acumula soma dos elementos
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

/*Função para incrementar vetor*/
void incrementa_vetor (int n, int* v) {
  int i;
  for (i = 0; i < n; i++) {
    v[i]++;
  }
}

int main(void) {
  float v[10];
  float med, var;
  int i;

  //Leitura de elementos do vetor
  for (i = 0; i < 10; i++) {
    scanf("%f", &v[i]);
  }

  med = media(10,v);
  var = variancia(10,v,med);

  printf("Media: %f\nVariância: %f\n", med, var);

  int a[ ] = {1, 3, 5};
  incrementa_vetor(3, a);
  printf("%d %d %d\n", a[0], a[1], a[2]);
  return 0;

}
