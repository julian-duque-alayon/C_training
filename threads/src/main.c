#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void *foo(); 

//Do I always need to create a prototype of my function?
//difference between void* foo and void *foo ?

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