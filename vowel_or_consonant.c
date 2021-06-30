#include<stdio.h>

int main()
{
    char ch;

    printf("Enter any letter: \t");
    scanf("%c",&ch);

    if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' ||
       ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
        printf("%c is Vowel",ch);
    else
        printf("%c is Consonant",ch);

    return 0;
}


