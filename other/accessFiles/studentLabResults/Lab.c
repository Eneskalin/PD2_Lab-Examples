#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Programlama dersini alan tüm öğrencilere ait bilgiler aşağıda verilen struct ile rastgele erişimli 
“grades.dat” isimli bir dosyada tutulmaktadır. Bu öğrencilerden bazılarının haftalık laboratuvar 
puanları da “labs.txt” isimli ve içerisinde öğrenci numarası (std_no (int)) ve lab puanı 
(lap_point(float)) bulanan bir sıralı erişimli dosyada tutulmaktadır. Sıralı erişimli dosya 
içerisindeki tüm lab puanlarını rastgele erişimli dosya içerisindeki ilgili öğrencinin notuna 
ekleyerek rastgele erişimli dosyayı güncelleyen programın kodunu yazınız. 

The information of all students taking the programming course is stored in a random access file 
named “grades.dat” with the struct given below. The weekly laboratory points of some of these 
students are also stored in a sequential access file named “labs.txt”, which contains the student 
numbers (std_no (int)) and lab points (lap_point (float)) Write the code of the program that 
updates the random access file by adding all the lab scores in the sequential access file to the 
grade of the relevant student in the random access file. 

labs.txt:                          grades.dat    
std_no lab_point                   1.kayıt (1.record)        
std_no lab_point                   2.kayıt (2.record) 
std_no lab_point                   3.kayıt (3.record) 
...                                ..........
...                                ..........
std_no lab_point                   n.kayıt (n.record)
                 
*/
struct student { 
int number;  
float grade; 
char name[40];  
};

int main(){
    FILE *readlab,*grades;
    struct student empty={0,0,""};
    int labPoint,stdno;
    
    readlab=fopen("labs.txt","r");
    grades=fopen("grades.dat","r+");
    if (readlab == NULL || grades == NULL)
    {
        printf("Files are not read!! \n");
        return 0;
    }

    while (!feof(readlab) )
    {
        fscanf(readlab,"%d %f",&stdno,&labPoint);
        fseek(grades,sizeof(struct student)*(stdno-1),SEEK_SET);
        fread(&empty,sizeof(struct student),1,grades);

        if (empty.number == stdno)
        {
            empty.grade += labPoint;
            fseek(grades, -sizeof(struct student), SEEK_CUR);
            fwrite(&empty,sizeof(struct student),1,grades);
        }
    }
    
    fclose(grades);
    fclose(readlab);

}