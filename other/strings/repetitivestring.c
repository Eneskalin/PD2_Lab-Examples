#include <stdio.h>
#include <stdlib.h>

/*Adınızı bir karakter katarı (string) olarak kaydetmek için gerekli bellek alanını dinamik bellek 
yapısı ile ayırınız. Bu bellek alanına adınızın harflerini kod içerisinde atayınız (Bu adımda isminizi 
dışarıdan okuma yapmayınız). Daha sonra öğrenci numaranızın basamakları toplamını bulunuz 
ve bulduğunuz bu değer kadar bellek alanınızı genişletiniz. Genişletilen bu alana isminizi tekrarlı 
bir şekilde atayınız. İsminizin en son görünümü aşağıdaki şekilde olmalıdır (Örneğin; Emir, 
1810206037). Gerekli kodlamaları C programlama dili ile gerçekleştiriniz. 


Write a c program to do the following:
 Allocate the required memory space with a dynamic memory structure to store your first name 
as string. 
Assign the letters(one by one) of your name in the code to this memory area
 (Do not 
read your name from keyword in this step). Then find the sum of the digits of your student 
number and expand 
your memory space with this value. Repeatedly assign your name to this 
expanded area. 

Example of what the program should do:
If your information like this: student name: Emir and student number: 1810206037. 
Then your code should do the following: 
1- Store your name in a dynamic array  
E m i r \0 
2- Find the sum of student number digits sum of (1810206037) digits is 28 
3- Expand your dynamic memory to the value of the sum. 
4- Repeatedly assign your name to the expanded area. 
E m i r E m i r E m i r E m i r E m i r E m i r \0 */
int lennumber(int studentnum[],int x){
    int sum=0;
    for (int i = 0; i < x; i++)
    {
        sum+=studentnum[i];
    }
    return sum;
}

int main(void){
    char *str,*strcpy;
    strcpy=str;
    int Studentnum[]={2,2,1,0,2,0,5,0,1,0};
    str=(char *)malloc(sizeof(char)*4);
    str[0]='e';
    str[1]='n';
    str[2]='e';
    str[3]='s';
    int lenum=lennumber(Studentnum,10);
    strcpy=realloc(str,lenum*sizeof(char));
    for (int i = 0; i < lennumber-1; i++)
    {
        strcpy="Enes";
        strcpy+=4;
    }
    str[lenum]='\0';

    puts(str);
    free(str);
    
}