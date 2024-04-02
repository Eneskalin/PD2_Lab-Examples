#include <stdio.h>

/*► İki değişkenin değerini yer değiştiren bir fonksiyon yazınız. 
*/

void swap(int *a,int *b);

int main(){
    int a=8,b=10;
    printf("Before the swap a=%d,b=%d\n",a,b);
    swap(&a,&b);
     printf("Before the swap a=%d,b=%d",a,b);

    return 0;
}

void swap(int *a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}