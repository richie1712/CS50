#include <stdio.h>
#include <cs50.h>

int fib(int n);

int main(void)
{
    int num = get_int("Enter the nth element : ");
    printf("%d \n", fib(num));
}
int fib(int n)
{
    if (n <= 1)
        return n;
    else
        return fib(n - 1) + fib(n - 2); 
}
