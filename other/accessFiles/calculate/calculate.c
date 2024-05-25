#include <stdio.h>
#include <stdlib.h>
/*Value isimli dosyadaki islemleri result adli bir dosyaya yazdiran programi yaziniz*/

typedef struct calculate
{
    int a;
    char sign;
    int b;
}islem;


int main(){
    char ch[50];
    int result;
    islem oparetion;
    FILE *okunacakdosya=fopen("value.txt","r");
    if (okunacakdosya==NULL)
    {
        printf("Dosya okunamadi");
        return ;
    }
    FILE *yazilacakdosya=fopen("result.txt","w");
    if (yazilacakdosya==NULL)
    {
        printf("Dosya olusturlamadi");
        return ;
    }
    fscanf(okunacakdosya,"%d %c %d",&oparetion.a,&oparetion.sign,&oparetion.b);
    switch (oparetion.sign)
    {
    case '+':
        result=oparetion.a+oparetion.b;
        break;
    case '-':
        result=oparetion.a-oparetion.b;
        break;
    case '*':
        result=oparetion.a*oparetion.b;
        break;
    case '/':
        result=oparetion.a/oparetion.b;
        break;
}

    fprintf(yazilacakdosya,"Islem sonucu %d",result);
    fprintf(stdout,"Islemin Sonucu: %d",result);

    fclose(yazilacakdosya);
    fclose(okunacakdosya);

    return 0;
}
