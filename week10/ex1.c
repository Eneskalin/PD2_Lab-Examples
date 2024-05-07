#include <stdio.h>

/*Soru 1: Öğrencilere ait numara, isim, vize ve final notunun tutulduğu “notlar.txt” isimli dosya 
üzerinde işlemler yapabileceğiniz bir C programı yazınız. Buna göre programın menüsü şu şekilde 
olacaktır:,  
1- Dosya oluştur / veri gir  
2- Dosyadan oku / listele  
3- Geçme notu 60 üstü olanları listele  
4- Dosyada geçme notu 60 ve üstü olanları “gecenler.txt”, düşük olanları ise “kalanlar.txt”  dosyasına 
yazdır.  
5- Dosya boyutunu ekrana yazdır.  
Not: Her bir menü seçeneği bir fonksiyon ile yapılıcaktır.

Question 1: Write a C program that will perform several processes on a sequential Access file named 
"grades.txt" in which number, name and grades of students are stored. Main menu of the  
program should be as given below: 
1 - Create File / Enter Data 
2 - Read File / List Content 
3 - List Student Having Grade Greater Than 60 
4 - Copy student having grade greater than or equal to 60 into 'pass.txt' file and other students into 
'fail.txt' file. 
5 - Print the size of the "grade.txt" file on the screen 
Note: Create a functionfo each option in the menu. */

void  createfolder();
void readfile();
void listpassed();

typedef struct student
{
    int studentno;
    char name[60];
    int midterm;
    int final;

}records;



int main(){
    createfolder();
    listpassed();


    return 0;
}

void  createfolder(){
    records student;
    FILE *myptr;
    if ((myptr!=fopen("notlar.txt","w"))==NULL){ 
    printf("File didn't create!!!\n");
    }
    else{
        int n;
        printf("Enter want to enter student num");
        scanf("%d",&n);
        for (int i = 0; i < n; i++)
        {
        printf("Enter Student Number - Student Name - Midterm - Final : ");
        scanf("%d %s %d %d",&student.studentno,student.name,&student.midterm,&student.final);
        fprintf(myptr,"%d %s %d %d",student.studentno,student.name,student.midterm,student.final );

        }
        fclose(myptr);
        
    }
}

void listpassed(){
    FILE *myptr =fopen("notlar.txt","r");
    if (myptr==NULL)
    {
    printf("File didn't create!!!\n");
    return;
    }
    printf("Paased students:\n");
    printf("%-10s %-13s %-10s %-10s","Number","Name","Midterm","Final");
    printf("---------------------------------\n");
    records student;
    while (fscanf(myptr,"%d %d %d %d",&student.studentno,student.name,student.midterm,student.final));
    {
        if (student.midterm*0.4+student.final*0.6 >=60)
        {
            printf("%d\t%s\t%d\t%d\t",student.studentno,student.name,student.midterm,student.final);
        }
        
    }
    

    
}