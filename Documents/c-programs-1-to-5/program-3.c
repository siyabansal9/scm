#include <stdio.h>

void main() {
float radius, circumference, area;

printf("Enter the radius of the circle: ");
scanf("%f", &radius);

area = 3.14 * radius * radius;
circumference = 2.0 * 3.14 * radius;

printf("The Area of the circle with radius %f is %f\n", radius, area);
printf("The Circumference of the circle with radius %f is %f\n", radius, circumference);
}
