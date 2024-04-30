#include <stdio.h>
#include <stdlib.h>
/*Kitap isimli bir yapi olusturunuz kitap yapisinin icerisinde kitabun adi yazarin adi  basim yili ve fiyati olsun
Bu yapiyi kullanarak bir degisken olsuturunuz.Dinamik bellek yonetimi ile girilecek kitap sayisini aliniz ve bu kitaplari
kitap degiskenini adresini parametre olarak alan bir fonksiyon icinde yazdirin*/

typedef struct bookstruct
{
    char ad[40];
    char yazar[40];
    int basimyili;
    int fiyat;
}book;

void yazdir(book *ptr,int n);

int main(void){
    book *ptr;
    int n;
    printf("Girilecek kitap sayisini giriniz: ");
    scanf("%d",&n);
    ptr=(book *)malloc(sizeof(book)*n);

    for (int i = 0; i < n; i++)
    {
        printf("%d . Kitap bilgilerini giriniz:\n",i+1);
        printf("Kitap adi:\n");
        scanf("%s",&ptr->ad);
        printf("Kitap yazari:\n");
        scanf("%s",&ptr->yazar);
        printf("Basim Yilini Giriniz:\n");
        scanf("%d",&ptr->basimyili);
        printf("Fiyati Giriniz:");
        scanf("%d",&ptr->fiyat);
    }

    yazdir(ptr,n);
}

void yazdir(book *ptr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d.Kitap Bilgileri: Ad:%s  Yazar Adi:%s Basim Yili:%d  Fiyati:%d \n",i+1,ptr->ad,ptr->yazar,ptr->basimyili,ptr->fiyat);
    }
    
}