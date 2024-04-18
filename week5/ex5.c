#include <stdio.h>
#include <stdlib.h> 

/* Soru 5: (Klavyeden girilen bir metnin icerisinde her harfin tekrar sayislnl bularak
ekrana yazdlran programm c kodunu yanruz. Örnek ekran GiktlSl yanda verilmi$ir.
Kelimenin tüm harflerinin büyük olduäunu varsaylruz. ASCII deäeri A=65)


Question 5: Write a C program that prints the number of pass of letters in a given
word from keyboard. Sample execution of your program should be as given beside.
Assume all letters of input are uppercase or lowercase (ASCII value of A=65)*/

int main(){
    char str[100],*ptr;
     int counter=1;
    printf("Enter a sentence: ");
    gets(str);
    ptr=&str;
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int  k = 1; str[k] != '\0'; k++)
        {
            if (str[i]==str[k])
        {
            counter++;

        }
        }
        printf("%c character used %d times\n",str[i],counter);
        counter=0;
    }
    

}

/*
#include <stdio.h>

int main(){
	
	
 	char message[50];
    int harfSayilari[26] = {0};
    printf("Kelimeyi Girebilirsiniz: ");
    
    scanf("%s", message);
	
	
	 for (int i = 0; message[i] != '\0'; i++) {
        
		char karakter = message[i];
        
        //if (karakter >= 'A' && karakter <= 'Z') {
        if(karakter>=65 && karakter<=90){ //ASCII CODE : A=> 65 Z=>90
		
            // Harfin ASCII degeri kullanilarak indeks belirlenir
            //int index = karakter - 'A'; // veya asagidaki yontem
			int index = karakter -65 ;
			
            // Harfin tekrar sayisini artir
            harfSayilari[index]++;
        }
    }

    // harfSayilari dizisini ekrana yazd�r
    for (int i = 0; i < 26; i++) {
        if (harfSayilari[i] > 0) {
            char harf = 'A' + i;
            printf("%c: %d Adet\n", harf, harfSayilari[i]);
        }
    }
}



*/