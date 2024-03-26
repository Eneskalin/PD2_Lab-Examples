#include <stdio.h>

int main(){
    int *ptr;
    int num=5;
    ptr=&num;
    printf(" Numaranin adresi :%d\n",&num);
    printf("Pointerin gosterdigi adres: %d;\n\n",ptr);

printf("Numaranin degeri: %d\n",num);
printf("Pointerin gosterdigi deger: %d", *ptr);
printf("\n\n\n\n\n");

int array[5]={1,2,3,4,5};
int *ptr2;
ptr2= &array[0];
printf("Dizinin ilk degerinin  adresi :%d\n",&array[0]);
printf("Pointerin ilk degreinin adresi :%d\n",ptr2);
printf("Dizinin ilk elemani : %d\n",array[0]);
printf("Pointerin ilk degeri : %d",*ptr2);






    return 0;
}

