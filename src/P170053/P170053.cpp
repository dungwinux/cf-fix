#include <stdio.h>
#define ratio1 1.4142127
#define ratio2 1.4142132

int main()
{
    double n;
    scanf("%lf", &n);
    if (5000 < n && n < 6000)
        printf("%.2lf", n * ratio1);
    else
        printf("%.2lf", n * ratio2);
    return 0;
}