//Fri, Jul 14 || Syed Mir Hussain || ECE-22-13
//Question: Using loops output the following:
//1
//22
//333
//4444

#include <stdio.h>

int main()
{
    //var
    int i, j;

    //otp
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=i; j++)
        printf("%d", i);

        printf("\n");
    }
    return 0;
}
