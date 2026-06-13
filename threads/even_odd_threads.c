/*
 * Problem: Read an integer n from the user and create two threads:
 *          - Thread 1: writes all even numbers from 0 to n into even.txt
 *          - Thread 2: writes all odd numbers from 0 to n into odd.txt
 * Input:   An integer n
 * Output:  even.txt and odd.txt files with respective numbers
 */

#include <stdio.h>
#include <pthread.h>

void * evenWorker (void * arg)
{
    int n = *(int*)arg;
    
    FILE * stream = fopen("even.txt", "w");
    
    if (stream == NULL)
    {
        perror("fopen");
        return NULL;
    }

    for (int i = 0; i <= n; ++i) {
        if (!(i % 2)) {
            fprintf(stream, "%d\n", i);
        }
    }

    fclose(stream);

    return NULL;
}

void * oddWorker (void * arg)
{
    int n = *(int *)arg;

    FILE * stream = fopen("odd.txt", "w");

    if (stream == NULL) {
        perror("fopen");
        return NULL;
    }

    for (int i = 0; i <= n; ++i) {
        if (i % 2) {
            fprintf(stream, "%d\n", i);
        }
    }

    fclose(stream);

    return NULL;
}

int main()
{
    int n = 0;
    
    printf("Write a positive number: ");
    scanf("%i", &n);
    
    if (n <= 0)
    {
        perror("Write a positive number");
        return 1;
    }
    
    pthread_t evenThreadT, oddThreadT;
    
    if (pthread_create(&evenThreadT, NULL, evenWorker, &n))
    {
        perror("pthread_create");
        return 1;
    }
    
    if (pthread_create(&oddThreadT, NULL, oddWorker, &n))
    {
        perror("pthread_create");
        return 1;
    }
    
    if (pthread_join(evenThreadT, NULL))
    {
        perror("pthread_join");
        return 1;
    }
    
    if (pthread_join(oddThreadT, NULL))
    {
        perror("pthread_join");
        return 1;
    }
    
    return 0;
}