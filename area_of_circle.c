#include <stdio.h>
#include <math.h>
int main()
{
    const float pi = 3.1416;
    float radius, area;
    printf("Input Radius Of The Circle: ");
    scanf("%f", &radius);
    area = pi*pow(radius,2);
    printf("Area Of The Circle: %f", area);
    return 0;
}
