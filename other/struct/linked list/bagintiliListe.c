#include <stdio.h>
#include <stdlib.h>

typedef struct eleman
{
    int deger;
    struct eleman *sonraki;
}Eleman;

typedef struct liste
{
    Eleman *baslangic;
    int elemansayisi;
}Liste;

void menuGoster();
void hazirla(Liste* liste);
void ekle(Liste *liste,int deger);
void cikar(Liste *liste,int sira);
void yazdir(Liste *liste);
void temizle(Liste *liste);

int main(){
    Liste liste;
    hazirla(&liste);
    int secim,sira,deger;
    while (1)
    {
        menugoster();
        scanf("%d",&secim);
        switch (secim){
        case 0: temizle(&liste);
        printf("Sistemden Cikiliyor");
        exit(EXIT_SUCCESS);
        break;
        case(1):
        yazdir(&liste);
        break;
        case(2):
        scanf("%d",&deger);
        ekle(&liste,deger);
        break;
        case (3):printf("\nListedeki eleman Sayisi  :%d",liste.elemansayisi);
        printf("\nKacinci elemani cikaralyim");
        scanf("%d",&sira);
        cikar(&liste,sira);
        break;
        default:
        printf("Gecersiz secim.Lutfen gecerli bir sayi giriniz!");
            break;
        }
    }
    return EXIT_SUCCESS;
}

void hazirla(Liste *liste){
    //Listeyi ilk kullanmaya ayarlayalim
    liste->baslangic=(Eleman*)malloc(sizeof(Eleman));
    liste->baslangic->sonraki=NULL;
    liste->elemansayisi=0;
}

void ekle(Liste *liste,int deger){
    //Listeye yeni eleman ekleyelim
    Eleman* yeniEleman=(Eleman*)malloc(sizeof(Eleman));
    yeniEleman->deger=deger;
    if (liste->elemansayisi==0)
    {
        liste->baslangic->sonraki=yeniEleman;
    }
    else{
        Eleman* ptr=liste ->baslangic;
        int i=0;
        while (i<liste->elemansayisi)
        {
            ptr=ptr->sonraki;
            i++;
        }
        ptr->sonraki=yeniEleman;
        
    }
    yeniEleman->sonraki=NULL;
    liste->elemansayisi++;
}

void cikar(Liste *liste,int sira){
    if (sira<1 || sira>liste->elemansayisi)
    {
        printf("\n Gecersiz Deger!");
        return;
    }
    liste->elemansayisi--;
    //Tek eleman varsa ozel islem
    if (liste->elemansayisi==1)
    {
        free(liste->baslangic->sonraki);
        liste->baslangic->sonraki=NULL;
        return;
    }

    //Cikarma islemi burada yapiliyor

    Eleman* ptr =liste->baslangic;
    int i=0;
    //cikarilacak eleman kadar git
    while (i<sira-1)
    {
        ptr=ptr->sonraki;
        i++;
    }

    Eleman *temp = ptr->sonraki;
    ptr->sonraki = ptr->sonraki->sonraki;
    free(temp);

}

void temizle(Liste *liste){
    Eleman *ptr =liste->baslangic;
    Eleman *temizlenecek;

    printf("\nLiate temizleniyor");
    while (ptr->sonraki !=NULL)
    {
        temizlenecek=ptr;
        ptr=ptr->sonraki;
        free(temizlenecek);

    }
    free(ptr);

}

void yazdir(Liste *liste){
    printf("\nListedeki Eleman sayisi:%d\n",liste->elemansayisi);
    Eleman* ptr=liste->baslangic;
    int i=1;
    while (ptr->sonraki!=NULL)
    {
        printf("%2d.eleman %d\n",i,ptr->sonraki->deger);
        ptr=ptr->sonraki;
        i++;
    }
    
}

void menugoster(){
    printf("\n-------------------\n [Menu] \n----------------\n");
    printf("1.Listeyi yazdir");
    printf("2.Listeye eleman ekle");
    printf("3.Listeden eleman cikar");
    printf("0. Cikis\n");
    printf("Seciminizi girinniz:");
}