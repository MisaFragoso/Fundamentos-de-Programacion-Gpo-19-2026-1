#include <stdio.h>

// Primo sencillo: probar divisores 2..√n
int es_primo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Fibonacci sencillo: generar hasta llegar o pasarse
int es_fibo(int n) {
    if (n == 0 || n == 1) return 1;
    int a = 0, b = 1;
    while (b < n) {
        int c = a + b;
        a = b;
        b = c;
    }
    return b == n;
}

int main(void) {
    int n;
    printf("Ingresa un entero positivo: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("%d %s primo.\n", n, es_primo(n) ? "es" : "no es");
    printf("%d %s Fibonacci.\n", n, es_fibo(n) ? "es" : "no es");
    return 0;
}
