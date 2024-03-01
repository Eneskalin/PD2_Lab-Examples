#include <stdio.h>

//Program to calculate power using recursion

int power(int,int);

int main(){
    int a,b;
    printf("Enter base:");
    scanf("%d",&a);
    printf("Enter power:");
    scanf("%d",&b);
    printf("%d",power(a,b));
}

int power(int a,int b){
    if (b==0)
    {
        return 1;
    }
    return (a * power(a,b-1));
    
}