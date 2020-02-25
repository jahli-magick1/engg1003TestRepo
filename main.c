#include <stdio.h>

int main()
{
    float x;
    float y;
    printf("4:");
    scanf("%f", &x); // Note change of %d to %f
    // Complete the y = line below
    y = 2*x+3*5;
    printf("y:%f\n",y);
    return 0;
}
