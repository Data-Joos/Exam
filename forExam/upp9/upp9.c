#include <stdio.h>
#include <stdlib.h>

struct date
{
    int day;
    int month;
    int year;
};


int main()
{
    struct date today, *datepointer;
    datepointer = &today;

    datepointer ->day = 4;
    datepointer ->month = 11;
    datepointer ->year = 2022;

    printf("Dagens datum är %d/%d/%d\n",datepointer->day,datepointer->month,datepointer->year);

    return 0;
}