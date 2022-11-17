#include <stdio.h>
#include <stdlib.h>

int compare(int a, int b);

int main()
{

    int tal1;
    int tal2;

    printf("Ange ett första tal mellan 0-20: ");
    scanf("%d",&tal1);
    printf("Ange ett andra tal mellan 0-20: ");
    scanf("%d",&tal2);

    int result = compare(tal1,tal2);

    printf("Resultat är %d\n",result);


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