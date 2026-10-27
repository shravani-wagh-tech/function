#include<stdio.h>
void cylinder()
{
    float radius, height, volume;
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);
    volume = 3.14 * radius * radius * height;
    printf("The volume of the cylinder is: %f\n", volume);
}
int main()
{
    cylinder();
    return 0;
}