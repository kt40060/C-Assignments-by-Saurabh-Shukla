#include <stdio.h>
#include <conio.h>
#define PI 3.14159

int main()
{
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("Area of the circle: %.2f\n", area);
    getch();
    return 0;
}
