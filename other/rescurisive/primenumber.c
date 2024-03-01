#include <stdio.h>

//Write a program in C to check if a number is a prime number or not using recursion

int checkprime(int,int);

int main (){
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    int result = checkprime(number,number/2);
    if (result==1)
    {
        printf("Prime number");
    }
    else{
        printf("Not Prime Number;");
    }
    

    return 0;
}

int checkprime(int number,int x){
    if (number==1)
    {
        return 0;
    }
    else if (number==2)
    {
        return 1;
    }
    
    else if (number%x==0)
    {
        if (x!=1)
        {
            return 0;
        }
        else{
            return 1;
        }
    }
    else{
        return(checkprime(number,x-1));
    }
    

    
}