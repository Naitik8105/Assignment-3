#include <stdio.h>

float Slope(int X1, int X2, int Y1, int Y2)
{
    float slope = (Y2 - Y1) / (X2 - X1);
    return slope;
}
int main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("Enter first point : ");
    scanf("%d %d",&x1,&y1);
    
    printf("Enter second point : ");
    scanf("%d %d",&x2,&y2);

    printf("Enter third point : ");
    scanf("%d %d",&x3,&y3);

    if((Slope(x1,x2,y1,y2))==(Slope(x2,x3,y2,y3)))
    {
        printf("These points fall on straight line.");
    }
    else
        printf("These points do not fall on sraight line.");

    return 0;    
}
