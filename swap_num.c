#include<stdio.h>

int main()
{
    int a,b,temp;

    a = 5;
    b = 10;
    printf("a = %d & b = %d\n",a,b);

    // swap number with temp variable
    temp = a;
    a = b;
    b = temp;
    printf("a = %d & b = %d",a,b);

/*
 swap number without temp variable
    a = a - b;
    b = a + b;
    a = b - a;

*/
    return 0;
}
