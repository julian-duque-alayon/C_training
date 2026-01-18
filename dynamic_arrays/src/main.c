#include <stdio.h>
#include <stdlib.h>

int main() {
  char buffer[10]; // Usamos 10 porque es un tamaño razonable para capturar un
                   // número corto.
  int n = 0;
  printf("Cuantos elementos quieres: ");
  fgets(buffer, 10, stdin);
  n = atoi(buffer); // Convertimos el texto del buffer a un número entero

  // malloc reserva memoria dinámica.
  // n * sizeof(int) calcula cuántos bytes necesitamos (ej: 5 números * 4 bytes
  // cada uno = 20 bytes). (int *) convierte (cast) el bloque de memoria
  // genérico que da malloc a un puntero de enteros. Usamos el '*' en 'n *
  // sizeof' para multiplicar el número de elementos por su tamaño.
  int *array = (int *)malloc(n * sizeof(int));

  if (array == NULL) {
    return 1;
  }

  for (int i = 0; i < n; i++) {
    array[i] = i * 2;
    printf("Elemento %d: %d\n", i, array[i]);
  }

  free(array);
  return 0;
}