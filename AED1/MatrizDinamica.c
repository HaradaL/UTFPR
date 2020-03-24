#include <stdio.h>
#include <stdlib.h>

int main(void) {

  struct matriz {
    int lin;
    int col;
    float** v;
  };
  typedef struct matriz Matriz;

  Matriz* matriz;
  matriz = cria(2,2);

  imprime(Matriz matriz);

  Matriz* cria (int m, int n) {
    int i;
    Matriz mat = (Matriz*)malloc(sizeof(Matriz));
    mat->lin = m;
    mat->col = n;
    mat->v = (float**)malloc(m * sizeof(float*));

    for (i = 0; i < m; i++) {
      mat->v[i] = (float*)malloc(n * sizeof(float));
    }
    return mat;
  }

  void libera (Matriz* mat) {
    int i;
    for (i = 0; i < mat->lin; i++) {
      free(mat->v[i]);
      free(mat->v);
      free(mat);
    }
  }

  float acessa (Matriz* mat, int i, int j) {
    if (i < 0 || i >= mat->lin || j < 0 || j>= mat-> col) {
      printf("Acesso inválido!\n");
      exit(1);
    }
    return mat->[i][j];
  }

  void atribui (Matriz* mat, int i, int j, float v) {
    if (i < 0 || i >= mat->lin || j < 0 || j >= mat->col) {
      printf("Atribuição inválida!\n");
    }
    mat->v[i][j] = v;
  }

  void imprime(Matriz* mat) {
    int i, j;
    printf("Matriz\nLinhas: %d\nColunas: %d\n", mat->lin, mat->col);
    for (i = 0; i < mat->lin; i++) {
      for (j = 0; j < mat->col; j++) {
        printf("%\t", mat->v[i][j]);
      }
      printf("\n");
    }
    printf("\n\n\n");
  }
  /*Função que devolve a transposta da Matriz informada
  * O que eu quero          (saída):
  * O que eu preciso/tenho  (entrada):
  * Como fazer              (processamento):
  */

  // Matriz* transp = transposta()
  //
  // Matriz* transposta(Matriz* mat) {
  //   int i;
  //   for (i = 0; i < mat->lin; i++) {
  //
  //   }
  // }


}
