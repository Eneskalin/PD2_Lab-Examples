#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Verilen program da no dizisi icin klavyeden ogrenci numaraniz girdiginde olusacak ciktiyi yaziniz*/
typedef struct node
{
    char data;
    struct node *next;
    
}node;
node *createList(char *no){  // 2210205010
    int s,k=0;
    node *head, *p;
    s= strlen(no);           // s=10
    while (k<s)  
    {
        if (k==0)
        {
            head=(node *)malloc(sizeof(node)); 
            p=head;
        }
        else{
            p->next=(node *)malloc(sizeof(node));
            p=p->next;
        }
        p->data=no[k];
        k++;

    }
     p->next=NULL;
    return head;
}

void showlist(node *head){
    node *p;
    p=head;
    while (p != NULL)
    {
        printf("%c",p->data);
         p=p->next;
    }
    
}

void changinglist1(node *head){
    node *p,*k,*z;
    k=head;
    while (k != NULL)
    {
        p=head;
        int temp=0;
        while (p->next != NULL)
        {
            if (p->data > p->next->data)
            {
                temp=p->data;
                p->data=p->next->data;
                p->next->data=temp;
            }
            p=p->next;
            
        }
        k=k->next;
    }
}

void changinglist2(node *head){
    node *p,*k,*z;
    k=head;
    p=head;
    while (p->next =NULL)
    {
        k=p;
        z=p;
        while (z->data == z->next->data)
        {
            k=z->next;
            z->next=z->next->next;
            free(k);
        }
        p=p->next;
        
    }
    
}
int main(void){
    char *no;
    no=(char *) malloc(sizeof(char));
    printf("Enter your student number\n");
    scanf("%s",no);         //2210205010
    node *root;
    root=createList(no);    
    changinglist1(root);
    changinglist2(root);
    showlist(root);
    return 0;

}