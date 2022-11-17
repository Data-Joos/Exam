#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Deklarera ålder och namn
    int age;
    char name[10];

    //Printa ut fråga

    printf("Hur gammal är du? ");

    /*Hämta svar från user.
    &-tecknet används för alla datatyper förutom char/array */
    scanf("%d",&age);

    printf("Vad heter du? ");

    scanf("%s",name);
    
    //if-sats för att skriva ut om man är ung,medel eller för gammal.
    if(age>=30 && age<=60)
        printf("Hej %s, du är %d år medelgammal.\n",name,age); 

    else if(age<30)
        printf("Hej %s, du är %d år ung.\n",name,age);
    else
        printf("Hej %s, du är för gammal.\n",name,age);


    return 0;
}