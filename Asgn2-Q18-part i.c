//Fri, Jul 14 || Syed Mir Hussain || ECE-22-13
//Question: Using loops output the following:
//1
//01
//101
//0101

#include <stdio.h>

int main()
{
    //var
    int i, j;

    //otp
    for(i=1; i<=4; i++)
    {

        for(j=1; j<=i; j++)
        {
            if((i%2==0 && j%2!=0) || (i%2!=0 && j%2==0))
            printf("0");
            else
            printf("1");
        }
        printf("\n");

    }
    return 0;
}
