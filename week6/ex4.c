#include <stdio.h>
#include <stdlib.h>
/*Soru 4: Pointer kullanarak bir dizi tanımlayınız ve dizinin boyutunu kullanıcıya sorunuz. Dizinin 
elemanlarını kullanıcıdan alınız. Daha sonra dizide yeni bir alan oluşturun ve yeni elemanları 
kullanıcıdan alınız. En son yeni dizinin elemanlarını ekrana basınız. (Dinamik bellek yönetimi 
kullanılmalı.) 
Question 4: First, define an array and ask the user for array size. Then, get the elements of array from 
user, too. After that, allocate new space in the array and get new elements. Finally, dump the resulting 
array to scree. (Use dynamic memory allocation.) 
*/

int main(){
    int size,*ptr,*ptr2;
    printf("Enter array size: ");
    scanf("%d",&size);
    ptr= (int *) malloc(sizeof(int)*size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d. term: ",i+1);
        scanf("%d",ptr+i);
    }

    ptr2=(int *)realloc(ptr,sizeof(int)*(size+2));
    ptr2=ptr+size;
    for (int i = 0; i < 2; i++)
    {
        printf("Add more 2 term:");
        scanf("%d",ptr2++);
    }

    for (int i = 0; i < size+2; i++)
    {
        printf("%d\n",*(ptr2-i));
    }
    
    
}