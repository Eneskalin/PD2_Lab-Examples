#include <stdio.h>

/*Kodun ciktisi nedir?*/

int main(){
    int a,b,c;
    char *p=0;    // NULL &0
    int *q=0;     // NULL &0
    double *s=0;  // NULL &0
    a=(p+3);      // &0 char 1 byte kaplar adres 3 byte kayar 3  
    b=(q+2);      // &0 int 4 byte kaplar adres 4*2 byte kayar 8 
    c=(s+1);      // &0 double 8 byte kaplar adres 8 byte kayar 8
    printf("%d %d %d",a,b,c);
}