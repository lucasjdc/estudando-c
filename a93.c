#include <stdio.h>

int main() {
    volatile int contador =0;
    while (contador < 10) {
        printf("Contador: %d\n", contador);
        contador++;
    }

    return 0;
}
