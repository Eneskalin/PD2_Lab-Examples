#include <stdio.h>
#include <stdlib.h>
/*Soru 3: Bir kelimenin harflerini tersten ekrana basan programı pointer kullanarak C dilinde yazınız.  
Question 3: Write a program in C to print a string in reverse using a pointer. */
int main(){
    char *ptr,str[80],k=0;
    printf("Enter a sentence:");
    gets(str);
    while (str[k] != '\0')
    {
        k++;
    }
    
    ptr=&str[k-1];

    for (int i = 0; i < k; i++)
    {
        printf("%c",*ptr);
        ptr--;
    }
    
    


}