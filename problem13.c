#include <stdio.h>
int main()
{
    int a;
    float r, l, b, r2, area1, area2, area3;

    printf("1.Area of circle\n2.Area of rectangle\n3.Area of Sphere\n");
    printf("Enter your choice: ");
    scanf("%d", &a);

    switch (a)

    {
    case 1:

        printf("Enter radius of the circle ");
        scanf("%f", &r);
        area1 = (3.14 * r * r);
        printf("Area of your circle is %f", area1);
        break;

    case 2:

        printf("Enter length and breadth of the rectangle ");
        scanf("%f %f", &l, &b);
        area2 = (l * b);
        printf("Area of your rectangle is %f", area2);
        break;

    case 3:

        printf("Enter radius of the sphere ");
        scanf("%f", &r2);
        area3 = (4 * 3.14 * r2 * r2 * r2) / 3;
        printf("Area of your sphere is %f", area3);
        break;

    default:

        printf("Wrong input");
        break;
    }

    return 0;
}