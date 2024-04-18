#include <stdio.h>

/*Kodun ciktisi nedir?*/

int main(){
   int *ptr, a=10; // &a=111
   ptr = &a; //ptr=111
   *ptr +=1; //11
   printf("%d,%d\n",*ptr,a); //11 11
   }
   