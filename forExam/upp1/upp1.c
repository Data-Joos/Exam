#include <stdio.h>
#include <stdlib.h>

//Deklarerar funktionen
void myFunction();

//Att kunna deklarera och definiera en variabel och en funktion.

int main()
{
//Anropar funktion
    myFunction();

    return 0;
}

//Här skriver vi funktionen
void myFunction()
{
    int upp1 = 1;
    printf("Uppgift 1 är: %d \n\n", upp1);
    printf("Vi kommer klara provet!\n\n");
}