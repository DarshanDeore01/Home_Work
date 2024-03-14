// Accept radius of a circle from the user. Find the area of the circle.
//[Formula: area = PI * radius * radius]  Note: Declare PI as constant  

#include <stdio.h>

#define PI 3.14159

int main() {
    double radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;

    printf("The area of the circle is: %.2lf\n", area);

    return 0;
}
