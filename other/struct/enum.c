#include <stdio.h>

int main(){
    enum Kullaniciseviyeleri{
        misafir=1,
        ogrenci=2,
        akademisyen=3,
        admin=4
    };
    enum Kullaniciseviyeleri seviye;
    printf("Kullanicinin yetki seviyesini giriniz.");
    scanf("%d",&seviye);

    switch (seviye)
    {
    case misafir:
        printf("Misafir Seviyesi ile giris yapildi\n");
        break;
    case ogrenci:
        printf("Ogrenci Seviyesi ile giris yapildi\n");
        break;
    case akademisyen:
    printf("Akademisyen Seviyesi ile giris yapildi\n");
    break;
    case admin:
    printf("Admin Seviyesi ile giris yapildi\n");
    break;
    default:
        printf("Gecersiz giris yapildi\n");
        break;
    }

    return 0;
}