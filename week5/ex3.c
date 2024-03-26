#include <stdio.h>
#include <stdlib.h>

/* Kodun çıktısı nedir?*/

int fun2(int ** p){
int b=8;
printf("%d\n",**p);
}

int main(){
int a = 10,*p=&a;
fun2(&p);
printf("%d",*p);
}