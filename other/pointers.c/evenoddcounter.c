#include <stdio.h>
#include <stdlib.h>
/*Öğrenci numaranızı değer olarak alan ve öğrenci numaranızın her bir basamağındaki rakamları 
tek veya çift olma durumlarına göre farklı dinamik dizilere ekleyen ve dinamik dizilerdeki tek ve 
çift değerleri ayrı ayrı görüntüleyen fonksiyonu C dilinde yazınız.  Fonksiyonun kullanımını 
program içerisinde gösteriniz.  
Write a function in C language that takes your student number as a value and adds each digit of 
your student number into 2 different dynamic arrays according to whether they are odd or 
even (one array for the odd digits and another one for the even digits), and displays the odd 
and even values in the dynamic arrays separately. 
Example:  
Input:     Student Number :  25698574 
Output:  Result: 7 5 9 5 
4 8 6 2 */

int main() {
    int array[10],oddcounter=0,evencounter=0;
    int *odd=(int *)malloc(sizeof(int)*1);
    int *even=(int *)malloc(sizeof(int)*1);
    for(int i=0;i<10;i++){
        scanf("%d",&array[i]);
    }
    
    for(int i=0;i<10;i++){
        if(array[i]%2!=0){
            oddcounter++; //1
            odd=realloc(odd,oddcounter*sizeof(int)); //
            odd[oddcounter-1]=array[i]; //1
        }
        else{
            evencounter++; //1
            even=realloc(even,evencounter*sizeof(int)); //
            even[evencounter-1]=array[i]; //2
            
        }
    }
    for(int i=0;i<oddcounter;i++){
        printf("%d",odd[i]);
    }
    printf("\n");
    
    for(int i=0;i<evencounter;i++){
        printf("%d",even[i]);
    }
    
    


    return 0;
}