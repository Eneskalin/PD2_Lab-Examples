#include <stdio.h>

/*Verilen bir dizi içindeki string ifadenin palindrom olup olmadığını kontrol eden rekürsif fonksiyon yazın*/

int palindromCheck(char str[],int k,int x);
int lenSentence(char str[]);

void main(){
    char str[100];
    int x=0;
    printf("Enter a sentence:");
    gets(str); //kabak
    int k= lenSentence(str);
    int result = palindromCheck(str,k,x);
    if (result==1)
    {
        printf(" Palindrome Number!!");
    }
    else{
        printf("Not Palindrome number");
    }
    

    

}

int lenSentence(char str[]){
    int n=0;
    while (str[n]!='\0')
    {
        n++;
    }
    return n; //5
}

int palindromCheck(char str[],int k,int x){
    if (x == k || x+1==k)
    {
        return 1;
    }
    
    if (str[x]!=str[k-1])
    {
       return 0;
    }
    else{
        return (palindromCheck(str,k-1, x+1));
    }
    
        

    
    
}
