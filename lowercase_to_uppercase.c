// lowercase to uppercase conversion without library function
#include<stdio.h>

int main()
{
    char lower;

    printf("Enter any lowercase letter: ");
    scanf("%c",&lower);

    printf("The Uppercase letter: %c",lower - 32);


    return 0;
}
