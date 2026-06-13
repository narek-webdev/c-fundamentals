/*
 * Problem: Read an integer n from the user, create a thread that
 *          receives n as an argument, and prints all even numbers
 *          from 0 to n.
 * Input:   An integer n
 * Output:  All even numbers from 0 to n, printed by the thread
 */

#include <stdio.h>
#include <pthread.h>

void * worker (void * arg)
{
    int * n = (int *)arg;
    
    for (int i = 0; i <= *n; ++i)
    {
        if (!(i % 2))
        {
            printf("%i\n", i);
        }
    }
    
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
    
    pthread_t tid;
    
    if (pthread_create(&tid, NULL, worker, &n))
    {
        perror("pthread_create");
        return 1;
    }
    
    if (pthread_join(tid, NULL))
    {
        perror("pthread_join");
        return 1;
    }
    
    return 0;
}