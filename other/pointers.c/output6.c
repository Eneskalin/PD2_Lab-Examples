#include <stdio.h>
/*
Write the output of the given C program when your student number is red from keyboard to the "StudentNumber• array in the program.
*/
int main(){
    int  StudentNumber[15]; //use your real student number         2210205010
    int i=0,k,ReadNum;
    printf("\n Please Enter your Student Number  then press enter button:");
    while (1)
    {
        ReadNum=getch(); //get the student number one digit each time
        if (ReadNum==13) break;
        putchar(ReadNum); //put the student number in the studentNumber[] Array
        StudentNumber[i]=(int)(ReadNum-'0');
        i++;
    }
    Fun1(StudentNumber,0,i-1);
    printf("\n The Array after Fun1\n");
    for (k = 0; k < i; k++)
    {
        printf("%d",StudentNumber[k]);
    }
    return 0;
}

void swap(int *array,int leftIndex,int rightIndex){
    int temp;
    if (array[leftIndex]<array[rightIndex])
    {
        temp=array[leftIndex];
        array[leftIndex]=array[rightIndex];
        array[rightIndex]=temp;
    }
    
}

void Fun1(int *array,int leftIndex,int rightIndex){
    if (leftIndex<rightIndex)
    {
        swap(array,leftIndex,rightIndex);
        Fun1(array,leftIndex+1,rightIndex-1);
    }
    
}