//Fri, Jul 14 || Syed Mir Hussain || ECE-22-13
//Question: Using loops output the following:
//1
//12
//123
//1234

#include <stdio.h>

int main()
{
    //var
    int i, j;

    //calc and output
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
