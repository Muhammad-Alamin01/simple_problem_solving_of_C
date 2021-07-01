// Uppercase to lowercase conversion without library function
#include<stdio.h>

int main()
{
    char upper;

    printf("Enter any Uppercase letter: ");
    scanf("%c",&upper);

    printf("The Uppercase letter: %c",upper + 32);


    return 0;
}

