#include <stdio.h>

int fibonacci(int n);

// 0,1,1,2,3,4,5,6,8,13,21,34,....
// fibonacci(n)= fibonacci(n-1)+ fibonacci(n-2);

int fibonacci(int n)
{

    if (n == 1 || n == 2)
    {
        return n - 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n=10;
    printf("The value of fibonacci seriezs at %d is %d", n, fibonacci(n));

    return 0;
}
