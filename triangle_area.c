// If there sides of a triangle are given, determine it's area
#include<stdio.h>

int main()
{
    double a,b,c,s,area;

    printf("Enter there sides of triangle: ");
    scanf("%lf %lf %lf",&a, &b, &c);

    s = (a+b+c)/2;

    area = sqrt(s*(s-a)*(s-b)*(s-b));

    printf("Area of triangle = %.2lf",area);



    return 0;
}
