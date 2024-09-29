#include <stdio.h>
#include <math.h>
int fact(int m) {
    int i, f = 1;
    for (i = 1; i <= m; i++)
     {
        f = f * i;
    }
    return f;
}

int main() {
    int x, n, i;
    float rad, taylorSum = 0, librarySin;
    printf("Enter the angle in degrees: ");
    scanf("%d", &x);
    rad = x * M_PI / 180;
    printf("Enter the number of terms for Taylor series: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        taylorSum += (pow(-1, i) * pow(rad, 2 * i + 1)) / fact(2 * i + 1);
    }
    librarySin = sin(rad);
    printf("Calculated sin(%d) using Taylor series: %f\n", x, taylorSum);
    printf("Library sin(%d): %f\n", x, librarySin);

    return 0;
}