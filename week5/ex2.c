#include <stdio.h>
#include <stdlib.h>

/* Kodun çıktısı nedir?*/

void main(){
    char *a[10]={"hi","hello","how"}; // 10 boyutlu dizi 1 pointer 8 byte
    printf("%d\n",sizeof(a)); //10*8=80
}