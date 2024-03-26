#include <stdio.h>

/*Karakterden oluşan bir metin aşağıdaki matrisle şifrelenebilir.
  A D G
  B E H
  C F I

örneğin "ABCAH" metni bu matrise göre 11 21 31 11 23 şeklide şifrelenecektir. (harfin
matriste bulunduğu satır indisi *10 + harfin matriste bulunduğu şutun indisi)
Kullanıcıdan şifreleme matrisini ve şifrelenmiş bilgiyi alıp orijinal haline dönüştüren
algoritmanın kodunu yazınız.*/

int main(){
    char *ptrrow1,*ptrrow2,*ptrrow3,**ptr;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter %d row  %d . term matrix:",1,i+1);
        scanf("%c",ptrrow1[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Enter %d row  %d . term matrix:",2,i+1);
        scanf("%c",ptrrow2[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Enter %d row  %d . term matrix:",3,i+1);
        scanf("%c",ptrrow3[i]);
    }
    ptr[0]=ptrrow1;
    ptr[1]=ptrrow2;
    ptr[2]=ptrrow3;

    int password;
    printf("Enter parword:");
    scanf("%d",&password);
    
    
    return 0;
}