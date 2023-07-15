//Fri, Jul 14 || Syed Mir Hussain || ECE-22-13
//Question: Find product of series: 1 2 3 4 5 .... n
#include <stdio.h>

int main()
{
    //var and init
    int i, n, product = 1;

    //inp
    printf("Enter the value of n: ");
    scanf("%d", &n);

    //calc
    for(i=1; i<=n; i++)
    {
        product*=i;
    }

    //otp
    printf("Product = %d\n", product);
    return 0;
}
