#include <stdio.h>
#include <stdlib.h>
/*Hastaların ad soyad yaş email vs. bilgilerini içeren bi linked list hazırlanıp 5 hasta için veri girişi alın */

typedef struct hastainfo
{
    int hastano;
    char name[40];
    char surname[40];
    int age;
    struct hastainfo *next;
}hasta;

hasta *head=NULL;
hasta **ptr=&head;

void hastaekle( int counter);
void hastalistele();
void hastacikar();

int main(void){
    int choose;
    int counter=0;
    while (1)
    {
        printf("----------------MENU---------------\n");
        printf("Seciniz:\n 1-Hasta ekle 2-Hastalari listele 3- Hasta Cikar\n");
        scanf("%d",&choose);
        switch (choose)
        {
        case 1:hastaekle(counter); counter++; break;
        case 2:hastalistele(); break;
        case 3:hastacikar(); break;
        default:
            break;
        }


    }
    

}

void hastaekle( int counter){
    hasta *yenihasta;
    yenihasta=(hasta *)malloc(sizeof(hasta));
    yenihasta->hastano=counter+1;
    printf("Hasta adini giriniz: ");
    scanf("%s", yenihasta->name);
    printf("Hasta soyismi: ");
    scanf("%s",yenihasta->surname);
    printf("Hasta yasi: ");
    scanf("%d",&yenihasta->age);

    if (counter==0)
    {
        head=yenihasta;
        yenihasta->next=NULL;
        ptr=&head;
    }
    else{
        (*ptr)->next=yenihasta;
        yenihasta->next=NULL;
        ptr = &((*ptr)->next);
    }
    
}

void hastalistele(){
    hasta *temp =head;
    while (temp!= NULL)
    {
        printf("Hasta Adi: %s Hasta Soyadi: %s Yas: %d  \n",temp->name,temp->surname,temp->age);
        temp = temp->next;
    }
}

void hastacikar(){
    int n;
    hasta *temp=head;
    printf("Cikarmak istediginiz hasta no: (Son hastaya ulasmak icin 0 kullanin)");
    scanf("%d",&n);
    if (n==1)
    {
        head->next=head;
        free(temp);
        return 0;
    }
    else if (n==0)
    {
        while (temp->next ->next !=NULL)
        {
            temp=temp->next;
        }
        temp->next=NULL;


        
    }
}