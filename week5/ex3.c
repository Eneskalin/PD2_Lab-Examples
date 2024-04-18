#include <stdio.h>
#include <stdlib.h>

/* Kodun çıktısı nedir?*/

int fun2(int ** p){ //222
int b=8;
printf("%d\n",**p); //10
}

int main(){
int a = 10,*p=&a; // *a=111 p=111 &p=222
fun2(&p); 
printf("%d",*p); //10
}