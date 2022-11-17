#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){


char c[] = "I will fail this course\n";
int i;

//ToUpper
  while(c[i])
    {
      putchar(toupper(c[i]));
      i++;
    }
    //ToLower

char d[] = "OR MAYBE NOT\n";
int j;
   while(d[j])
    {
      putchar(tolower(d[j]));
      j++;
    }


  return 0;
}

