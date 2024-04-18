#include <stdio.h>

/*Output?*/

int main(){
    int n=10,a=5,b=7;
    fun(n,a,b);
}

void fun(int n, int a, int b){
if (n <= 0)
return;
fun(n - 2, a, b + n);
printf("%d %d %d\n", n, a, b);
}