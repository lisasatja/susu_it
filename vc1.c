#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;

    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distance between two points (%d, %d) and (%d, %d): %.2f\n", x1, y1, x2, y2, distance);

    return 0;
}
