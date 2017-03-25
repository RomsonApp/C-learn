#include <stdio.h>

int main()
{
    int N;

    printf("%s\n", "Insert array size:");
    scanf("%d", &N);

    int array[N];

    printf("Insert %i elements\n", N);

    for(int i = 0; i < N; i++) 
    {
        scanf("%d", &array[i]);
    }

    printf("Not sorted array:\n");

    for(int i = 0; i < N; i++) 
    {
        printf("%i ", array[i]);
    }

    printf("\n");

    printf("Sorting....\n");

    int noSwap = 0;
    for(int i = N; i > 0; i--)
    {
        noSwap = 1;
        for(int j = 0; j < i - 1; j++) 
        {
            if(array[j] > array[j + 1])
            {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                noSwap = 0;
            }
        }

        if(noSwap == 1)
        {
            break;
        }
    }

    printf("Sorted array:\n");


    for(int i = 0; i < N; i++)
    {
        printf("%i ", array[i]);
    }

    printf("\n");




}