#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *pt = arr;

    printf("%d\n",*pt);

    printf("%d\n",*(pt+2));


    return 0;
}