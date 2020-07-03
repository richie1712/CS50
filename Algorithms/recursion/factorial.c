#include <stdio.h>
#include <cs50.h>

int fact (int n);

int main(void)
{
    int num = get_int("Enter number to do factorial: ");
    int factorial = fact(num);
    printf("\n%d\n", factorial);
}
int fact(int n)
{
    if(n == 1 )
        return 1;
    else
        return n * fact(n-1);
}
