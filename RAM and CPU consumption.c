#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>
#include <time.h>
void *cpuHog(void *arg)
{
    while (1)
    {
        char randString[100001];
        for (int i = 0; i < 100000; i++)
        {
            randString[i] = 'a' + rand() % 26;
        }
        randString[100000] = '\0';
        qsort(randString, 100000, sizeof(char), (int (*)(const void *, const void *))strcmp);
    }
    return NULL;
}
void *memoryHog(void *arg)
{
    char **memoryList = malloc(100 * sizeof(char *));
    int i = 0;
    while (1)
    {
        memoryList[i] = malloc(10 * 1024 * 1024);
        i++;
        if (i >= 100)
        {
            i = 0;
        }
    }
    return NULL;
}
int main()
{
    srand(time(NULL));
    pthread_t cpuThreads[4];
    pthread_t memoryThreads[2];
    for (int i = 0; i < 4; i++)
    {
        pthread_create(&cpuThreads[i], NULL, cpuHog, NULL);
    }
    for (int i = 0; i < 2; i++)
    {
        pthread_create(&memoryThreads[i], NULL, memoryHog, NULL);
    }
    for (int i = 0; i < 4; i++)
    {
        pthread_join(cpuThreads[i], NULL);
    }
    for (int i = 0; i < 2; i++)
    {
        pthread_join(memoryThreads[i], NULL);
    }
    return 0;
}
