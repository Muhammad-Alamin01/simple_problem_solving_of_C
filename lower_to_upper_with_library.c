// lowercase to uppercase conversion with library function
#include<stdio.h>

int main()
{
    char lower, upper;

    printf("Enter any lowercase letter: ");
    scanf("%c",&lower);

    upper = toupper(lower);
    printf("The Uppercase letter: %c",upper);

    return 0;
}
