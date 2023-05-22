#include <stdio.h>
#include <pthread.h>

#define NUM_THREADS 24

void* printHello(void* threadId) {
    size_t tid = (size_t)threadId;
    printf("Hello, World! This is thread %ld\n", tid);
    pthread_exit(NULL);
}

int main() {
    pthread_t threads[NUM_THREADS];
    int returnCode;

    for (size_t i = 0; i < NUM_THREADS; i++) {
        returnCode = pthread_create(&threads[i], NULL, printHello, (void*)i);
        if (returnCode) {
            printf("ERROR: Return code from pthread_create() is %d\n", returnCode);
            return 1;
        }
    }

    // Wait for all threads to complete
    for (size_t i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    return 0;
}
