#include <stdio.h>

// Kodun ciktisi nedir?

int main(){
    int *ptr;
    int sayi=15; // &sayi:00015
    ptr=&sayi; // ptr=00015
    ptr=&ptr; // ptr=00015
    printf("Isaretci: %p\n",ptr); // 00015
    printf("Deger:%p",*ptr);      // 00015
    return 0;
}