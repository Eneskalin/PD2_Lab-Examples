#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*Soru 5: Bir cümlenin kelimelerini sondan başa doğru yazan programı dinamik bellek yönetimi 
kullanarak oluşturunuz. 
Question 5: Write a program using dynamic memory allocation that prints out words of a sentence in 
reverse order. 


Örnek (Example): 
Input: I love Programming Languages course 
Output: course Languages Programming love I*/

int main(){
    char *character;
    int size,i=0;
    printf("Enter a sentence: ");
    gets(character);
    (int *)malloc(1);

    while (1)
    {
        if (*(ptr+i)!=13)
        {

            break;
        }

        getchar(character);

        ptr=(char *)realloc(ptr,1+i);
        i++;
    }
    
}