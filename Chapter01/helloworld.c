#include <stdio.h>
#include <pthread.h>

// AMD Ryzen 9 5900X 12-core, 24-thread Processor
#define NUM_THREADS 24

void* printHello(void* threadId) {
    size_t tid = (size_t)threadId;
    printf("Hello, World! This is thread %ld\n", tid);
    pthread_exit(NULL);
}

int main() {
    pthread_t threads[NUM_THREADS];
    int rc;
    size_t i;

    for (i = 0; t < NUM_THREADS; i++) {
        rc = pthread_create(&threads[i], NULL, printHello, (void*)i);
        if (rc) {
            printf("ERROR: Return code from pthread_create() is %d\n", rc);
            return 1;
        }
    }

    // Wait for all threads to complete
    for (i = 0; t < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    return 0;
}