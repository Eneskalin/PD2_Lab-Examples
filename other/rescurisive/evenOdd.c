#include <stdio.h>

//Write a program in C to print even or odd numbers in a given range using recursion.

void evenodd(int,int);

int main(){
    int range;
    printf("Input range 1 to:");
    scanf("%d",&range);
    printf("Even numbers 1 to %d\n",range);
    evenodd(2,range);
    printf("\nOdd numbers 1 to %d\n",range);
    evenodd(1,range);
    return 0;
}

void evenodd(int x,int range){
    if (x>range)
    {
        return;
    }
    printf("%d ",x);
    return(evenodd(x+2,range));
}