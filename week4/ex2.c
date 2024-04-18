#include <stdio.h>

/*Kodun ciktisi nedir?*/

int main(){
    int ary[4]={1,2,3,4}; //&ary=11110 11114 11118 111112 111116
    int *p =ary+2;  // p=11118 =>3
    printf("%d %d \n",p[-2],ary[*p]); // p[0]=11110 => 1  p[3]=>4  1 4 
}
   