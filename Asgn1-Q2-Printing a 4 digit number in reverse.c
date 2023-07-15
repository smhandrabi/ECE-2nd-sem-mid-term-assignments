//Fri, Jul 14 || Syed Mir Hussain || ECE-22-13
//Question: Printing a 4-digit number in reverse.

#include <stdio.h>

int main()
{
    //variables and initialization
    int num, inp_num, rev_num = 0, digit;
    
    //input
    printf("Enter a 4-digit number: ");
    scanf("%d", &inp_num);
    
    //calculations
    num = inp_num;
    while(num>0)
    {
        digit = num%10;
        rev_num = (rev_num * 10) + digit;
        num = num/10;
    }
    
    //output
    printf("Your number in reverse: %d\n", rev_num);
    if(inp_num==rev_num)
    printf("Your number is a palindrome.");
    
    return 0;
}
