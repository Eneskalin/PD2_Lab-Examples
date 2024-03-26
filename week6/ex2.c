#include <stdio.h>
#include <stdlib.h>
/* Dinamik bellek ayırma yöntemi kullanılarak en büyük sayıyı bulan programı C dilinde yazınız. 
Dizinin boyutunu kullanıcıya sorunuz ve dizinin elemanlarını kullanıcıdan alınız. 
 Write a program in C to find largest element using dynamic memory allocation. Ask the 
user for the size of the index and get the elements of the array from the user. 
*/

int main(){
    int memorysize,*ptr,max;
    printf("Enter array size:");
    scanf("%d",&memorysize);
    ptr = (int *)malloc(sizeof(int)*memorysize);
    for (int i = 0; i < memorysize; i++)
    {
        printf("Enter %d. term: ",i+1);
        scanf("%d",ptr+i);
    }
    max=*ptr;

    for (int i = 0; i < memorysize; i++)
    {
        if (*(ptr+i)>max)
        {
            max=*(ptr+i);
        }
    }

    printf("Max value is %d",max);
    

    
}