#include <stdio.h>
#include <stdlib.h>

/*Verilen bir sayisi dizisi icerisinde yer alan sayilarl pointer kullanarak tersten yazdlran program
C dilinde yaziniz 
*/
int main(){
    int *ptr;
    int a[5]={1,2,3,4,5};
    ptr=&a[4];
    for (int  i = 0; i < 5; i++)
    {
        printf("%d\n",*(ptr-i));
    }
    


}