#include <stdio.h>

/*Strlen isimli hazir kutuphane fonksiyonunun yaptigi isi yapan my_strlen isimli fonksiyonu 
yaziniz. Bu foksniyon kendine gelen parametrenin kac karakter oldugunu gostersin */

int my_strlen(char str1[]);

int main(void){
    char str2[]="EnesKalin";
    int len=my_strlen(str2);
    printf("Length of the string: %d",len);
    return 0;
}

int my_strlen(char str1[]){
    int k=0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        k++;
    }

    return k;
    
}