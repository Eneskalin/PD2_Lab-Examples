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
2-Müşteri bilgilerini, hesabında maksimum para tutarına sahip olacak şekilde döndüren bir fonksiyon 
yazınız. Hesabındaki para miktarı sıfırdan az olan dosyada kaç müşteri saklanır. 
Function prototype: struct customer findMaxDeposit(FILE *); 
2- Write a function having prototype given below that returns the customer information as a struct that has 
maximum amount of money in his account.how many customers stored in the file whose deposit is less 
than zero. Call your function from main function within a menu. 
Function prototype: struct customer findMaxDeposit(FILE *);  */

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