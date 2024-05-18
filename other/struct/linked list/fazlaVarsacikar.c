#include <stdio.h>
#include <stdlib.h>

/*Bir baglantili liste uzerinde calisabilecek su fonksiyonu yazin:Fonksiyona gelen deger parametresi
eger listede o degerden birden fazla sayidaysa cikarma islemi yapilmasina izin versin.Fakat eger tek bir
eleman varsa cikarma islemine izin vermeyerek kullaniciyi uyarsin.(Fonksiyon adi fazlaVarsaCikar olabilir)*/

int fazlaVarsaCikar(linked root,int);
typedef struct num
{
    int n;
    struct num *next;
}linked;


void main(void){
    linked *root=malloc(sizeof(linked));
    int num;
    root->n=5;
    root->next=10;
    root->next->next=5;
    root->next->next->next=15;
    root->next->next->next->next=NULL;
    printf("Enter a value for check");
    scanf("%d",&num);
    int result=fazlaVarsaCikar(root,num);

}

int fazlaVarsaCikar(linked root,int num){
    linked temp=root;
    int counter=0;
    while (temp !=NULL)
    {
        
    }
    
}