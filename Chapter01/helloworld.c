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
    int rc;
    size_t t;

    for (t = 0; t < NUM_THREADS; t++) {
        rc = pthread_create(&threads[t], NULL, printHello, (void*)t);
        if (rc) {
            printf("ERROR: Return code from pthread_create() is %d\n", rc);
            return 1;
        }
    }

    // Wait for all threads to complete
    for (t = 0; t < NUM_THREADS; t++) {
        pthread_join(threads[t], NULL);
    }

    return 0;
}