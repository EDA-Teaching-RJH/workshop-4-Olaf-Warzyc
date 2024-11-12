#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    
    int *ptr = (int*)malloc(5 * sizeof(int));

    for(int i = 0; i < 5; i++)
    {
        *(ptr+i) = i + 1;
        printf("%d ",*(ptr+i));
    }
    printf("\n");


    int *ptr2 = (int*)calloc(5, sizeof(int));
    
    for(int i = 0; i < 5; i++)
    {
        *(ptr2+i) = (i+1)*10;
        printf("%d ",*(ptr2+i));
    }
    printf("\n");


    ptr = (int*)realloc(ptr, 10 * sizeof(int));
    
    for(int i = 0; i < 10; i++)
    {
        printf("%p \n",(void *)(ptr+i));
    }
    printf("\n");


    for(int i = 5; i < 10; i++)
    {
        *(ptr+i) = i + 1;
    }
    
    for(int i = 0; i < 10; i++)
    {
        printf("%d ",*(ptr + i));
    }
    printf("\n");

    free(ptr);
    ptr = NULL;

    free(ptr2);
    ptr2 = NULL;


    return 0;
}