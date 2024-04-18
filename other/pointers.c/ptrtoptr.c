#include <stdio.h>
#include <stdlib.h>
/*KOdun ciktisi nedir*/
int main(void){
    int sayi,deger1,deger2,deger3;
    int *ptr=NULL;
    int **ptrtoptr=NULL;

    sayi=5;
    ptr=&sayi;
    ptrtoptr=&ptr;
    deger1=sayi;
    deger2=*ptr;
    deger3=**ptrtoptr; // ptrtoptr=ptr => *ptr

    printf("deger1:%d\n",deger1); //5
    printf("deger2:%d\n",deger2); //5
    printf("deger3: %d\n",deger3); //5
    return 0;
}