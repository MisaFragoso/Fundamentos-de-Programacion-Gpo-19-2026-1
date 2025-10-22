#include <stdio.h>                  

int main() {                        // Función principal del programa
    int segundos, horas, minutos;   // Declara variables enteras para segundos, horas y minutos
    int resto;                      // Variable auxiliar para ir guardando los restos de divisiones Modulo

    printf("Ingrese una cantidad de segundos: "); 
    scanf("%d", &segundos);         // Lee desde teclado la cantidad de segundos y la guarda en 'segundos'

    horas = segundos / 3600;        // Calcula cuántas horas completas hay en 'segundos' (1 h = 3600 s)
    resto = segundos % 3600;        // Guarda el resto de segundos tras extraer las horas

    minutos = resto / 60;           // Calcula cuántos minutos completos hay en el resto (1 min = 60 s)
    resto = resto % 60;             // Actualiza 'resto' a los segundos finales que no completan un minuto

    // Imprime el resultado: horas, minutos y los segundos restantes
    printf("%d segundos equivalen a: %d horas, %d minutos y %d segundos.\n",
           segundos, horas, minutos, resto);

    return 0;                       // Indica que el programa terminó correctamente
}
