#include <stdio.h>
#include <stdlib.h>

/*2) Öğrenci bilgilerinden (öğrenci no, isim, bölüm) oluşan rastgele erişimli
bir dosya oluşturan ve bu dosya içerisinde öğrenci no’ya göre arama
yapan programı yazınız. Program menü şeklinde hazırlanmalıdır. Dosya
oluşturma, kayıt ekleme gibi gerekli tüm fonksiyonlar yazılmalıdır.
(Write the program that creates a random access file consisting of
student information (student no, name, department) and searches by
student no in this file. The program should be prepared as a menu. All
necessary*/

typedef struct 
{
    int no;
    char name[20];
    char department[20];
}student;

void createfile(FILE *);
void addnew(FILE *);
void list(FILE *);
void delete(FILE *);
void search(FILE *);

int main(void){
    int choose;
    FILE *readptr;
    readptr= fopen("records.txt","r+");

    while (1)
    {    
    printf("Choose\n 1-Create File \n 2- Add record \n 3-List Records \n 4-Delete Records \n 5-Search \n For Exit ctrl+c");
    scanf("%d",&choose);
    switch (choose)
    {
    case 1:
        createfile(readptr);
        break;
    case 2:
        addnew(readptr);
        break;
    case 3:
        list(readptr);
        break;
    case 4:
        delete(readptr);
        break;
    case 5:
        search(fileptr);
        break;
    default:
        printf("Invalid value\n");
        break;
    }

        
    }
    fclose(fileptr);
    return 0
}

void createfile(FILE *readptr){
    student empty={0,"",""};
    FILE *fileptr;
    fileptr =fopen("records.txt","w");
    if (fileptr == NULL)
    {
        printf("The file not created\n");
        return 0;
    }
    
    else{
        rewind(readptr);
        fprintf(fileptr,"%-10s %-16s %-11s\n","Student No","Student Name","Department");
        while (!feof(readptr))
        {
            fread(&empty,sizeof(student),1,readptr);
            if (empty.no != 0)
            {
                fprintf(fileptr,"%-10d %-16s %-11s\n",empty.no,empty.name,empty.department);                
            }
            

        }
        
        return fileptr;
    }
    
}

void addnew(FILE *fileptr){
    student empty={0,"",""};
    int studentno;
    printf("Enter student number to add: ");
    scanf("%d",&studentno);
    fseek(fileptr,(studentno-1)*sizeof(student),SEEK_SET);

    fwrite(&empty,sizeof(student),1,fileptr);

}
