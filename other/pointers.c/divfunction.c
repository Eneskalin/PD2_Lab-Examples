#include <stdio.h>

/*Klavyeden girilenn sayilari birbirine bolen bolum ve kalani donduren fonksiyon yaziniz*/
int divfunc(int a,int b,int *c);

int main(){
    int a,b,*c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    int result = divfunc(a,b,&c);
    printf("Divisor: %d\n",result);
    printf("Remainder: %d",c);
    return 0;
}

int divfunc(int a,int b,int *c){
    int result;
    result=a/b;
    *c=a%b;
    return result;
}