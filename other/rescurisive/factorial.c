#include <stdio.h>

int factorial(int);

void main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Result:%d",factorial(x));
}

int factorial(int x){
    if (x>1)
    {
        return(x*factorial(x-1));
    }
    else{
        return x;
    }
    
}