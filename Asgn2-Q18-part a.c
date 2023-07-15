//Fri, Jul 14 || Syed Mir Hussain || ECE-22-13
//Question: Using loops output the following:
//            *
//            **
//            ***
//            ****

#include <stdio.h>

int main()
{
    //var
    int i, j;

    //output
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
