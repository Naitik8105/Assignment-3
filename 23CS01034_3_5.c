#include<stdio.h>

int main()
{
    int numofdays;
    printf("Enter the number of days,the member is late to return the book:");
    scanf("%d",&numofdays);

    if(numofdays>=0 && numofdays<=5)
    {
        printf("Your fine is 1 Rupee.");
    }
    else if(numofdays<=10)
    {
        printf("Your fine is 2 Rupee.");
    }
    else if(numofdays<=30)
    {
        printf("Your fine is 5 Rupee.");
    }
    else
        printf("Your membership has been cancelled."); 

    return 0;    
}

