//Fri, Jul 14 || Syed Mir Hussain || ECE-22-13
//Question: Using loops output the following:
//   1
//  21
// 321
//4321

#include <stdio.h>

int main()
{
    //var
    int i, j, k;

    //otp
    for(i=1; i<=4; i++)
    {
        for(j=i; j<4; j++)
        printf(" ");

        for(k=i; k>=1; k--)
        printf("%d", k);

        printf("\n");
    }
    return 0;
}
