#include <stdio.h>
/* X ve y tamsayılarının ortak bölenlerinin en büyüğünü(Ebob) bulan  rescurisive  fonksiyon yazınız 
 Write a rescurisive function that finds the oldest common divisor of integers x and y */

 int ebob(int , int);

 void main(){
    int a,b;
    printf("Enter  first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    if (b>a)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    printf("%d",ebob(a,b));
 }

 int ebob(int a,int b){
    if (a%b==0)
    {
        return b;
    }
    else{
        return (ebob(a,a%b));
    }
    
 }

