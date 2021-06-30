#include<stdio.h>

int main()
{
    int mark;

    printf("Enter Mark: ");
    scanf("%d",&mark);

    if(mark > 100 || mark < 0)
        printf("Invalid marks");

    else if(mark >= 80 && mark <= 100)
        printf("You got A");

    else if(mark >= 70 && mark <= 79)
        printf("You got A-");

    else if(mark >= 60 && mark <= 69)
        printf("You got B");

    else
        printf("You fail in the xm.");





    return 0;
}



