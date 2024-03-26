#include <stdio.h>
#include <stdlib.h> 

/* Soru 5: (Klavyeden girilen bir metnin icerisinde her harfin tekrar sayislnl bularak
ekrana yazdlran programm c kodunu yanruz. Örnek ekran GiktlSl yanda verilmi$ir.
Kelimenin tüm harflerinin büyük olduäunu varsaylruz. ASCII deäeri A=65)


Question 5: Write a C program that prints the number of pass of letters in a given
word from keyboard. Sample execution of your program should be as given beside.
Assume all letters of input are uppercase or lowercase (ASCII value of A=65)*/

int main(){
    char str[100],*ptr;
     int counter=1;
    printf("Enter a sentence: ");
    gets(str);
    ptr=&str;
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int  k = 1; str[k] != '\0'; k++)
        {
            if (str[i]==str[k])
        {
            counter++;

        }
        }
        printf("%c character used %d times\n",str[i],counter);
        counter=0;
    }
    

}