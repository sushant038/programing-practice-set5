#include <stdio.h>

float fore(float mass);

float force(float mass)
{
    return mass * 9.8;
}
int main()
{
    float m = 45;

    printf("The value of force is %.2f\n", force(m));

    return 0;
}
