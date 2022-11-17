#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    //for loop
    for(i=1; i<=10; i++)
    {
        printf("%d ",i);
    }

    char name[] = "Josefina";
    int j;

    //While loop
    while(name[j] != '\0')
    {
        printf("%c ",name[j]);
        j++;
    }

    //do-while loop
    int k = 0;
    do
    {
      printf("%d\n",k);
      k--;
    } while (k>=-10);

    return 0;
}