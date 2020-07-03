#include <stdio.h>
#include <cs50.h>

int collatz(int n, int count);

int main(void)
{
    int count = 1;
    int num = get_int("Enter number to do collatz operation : ");
    collatz(num,count);
    
}
int collatz(int n, int count)
{
    printf("%d->%d\n", count, n);
    if (n == 1)
    {
        return 0;
    }
    else if ((n % 2) == 0){
        count++;
        return collatz(n / 2, count);
    }
    else{
        count++;
        return collatz(3*n + 1 , count);
    }
}
