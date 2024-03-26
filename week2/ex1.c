#include <stdio.h>
/* Soru 1:  X ve Y tamsayılarının ortak bölenlerinin en büyüğü (0BEB) , her ikisini de tam bölen tam sayıların 
en büyüğüdür. X ve Y ta sayılarının OBEB ini bulan ve döndüren bir obeb yineleme (recursive)  
fonksiyonunu C dilinde yazınız. X ve Y değerleri kullanıcı tarafından girilecektir. 

Question 1: The largest of the common divisors of integers X and Y (0BEB) is the largest of all integers 
dividing both of them. Write an” obeb” recursive function in C language. X and Y will be entered by 
users. */

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

