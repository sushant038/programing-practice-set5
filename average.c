#include <stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}
int main()
{
    int a = 3;
    int b = 6;
    int c = 5;

    printf("The averge of a, b and c is %f", average(a, b, c));
    return 0;
}
