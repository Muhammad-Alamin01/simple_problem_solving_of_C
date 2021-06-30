#include<stdio.h>

int main()
{
    char ch;

    printf("Enter any letter\t");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z')
        printf("%c is Capital letter.",ch);

    else if(ch >= 'a' && ch <= 'z')
        printf("%c is small letter.",ch);

    else
        printf("Not a letter");

    return 0;
}

