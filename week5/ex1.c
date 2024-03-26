#include <stdio.h>
#include <stdlib.h>

/* Kodun çıktısı nedir?
  HATALI

*/

void printVal(int *p)
{
printf("%d\n", *p);
}

int main(){
  int i=10, *p=&i; 
  printVal(++p);
}
