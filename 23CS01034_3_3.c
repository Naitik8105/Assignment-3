#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three sides of triangle a,b and c: ");
    scanf("%d %d %dd",&a,&b,&c);

    if((a+b)>=c && (b+c)>=a && (c+a)>=b)
    {
        printf("a,b and c are the sides of a triangle.");
    }
    else
    {
         printf("a,b and c are not the sides of a triangle.");
    }
    return 0;
}