#include <stdio.h>

int main(void) {
    unsigned int n;
    printf("¿Cuántos números de Fibonacci deseas? ");
    if (scanf("%u", &n) != 1 || n == 0) {
        printf("Entrada inválida.\n");
        return 1;
    }

    // Empezamos con 0, 1
    unsigned long long a = 0, b = 1;

    printf("Fibonacci (%u): ", n);
    // Imprime el primero
    printf("%llu", a);

    for (unsigned int i = 2; i <= n; i++) {
        unsigned long long c = a + b;

        // (Opcional) corte por overflow sin limits.h:
        // si hubo desbordamiento en unsigned, c será menor que b
        if (c < b) {
            printf(", ... (detenido por overflow)\n");
            return 0;
        }

        printf(", %llu", b);
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}
