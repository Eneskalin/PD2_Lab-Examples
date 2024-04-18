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

/*
    #include <stdio.h>

int terstenYazdir(int *p1,int boyut){
	int i=0;
	for(i=boyut-1;i>=0;i--)
		printf("%d\n",*(p1+i));
		
	
}
int main(){
	int sayilar[5] = {1,2,3,4,5};
	terstenYazdir(sayilar,5);
}


*/