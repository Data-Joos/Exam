#include <stdio.h>
#include <stdlib.h>

int compare(int a, int b);

int main()
{
    printf("B är störst %d\n",compare(10,20));
    printf("A är störst %d\n",compare(20,10));
    printf("Lika stora %d\n",compare(20,20));


    return 0;
}

int compare(int a,int b)
{
    if(a>b)
        return a;
    else if(a<b)
        return b;
    else
        return a,b;
}