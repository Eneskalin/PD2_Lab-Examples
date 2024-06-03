#include <stdio.h>
#include <stdlib.h>

/*
► Liste oluşturma
► Listede dolaşma
► Listeye eleman ekleme
► Listeden eleman silme
► İki listeyi birleştirme
*/

typedef struct linkedList2
{
    int data;
    struct linkedList2 *next;
}node;
node *head=NULL;
node **ptr=&head;


void createList();
void listRecords();
void deleteaNode();
void mergeLists();


void createList(){
    node *newnode;
    newnode = (node *)malloc(sizeof(node));
    printf("deger giriniz:");
    scanf("%d", &newnode->data);
    if (head == NULL)
    {
        head = newnode;
        newnode->next = NULL;
    }
    else
    {
        (*ptr)->next = newnode;
        newnode->next = NULL;
        *ptr = (*ptr)->next;
    }
}


void listRecords(){
    node *current = head;
    while (current!= NULL)
    {
        printf("%d",current->data);
        current=current->next;
    }
    
}

void deleteaNode(){
    node *prev=head,*current=head;
    int deldata;
    printf("Silmek istediginiz degeri giriniz:");
    scanf("%d",&deldata);
    if (current->data == deldata)
    {
        head =current->next;
        free(current);
        return ;
    }

    while (prev->next->data != deldata)
    {
        prev=prev->next;
    }
    current =prev->next;
    prev->next =prev->next->next;
    free(current);
    
    
}

void mergeList(node *root1 ,node *root2){
    node *current = head1;

    while (current != NULL)
    {
        current= current->next;
    }
    current->next=head2;

    
}
