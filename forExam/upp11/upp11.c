#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 90;
    int *px = &x;

    printf("Värdet som pekaren pekar på är %d\n",*px);
    printf("Adressen som pekaren pekar på %p\n",px);
    printf("Pekarens adress %p\n",&px);
    printf("Adressen till variabel X %p",&x);


    return 0;
}