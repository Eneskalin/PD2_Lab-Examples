#include <stdio.h>

/*Store information and Display it Using Structure
Name
Roll
Marks
*/

typedef struct information
{
    char name[100];
    int roll;
    float marks;
}info;


int main(){
    info student;
    
    printf("Enter information\n");
    printf("Enter Student Name:\n");
    gets(student.name);
    printf("Enter Roll: ");
    scanf("%d",&student.roll);
    printf("Enter Mark: ");
    scanf("%f",&student.marks);

    printf("--------------------------------\n");
    printf("Name:%s\n",student.name);
    printf("Roll: %d\n",student.roll);
    printf("Mark: %.2f\n",student.marks);

    return 0;

}