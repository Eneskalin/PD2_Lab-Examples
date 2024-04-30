#include <stdlib.h>
#include <stdio.h>

/*Demonstrate the Dynamic Memory Allocation for Structure
This program asks the user to store the value of noOfRecords
and allocates the memory for the noOfRecords structure variables dynamically using the malloc() function.
C Pointers
C Dynamic Memory Allocation
C struct
*/

typedef struct course{
    char lesson[40];
    int mark;
}lessoninfo;

int main(void){
    int noOfRecords;
    printf("Enter the number of Records: ");
    scanf("%d",&noOfRecords);
    lessoninfo *ptr;
    ptr=(lessoninfo*)malloc(sizeof(lessoninfo)*noOfRecords);
    for (int i = 0; i < noOfRecords; i++)
    {
        printf("Enter Lesson: ");
        scanf("%s",&ptr[i].lesson);
        printf("Enter Mark: ");
        scanf("%d",&ptr[i].mark);
    }

    printf("\n-------------------------------------------------------\n");
    for (int i = 0; i < noOfRecords; i++)
    {
        printf("%d.Records: Lesson: %s       Mark:\n %d",i+1,ptr[i].lesson,ptr[i].mark);

    }

    free(ptr);

    return 0;    
}