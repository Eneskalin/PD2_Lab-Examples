#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Programlama dersini alan tüm öğrencilere ait bilgiler aşağıda verilen struct ile rastgele erişimli 
bir dosyada tutulmaktadır. Dosya içerisinde bulunan iki kaydın bilgilerinin yer değiştirilmesi 
istenmektedir. Bu işlemi gerçekleştiren kodu yazınız. (Not: İlk kaydın sırası öğrenci numaranızın 
ilk 5 hanesinin toplamı, ikinci kaydın sırası ise öğrenci numaranızın son 5 hanesinin toplamıdır).  


The information of all students taking the programming course is kept in a random access file 
with the struct given below. Your code should swap the information of two records in the file.  
Write the code that performs this operation.  
Note: The position of the 2 records that you need to swap like this: 
The position of the first record is the sum of the first 5 digits of your student number. 
The position of the second record is the sum of the last 5 digits of your student number. 
Örnek (Examples):   
if your student number is : 1910202034         : then you need to swap recods    13 <- -> 9 
if your student number is : 2014010217021      : then you need to swap recods     7 <- -> 11

Dosya (File):                     
1.record                                                   
2.record                                  
3.record                      
………             
………                 
n.record            

struct student { 
int number;  
float midterm; 
char name[40];  
} 
*/
struct student { 
int number;  
float midterm; 
char name[40];  
};

 void chancingTwoValue(void){
    int stundent1No = 7;  //2+2+1+0+2=7       0+5+0+1+0=6
    int student2No = 6;
    struct student student1,student2;
    FILE *fileptr;
    fileptr=fopen("students.txt","r+");
    fseek(fileptr,sizeof(struct student)*(stundent1No-1),SEEK_SET);
    fread(&student1,sizeof(struct student),1,fileptr);
    fseek(fileptr,sizeof(struct student)*(student2No-1),SEEK_SET);
    fread(&student2,sizeof(struct student),1,fileptr);

    struct student temp;
    temp=student2;
    
    fseek(fileptr,sizeof(struct student)*(student2No-1),SEEK_SET);
    fwrite(&student1,sizeof(struct student),1,fileptr);
    fseek(fileptr,sizeof(struct student)*(stundent1No-1),SEEK_SET);
    fwrite(&temp,sizeof(struct student),1,fileptr);

    temp.number=6;
    student2.number=7;

    fclose(fileptr);
}