#include <stdio.h>
#include <stdlib.h>

/*Bir bankanın 20 müşterisine ait bilgiler, aşağıda verilen struct yapısı kullanılarak musteri.dat isimli rastgele 
erişimli bir dosya da saklanmaktadır. 
Information for 20 customers of a bank is stored in a random Access file named musteri.dat using the struct 
given below. 
struct customer{ 
int account; 
char surname[25]; 
char name[20]; 
double deposit; 
}; 
Verilen bilgilere göre aşağıdaki fonksiyonların yazınız. 
3- Müşterilerinin tüm bilgilerini, hesabı 300'den büyük veya ona eşit olan “list.txt” adında sıralı bir erişim 
dosyasına aktaran fonksiyonu yazınız. 
Function prototype: void transferRecords(FILE *); 
3- Write a function having prototype given below that transfers all information of customers into a 
sequential access file named “list.txt” whose deposit is greater than or equal to 300 . Call your function 
from main function within a menu. 
Function prototype: void transferRecords(FILE *);  */

typedef struct customer
{
    int account;
    char surname[25];
    char name[20];
    double deposit;
}customer;

findMaxDeposit(FILE *);
int main(){
    FILE *fileptr;
    fopen("musteri.dat","a+");
    printf("%d",listIndebtedAccounts(fileptr))

    
}

findMaxDeposit(FILE *fileptr){
    customer empty,max={0,"","",0};
    fread(&max,sizeof(customer),1,fileptr);
    fseek(fileptr,0,SEEK_SET);

    while (!feof(fileptr))
    {
        fread(&empty,sizeof(customer),1,fileptr);
        if (empty.deposit > max.deposit)
        {
            max=empty;
        }
        
    }

    return max;
    
}