#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*1) Öğrenci bilgilerinden (öğrenci no, isim, bölüm) oluşan sıralı erişimli bir
dosya oluşturan ve bu dosya içerisinde isme göre arama yapan programı
yazınız. Program menü şeklinde hazırlanmalıdır. Dosya oluşturma, kayıt
ekleme gibi gerekli tüm fonksiyonlar yazılmalıdır.
(Write the program that creates a sequential access file consisting of
student information (student no, name, department) and searches by
name in this file. The program should be prepared as a menu. All
necessary functions such as creating files and adding records should be
written.)*/

typedef struct 
{
    int studentno;
    char name[50];
    char department[50];
} student;

void addnew(FILE *);
void search(FILE *);

int main(void){
    int choose;
    FILE *fileptr;
    fileptr=fopen("records.txt","w");
    if (fileptr == NULL)
    {
        printf("The file not created \n");
        return 0;
    }
    
    while (1)
    {
        printf("Choose :\n 1-Add new student \n 2- Search \n Ctrl+C for Exit\n");
        scanf("%d",&choose);
        switch (choose)
        {
        case 1:
            addnew(fileptr);
            break;
        case 2:
            search(fileptr);
            break;
        default:
            printf("Invalid \n");
            break;
        }
    }

    fclose(fileptr);
    return 0;
}

void addnew(FILE *fileptr){
    student newstudent;
    printf("Enter student information[Student No - Student Name - Department]\n");
    scanf("%d %s %s",&newstudent.studentno,newstudent.name,newstudent.department);
    fprintf(fileptr, "%d %s %s\n", newstudent.studentno, newstudent.name, newstudent.department);
    fprintf(stdout,"%s added succesfully\n", newstudent.name );
}

void search(FILE *fileptr){
    student liststudents;
    char searchname[50];
    printf("Enter name want to search\n");
    scanf("%s",searchname);

    rewind(fileptr);
     while (fscanf(fileptr, "%d %s %s", &liststudents.studentno, liststudents.name, liststudents.department) != EOF)
    {
        if (strcmp(searchname, liststudents.name) == 0)
        {
            printf("Student found:\n");
            printf("%d %s %s\n", liststudents.studentno, liststudents.name, liststudents.department);
            return;
        }
    }

    printf("Student not found.\n");
}