#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Soru 1: Programlama dersindeki öğrenciler için kullanılacak ‘student’ isimli struct yapısını, ‘number’, 
‘name’, ‘surname’, ‘midtermGrade’ ve ‘finalGrade’ alanlarından oluşacak şekilde tanımlayınız. 
Question 1: Define the struct structure called ’student‘, which will be used for the students in the 
programming course, as ‘number ‘,name‘, ‘surname‘, ‘midtermGrade’ and’ finalGrade fields.


Soru 2: Tanımladığınız bu yapıyı kullanarak 5 öğrenci için bir pointer dizişi oluşturun. 
Question 2: Create a pointer sequence for 5 students using this structure 



Soru 3: 5 öğrenci için tanımladığınız pointer dizisi üzerinden ilgili bilgileri döngü kullanarak kullanıcıdan 
alınız. 
Question 3: For the 5 students, you can loop through the set of pointer arrays and retrieve them from 
the user. 


Soru 4: 5 öğrenciye ait vize ve final notu bilgilerini kullanarak ortalama yıl sonu notunu elde ediniz. 
Question 4: Obtain the average year-end grade of 5 students using the midterm and final grade 
information. 


Soru 5: Öğrenci dizisini isme göre sıralayınız. 
Question 5: Sort the student series by name. */

int main(){
    typedef struct 
    {
        int number;
        char name[40];
        char surname[40];
        double midtermGrade;
        double finalGrade;
        double average
    } student;

    student *ptr;
    ptr=(student *)malloc(6*sizeof(student));

    for ( int i = 0; i < 5; i++)
    {
        printf("Enter number:");
        scanf("%d",& ptr[i].number);

        printf("Enter name:");
        scanf("%s",& ptr[i].name);

        printf("Enter surname:");
        scanf("%s",& ptr[i].surname);

        printf("Enter midterm grade:");
        scanf("%lf",& ptr[i].midtermGrade);

        printf("Enter final grade:");
        scanf("%lf",& ptr[i].finalGrade);
    }



    for (int i = 0; i < 5; i++)
    {
        ptr[i].average=(ptr[i].midtermGrade)*0.4+(ptr[i].finalGrade)*0.6;
    }

        for (int i = 0; i < 5; i++)
    {
        printf("No: %d Name:%d Surname:%d Midterm Grade: %.2lf Final Grade:%.2lf Average:%lf.2",ptr[i].number,ptr[i].name,ptr[i].midtermGrade,ptr[i].finalGrade,ptr[i].average);
        printf("\n");
    }


    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(ptr[i].name, ptr[j].name) > 0) {
                student temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
    
    


    
    
    
}