#include <stdio.h>
#include <stdlib.h>

/*Question. Create a student struct with student number, name and surname. Write a function for
given operations.
a. Create a linked list of students
b. Add a new student
c. Search student with student number and return its index
d. Sort the list according to student number*/

typedef struct studentrecord
{
    int studentno;
    char name[50];
    char surname[50];
    struct studentrecord *next;
}record;

record *root;
record **ptr=&root;
int counter=0;

void addfunc(void);
record *searchfunc(void);
void listfunc(void);

int main(void){
    int choose;

    while (1)
    {
        record *result;
        printf("--------------Menu------------------\n");
        printf("Choose one option\n 1-Add student \n 2-Search\n 3-List record\n 4-Exit\n");
        scanf("%d",&choose);
        switch (choose)
        {
        case 1: 
            addfunc();
            break;
        case 2:
            result=searchfunc();
            if (result ==NULL)
            {
                printf("Not Found!\n");
            }
            else{
                printf("Student No: %d \n Student Name: %s \n Student Surname: %s\n",result->studentno,result->name,result->surname);
            }
            
            break;
        case 3:
            listfunc();
            break;
        case 4:
            exit(1);
            break; 
        default:
            printf("Invalid value!!!");
            break;
        }
    }

    return 0;
}

void addfunc(void){

    record *newnode;
    newnode=(record *)malloc(sizeof(record));
    
    printf("Enter student no:");
    scanf("%d",&newnode->studentno);
    printf("Enter student name:");
    scanf("%s",newnode->name);
    printf("Enter student surname:");
    scanf("%s",newnode->surname);
    *ptr=newnode;

    if (counter==0)
    {
        root=newnode;
        newnode->next=NULL;
        counter++;
    }
    else{
        (*ptr)->next=newnode;
        newnode->next=NULL;
        ptr=&newnode->next;

    }
    
}

record*searchfunc(void){
    int searchno;
    printf("Enter stundent number to search:");
    scanf("%d",&searchno);
    record *temp=root;
    while (temp != NULL)
    {
        if (temp->studentno == searchno)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

void listfunc(void){

    record *temp=root;
    while (temp!=NULL)
    {
        for (int i = 0; i < count; i++)
        {
            /* code */
        }
        
    }
    
    
}
