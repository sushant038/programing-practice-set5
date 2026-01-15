#include <stdio.h>
// sum(n)=1+2+3+4+5.....+n
// sum(n)= sum(n-1)+n;

int sum_natural(int);

int sum_natural(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return sum_natural(n - 1) + n;
}
int main()
{ int sum=0;
    int n=10;

    printf("The sum of  10 numbers numbers  is %d\n",sum_natural(n));

    return 0;
}
