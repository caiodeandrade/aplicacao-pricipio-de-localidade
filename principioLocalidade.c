#include <stdio.h>
#include <time.h>

int main() {
    int n;
    printf("Digite o tamanho das matrizes (quadradas): ");
    scanf("%d", &n);

    int mat1[n][n], mat2[n][n], result[n][n];
    int i, j, k;
    clock_t t_inicio, t_fim;
    double tempo_gasto;

    // Preenchendo a primeira matriz com o número 1
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            mat1[i][j] = 1;
        }
    }

    // Preenchendo a segunda matriz com o número 1
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            mat2[i][j] = 1;
        }
    }

    // Iniciando a contagem do tempo
    t_inicio = clock();

    // Calculando o produto das matrizes
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            result[i][j] = 0;
            for(k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Finalizando a contagem do tempo
    t_fim = clock();
    tempo_gasto = (double) (t_fim - t_inicio) / CLOCKS_PER_SEC;
    
    printf("Tempo de execução do metodo ijk: %.6f segundos\n", tempo_gasto);


        // Iniciando a contagem do tempo
    t_inicio = clock();

    // Calculando o produto das matrizes
    for(i = 0; i < n; i++) {
        for(k = 0; k < n; k++) {
            result[i][j] = 0;
            for(j = 0; j < n; j++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Finalizando a contagem do tempo
    t_fim = clock();
    tempo_gasto = (double) (t_fim - t_inicio) / CLOCKS_PER_SEC;
 
    printf("Tempo de execução do metodo ikj: %.6f segundos\n", tempo_gasto);

    return 0;
}