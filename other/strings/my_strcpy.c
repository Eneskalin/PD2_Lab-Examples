#include <stdio.h>

/*Strcpy isimli hazir kutupahen fonksiyonunun ypatiig isi yapan
mystrcpy isimli fonksiyon yaziniz.Bu fonksiyon kendisene gelen iki parametre dizisini ikincisinin degerini 
birinciye kopyalasin*/

void my_strcpy(char str1[] , char str2[]);

int main(void){
    char str1[20],str2[]="Enes";
    my_strcpy(str1,str2);
    printf("Str1:\n");
    puts(str1);
    printf("Str2:\n");
    puts(str2);

    return 0;
}

void my_strcpy(char str1[] , char str2[]){
    int i=0;
    for (i;str2[i] != '\0'; i++)
    {
        str1[i]=str2[i];   
    }
    i++;
    str1[i]='\0';
}