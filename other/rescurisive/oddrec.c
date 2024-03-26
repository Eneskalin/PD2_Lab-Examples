#include <stdio.h>

/*Write a recursive function named "oddRec" that takes the address of the array and the number of elements as a parameter and returns the
number of odd numbers in the array, (Do not use global variable)

Dizinin adresini ve eleman sayısını parametre olarak alan ve dizinin içinde kaç tane tek sayı olduğunu döndüren "oddRec" isimli rekürsif bir
fonksiyon yazınız. (Global değişken kullanmayınız),
*/

int oddRec(int *ptr,int x);

int main(){
    int array[8]={1,2,5,6,8,13,40,55},*ptr;
    ptr=array;
    printf("%d",oddRec(&ptr,8));
    return 0;
}

int oddRec(int *ptr,int x){
    int *counter;
    int y=0;
    counter=&y;
    if (x==0)
    {
        return 0;
    }
    int count = (*ptr % 2 != 0); 
    return count + oddRec(ptr + 1, x - 1);
}