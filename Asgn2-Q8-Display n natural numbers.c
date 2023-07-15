//Fri, Jul 14 || Syed Mir Hussain || ECE-22-13
//Question: Display series: 1 2 3 4 5 .... n
#include <stdio.h>


int main()
{
    //var
    int i, n;

    //inp
    printf("Enter the value of n: ");
    scanf("%d", &n);

    //calc && otp
    for(i=1; i<=n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
