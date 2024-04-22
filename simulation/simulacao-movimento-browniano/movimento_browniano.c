#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define NUM_SIMULACOES 1000 // Número de simulações
#define PASSOS 1000 // Número de passos para cada simulação
#define DT 0.1 // Tamanho do passo de tempo

int main() {
    srand(time(NULL));

    // Variáveis para armazenar a posição da partícula
    double x, y;
    
    // Abrir arquivo para escrita
    FILE *fp;
    fp = fopen("movimento_browniano.csv", "w");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Loop sobre cada simulação
    for (int i = 0; i < NUM_SIMULACOES; i++) {
        // Loop sobre cada passo de tempo
        for (int j = 0; j < PASSOS; j++) {
            // Gerar movimento aleatório em x e y
            double dx = sqrt(DT) * (2.0 * ((double)rand() / RAND_MAX) - 1.0);
            double dy = sqrt(DT) * (2.0 * ((double)rand() / RAND_MAX) - 1.0);

            // Atualizar a posição da partícula
            x += dx;
            y += dy;

            // Escrever a posição da partícula no arquivo CSV
            fprintf(fp, "%lf,%lf\n", x, y);
        }
    }

    // Fechar o arquivo
    fclose(fp);

    printf("Dados gravados com sucesso no arquivo 'movimento_browniano.csv'.\n");

    return 0;
}
