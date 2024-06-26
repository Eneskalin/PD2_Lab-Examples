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
Accordingn to given information solve the questions below. 
1-Banka müşterilerinden Hesabındaki para miktarı (Depozitoları) sıfırdan az olan kaç müşterinin olduğunu 
döndüren bir fonksiyon yazınız. Fonksiyonunuzu ana menüden çağırınız.  
Function prototype: int listIndebtedAccounts(FILE *); 
1- Write a function having prototype given below that returns how many customers stored in the file 
whose deposit is less than zero. Call your function from main function within a menu. 
Function prototype: int listIndebtedAccounts(FILE *); */

typedef struct customer
{
    int account;
    char surname[25];
    char name[20];
    double deposit;
}customer;

int listIndebtedAccounts(FILE *);

int main(){
    FILE *fileptr;
    fopen("musteri.dat","a+");
    printf("%d",listIndebtedAccounts(fileptr))

    
}

int listIndebtedAccounts(FILE *fileptr){
    int  counter=0;
    customer empty={0,"","",0};
    fseek(fileptr,0,SEEK_SET);

    while (!feof(fileptr))
    {
        fread(&empty,sizeof(customer),1,fileptr);
        if (empty.deposit < 0)
        {
            counter ++;
        }
        
    }
    
    return counter;
}