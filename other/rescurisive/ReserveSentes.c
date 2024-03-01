#include <stdio.h>

//Reverse a sentence using recursion

void Reverse(char str[], int k);
int Len_Sentence(char str[]);

int main() {
    char str[100];
    printf("Enter a sentence:");
    gets(str);
    int k = Len_Sentence(str);
    Reverse(str, k);
    return 0;
}

int Len_Sentence(char str[]) {
    int k = 0;
    while (str[k] != '\0') {
        k++;
    }
    return k;
}

void Reverse(char str[], int k) {
    if (k == 0) {
        return;
    }
    printf("%c", str[k - 1]);
    Reverse(str, k - 1);
}


/*
 #include <stdio.h>
void reverseSentence();
int main() {
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}

void reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}


*/
