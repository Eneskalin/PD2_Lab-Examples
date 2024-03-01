#include <stdio.h>

// Belirli bir aralık da  5 ın katı  olan tüm sayıları yazan 

void divFive(int,int);


int main(){
    int a,b;
    printf("Enter start value:");
    scanf("%d",&a);
    printf("Enter end value:");
    scanf("%d",&b);
    divFive(a,b);


}

void divFive(int a,int b){
    if (a==b)
    {
        return 0;
    }
    if (a%5==0)
    {
        printf("%d\n",a);
    }
    return (divFive(a+1,b));
    
    

}