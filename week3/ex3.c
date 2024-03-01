#include <stdio.h>

//Verilen sayının binary sayı sistemine çeviren rekürisif foknsiyonu yazınız

int convertBinary(int);

void main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Result: %d",convertBinary(a));
}


int convertBinary(int a){
    if (a==0)
    {
        return 0;
    }
    else{
        return(a%2+10*convertBinary(a/2));
    }
    
}


