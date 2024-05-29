#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Bir şirket çalışanlarının adlarının zaten var olan tek bir doğrusal bağlantılı listede saklandığını 
varsayalım. Aşağıda verilen listenin yapısı. Mevcut bağlantılı listede aşağıdaki işlemleri yapan C 
dilini kullanarak bir uygulama yazın: 
1. Liste verilerini yazdırın. 
2. Listedeki mevcut çalışan isimlerini alfabetik sıraya göre sıralayın. 
3. Listeyi tersine çevirin. 
Assume that the names of a company employees stored in an already existing singly linear linked 
list. The structure of the list given below. Write an application using C language that do the 
following operations in the existing linked list: 
1. Print the list data. 
2. Sort the existing employees’ names in the list in alphabetical order. 
3. Reverse the list. 

 */

struct Empoloyee{
    char name[40];
    struct Empoloyee *next;
};
 typedef struct Empoloyee node;

    node *root;
    node *ptr;
 void list();
 void sort();
//  void reserve();

 int main(){
    root=(node *)malloc(sizeof(node));
    strcpy(root->name, "Enes");
    root->next = (node *)malloc(sizeof(node));
    strcpy(root->next->name, "Ali");
    root->next->next = (node *)malloc(sizeof(node));
    strcpy(root->next->next->name, "Veli");
    root->next->next->next=NULL;
    list();
    sort();
    printf("\n\n\n\n");
    list();


 }

 void list(){
    ptr=root;
    while (ptr!= NULL)
    {
        printf("%s\n",ptr->name);
        ptr=ptr->next;
    }
 }

 void sort(){
    int counter=0;
    ptr=root;
    node *temp;


    while (ptr->next != NULL)
    {
        counter++;
        ptr=ptr->next;
    }

    ptr=root;

    for (int i = 0; i < counter; i++)
    {
        for (int j = 0; j < counter-1; j++)
        {
            if (strcmp(ptr->name,ptr->next->name)>0)
            {
                strcpy(temp->name,ptr->name);
                strcpy(ptr->name,ptr->next->name);
                strcpy(ptr->next->name,temp->name);
                free(temp); 
            }

        }
         ptr=ptr->next;
    }
 }


//   void reserve(){
//     int counter;
//     ptr=root;
//     node *end,*temp;
//     while (ptr->next != NULL)
//     {
//         counter++;
//         end=end->next;
//     }

//     for (int i = 0; i < counter/2; i++)
//     {
//         temp=ptr;
//         ptr=end;
//         end=ptr;
//         ptr=ptr->next;
//     }
    

    
  
