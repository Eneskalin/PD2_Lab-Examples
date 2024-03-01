#include <stdio.h>

//Write a program in C to find the sum of digits of a number using recursion

int sumofdigit(int);

int main(){
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    printf("%d",sumofdigit(number));
}

int sumofdigit(int number){
    static counter =0;
    if (number==0)
    {
        return counter;
    }
    else{
        counter += number%10;
        return(sumofdigit(number/10));
    }
    
}