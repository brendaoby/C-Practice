//Program find the area of a circle

#include <stdio.h>
#define PI 3.14
#define areaofcircle(x) ((PI)*(x)*(x))

int main()
{
    int radius;
    float area;
    printf("Enter radius of circle: ");
    scanf("%d", &radius);
    area = areaofcircle(radius);
    printf("\nArea of circle with radius %d is %f", radius, area);
    return 0;
}
