#include <math.h>
#include <stdio.h>

void main() {
    float initialVelocity, finalVelocity, distance, acceleration, time, distance;
    float a, b, c, p;

    printf("Enter the initial velocity, acceleration and time: ");
    scanf("%f %f %f", &initialVelocity, &acceleration, &time);

    printf("The final velocity would then be: %f", (initialVelocity + acceleration * time));

    distance = (initialVelocity * time) + (0.5 * acceleration * time * time);
    printf("The distance would then be: %f", distance);

    printf("Enter the values of a, b and c: ");
    scanf("%f", &a, &b, &c);

    float T = 2 * a + sqrtf(b) + 9 * c;
    printf("The value of T would then be: %f", T);

    printf("Enter the value of h and b: ");
    scanf("%f %f", b, p);

    float H = sqrtf((b * b) + (h * h));
    printf("The value of H would then be %f", H);
}
