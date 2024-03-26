#include <stdio.h>

/*Write and test a recurive function that return the value of the following recurisive defination.

f(x) =0 if x <=0
f(x-1) +2  otherwise */


int function(int);

int main(){
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    printf("%d",function(num));

    return 0;
}

int function(int x){
    if (x <= 0)
    {
        return 0;
    }
    else{
        return (function(x-1));
    }
    
}