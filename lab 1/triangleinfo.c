#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[] ) {
    double side1, side2, side3;

    printf("Enter side 1: ");
    scanf("%lf", &side1);

    printf("Enter side 2: ");
    scanf("%lf", &side2);

    printf("Enter side 3: ");
    scanf("%lf", &side3);

    double s = (side1 + side2 + side3) / 2;
    double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

    int max;
    if (side1 > side2) {
        if (side1 >= side3) {
            max = side1;
        }
        else if (side1 < side3) {
            max = side3;
        }
    }
    else if (side1 < side2) {
        if (side2 >= side3) {
            max = side2;
        }
        else if (side2 < side3) {
            max = side3;
        }
    }
    else if (side1 == side2) {
        if (side1 >= side3) {
            max = side1;
        }
        else if (side1 < side3) {
            max = side3;
        }
    }

    /*no sides are equal*/
    if ((side1 != side2) && (side2 != side3) && (side1 != side3)) {
        
        if (max == side1) {
            if ((side2 + side3) < side1) {
                printf("Impossible\n");
            }
            else {
                printf("Scalene\n");
                printf("Area: %lf\n", area);
            }
        }
        else if (max == side2) {
            if ((side2 + side3) < side2) {
                printf("Impossible\n");
            }
            else {
                printf("Scalene\n");
                printf("Area: %lf\n", area);
            }
        }
        else if (max == side3) {
            if ((side1 + side2) < side3) {
                printf("Impossible\n");
            }
            else {
                printf("Scalene\n");
                printf("Area: %lf\n", area);
            }
        }
    }

    /*at least 2 sides are equal*/
    if ((side1 == side2) || (side2 == side3) || (side1 == side3)) {
        if ((side1 == side2) && (side2 == side3)) {
            printf("Equilateral\n");
            printf("Isosceles\n");
            printf("Area: %lf\n", area);
        }
        else {
            if (max == side1) {
                if (side2 + side3 < side1) {
                    printf("Impossible\n");
                }
            }
            else if (max == side2) {
                if (side1 + side3 < side2) {
                    printf("Impossible\n");
                }
            }
            else if (max == side3) {
                if (side1 + side2 < side3) {
                    printf("Impossible\n");
                }
            }
            else {
                printf("Isosceles\n");
                printf("Area: %lf\n", area);
            }
        }
    }

    return 0;
} 