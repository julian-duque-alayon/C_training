#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void *foo(); //There is no difference of doing void* foo to void *foo

//Do I always need to create a prototype of my function? ANSWER: Since C99 we must allways sign the functions.

int main(void) {
    pthread_t thread1;
    pthread_create(&thread1, NULL, foo, NULL);
    pthread_join(thread1, NULL);
    return 0;
}

void *foo(){
    printf("Computation \n");
    return NULL;
}