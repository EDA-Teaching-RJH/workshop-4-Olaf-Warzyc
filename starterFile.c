#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 42;
    int *ptr = &num;
    printf("%d \n",num);
    printf("%p \n",(void *)&num);
    printf("%p \n",(void *)ptr);


    *ptr = 100;
    printf("%d \n",num);

    int arr[5]= {10, 20, 30, 40, 50};
    int *arrprt = arr;

    printf("original array \n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", *(arrprt + i));
    }
    printf("\nmodified array \n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", (*(arrprt + i)*2));
    }
    printf("\n");

    return 0;
}
