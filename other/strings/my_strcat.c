#include <stdio.h>

/*strcat isimli hazir kutupahene fonksiyonun yaptigi isi yapan my_strcat isimli fonksiyon yaziniz.
Bu fonksion kendisine gelen ilk karakter dizisinin souna ikinci karakteri eklesin */

char my_strcat(char str1[],char str2[]);

int main(void){
    char str1[]="Enes",str2[]="Kalin";
    my_strcat(str1,str2);
    puts(str1);
}

char my_strcat(char str1[],char str2[]){
    int k=0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        k++;
    }
    str1[k]=' ';
    k++;
    for (int i = 0; str2[i] != '\0'; i++)
    {
        str1[k]=str2[i];
        k++;
    }
    
    
    
}