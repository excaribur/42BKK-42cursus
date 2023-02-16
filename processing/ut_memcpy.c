#include <stdio.h>
#include <string.h>

int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"http://www.tutorialspoint.c");
   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, 2);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}