#include <stdio.h>
#include <stdint.h>
#include <stdlib.h> //for malloc
#include <stddef.h> //for size_max only for C99+

void* safe_malloc(size_t num, size_t size){
    void* ptr = NULL;
    //1. Pre-Condition: Check for Integer Overflow
    if((size != 0U) && (num > (SIZE_MAX / size))){
        fprintf(stderr, "FATAL: Memory Overflow Blocked\n");
        exit(EXIT_FAILURE);
    }

    //2. Request Allocation
    ptr = malloc(num * size);

    //3. Post-condition: NULL pointer check
    if(ptr == NULL){
        fprintf(stderr, "FATAL: Heap Exhausted\n");
        exit(EXIT_FAILURE);
    }

    return ptr;
}

//lifetime Demo: Function returning Heap memory:
int32_t* init_sensor_buffer(size_t count){
    int32_t* buffer = (int32_t*)safe_malloc(count, sizeof(int32_t));

    for (size_t i = 0U; i < count; i++){
        buffer[i] = 0; // Deterministic initialization
    }
    return buffer; // Remains valid after function scope
}

int main(void) {
    // Scenario A: Optimal usage
    int32_t* sensor_data = init_sensor_buffer(10U);
    printf("Buffer Address: %p\n", (void*)sensor_data);

    // Scenario B: Intentional Failure (Overflow)
    //void* fail_ptr = safe_malloc(SIZE_MAX, 2U);

    // Cleanup: Avoid Memory Leaks and Dangling Pointers
    free(sensor_data);
    //free(fail_ptr);
    sensor_data = NULL;
    //fail_ptr = NULL;

    return 0;
}


