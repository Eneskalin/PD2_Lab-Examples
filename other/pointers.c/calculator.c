#include <stdio.h>
int topla(int,int);
int cikar(int,int);
int carp(int,int);
int modal(int,int);
int hesapla(int *islemptr(int,int),int,int);

int main(void){
    int sayi1;
    int sayi2;
    printf("Lutfen arada bosluk olacak sekilde 2 sayi giriniz:");
    scanf("%d%d",&sayi1,&sayi2);
    printf("Toplam: %d\n",hesapla(topla,sayi1,sayi2));
    printf("Fark: %d\n",hesapla(topla,sayi1,sayi2));
    printf("Carpim: %d\n",hesapla(topla,sayi1,sayi2));
    printf("Mod: %d\n",hesapla(topla,sayi1,sayi2));

    return 0;
}

int topla(int sayi1,int sayi2){
    return sayi1+sayi2;
}
int cikar(int sayi1,int sayi2){
    return sayi1-sayi2;
}
int carp(int sayi1,int sayi2){
    return sayi1*sayi2;
}
int modal(int sayi1,int sayi2){
    return sayi1%sayi2;
}
int hesapla(int *islemptr(int,int),int sayi1,int sayi2){
    int sonuc;
    sonuc=islemptr(sayi1,sayi2);
    return sonuc;
}