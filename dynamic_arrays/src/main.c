#include <stdlib.h>
#include <stdio.h>

int main(){
    char buffer[10]; //porque usas 10? porque si? mi array(buffer) tendria 10 posiciones inicialmente)
    int n = 0;
    printf("Breakpoint\n");
    printf("Cuantos elementos quieres: ");
    fgets(buffer, 10, stdin);

    int *array = (int*) malloc(n * sizeof(int)); //esta parte no la entendi muy bien, porque usa punteros? qu significa el (int*) y dentro del malloc vuelven a usar el *, eso es un puntero o una multiplicacion?

    if (array == NULL){
        return 1;
    }

    for (int i = 0; i<n; i++){
        array[i] = i * 2;
        printf("Elemento %d: %d\n", i, array[i]);
    }

    free(array);
    return 0;
}