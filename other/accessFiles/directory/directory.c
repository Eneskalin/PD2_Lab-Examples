#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Isim soyisim telefon numarasi tutan bir struct ve menu  olusturun menu icergi soyle olsun

1- Kisi Ekle 
2- Kisi Ara
 |
 |___Isme gore ara
 |
 |__ Numaraya gore ara  
 3-Cikis
 
 bu islemrleri gercekletriren progrmai yazin
 */

typedef struct
{
    char name[50];
    char surname[50];
    char phone[11];
}directory;

void addNewPeople(FILE *);
void findPeople(FILE *);

int main(void){
FILE *fileptr;
fileptr=fopen("directory.txt","w");
if (fileptr == NULL)
{
    printf("directory.txt not created\n");
    return 0;
}

int choose,flag=0;

while (flag==0)
{
    printf("Choose:\n");
        printf("1-Add new person\n");
        printf("2-Find person\n");
        printf("3-Exit\n");
        scanf("%d",&choose);
    switch (choose)
    {
    case 1:
        addNewPeople(fileptr);
        break;
    case 2:
        findPeople(fileptr);
        break;
    case 3:
        flag=1;
        break;
    }
}

fclose(fileptr);
return 0;
}


void addNewPeople(FILE *fileptr){
     directory *newpeople = malloc(sizeof(directory)); 
    if (newpeople == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    printf("Enter new people Informations:\n");
    printf("Name: ");
    scanf("%s",newpeople->name);
    printf("Surname: ");
    scanf("%s",newpeople->surname);
    printf("Phone: ");
    scanf("%s",newpeople->phone);

    fprintf(fileptr,"%s %s %s\n",newpeople->name,newpeople->surname,newpeople->phone);
    printf("Added:\n");
    fprintf(stdout,"%s %s %s",newpeople->name,newpeople->surname,newpeople->phone);
    free(newpeople);

}

void findPeople(FILE *fileptr) {
    int choose;
    int phonenum;
    char searchname[50];
    directory *findPeople = malloc(sizeof(directory)); 
    if (findPeople == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Choose:\n");
    printf("1-Searching by number\n");
    printf("2-Searching by name\n");
    scanf("%d", &choose);

    if (choose == 1) {
        printf("Enter phone number: ");
        scanf("%d", &phonenum);
        rewind(fileptr);
        while ((fscanf(fileptr, "%s %s %s", findPeople->name, findPeople->surname, findPeople->phone) != EOF)) {
            if (strcmp(findPeople->phone, phonenum) == 0) {
                fprintf(stdout, "%s %s %s\n", findPeople->name, findPeople->surname, findPeople->phone);
                free(findPeople);
                return;
            }
        }
        printf("Not Found\n");
    } 
    else if (choose == 2) {
        printf("Enter name: ");
        scanf("%s", searchname);
        rewind(fileptr);
        while ((fscanf(fileptr, "%s %s %s", findPeople->name, findPeople->surname, findPeople->phone) != EOF)) {
            if (strcmp(findPeople->name, searchname) == 0) {
                fprintf(stdout, "%s %s %s\n", findPeople->name, findPeople->surname, findPeople->phone);
                free(findPeople);
                return;
            }
        }
        printf("Not Found\n");
    } 
    else {
        printf("Invalid Option\n");
    }

    free(findPeople);
}