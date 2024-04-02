#include <stdio.h>
#include <stdlib.h>

/*Aşağıda verilen prototipi kullanarak bir dikdörtgenin
çevresi ve alanını hesaplayan bir fonksiyon yazınız.
void rectangle(int a,int b, int *area, int *perimeter)*/

void rectangle(int a,int b, int *area, int *perimeter);

int main(){
    int width,height,area,perimeter;
    printf("Enter width:");
    scanf("%d",&width);
    printf("Enter height:");
    scanf("%d",&height);
    rectangle(width,height,&area,&perimeter);
    printf("Area: %d\n",area);
    printf("Perimeter: %d\n",perimeter);
    return 0;
}

void rectangle(int a,int b, int *area, int *perimeter){
    *area=a*b;
    *perimeter=2*(a+b);
}