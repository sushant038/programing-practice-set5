#include <stdio.h>

float c2f(float c);

float c2f(float c)
{
    return ((9 * c) / 5) + 32;
}
int main()
{
    float  c=45;

    printf("celsius to fahrenheit for %f is %f",c, c2f(c));
    return 0;
}
