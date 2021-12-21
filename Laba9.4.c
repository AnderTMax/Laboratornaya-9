#include <stdio.h>

int main(void)
{
    int A, B, C;
    printf("A:");
    scanf_s("%i", &A);

    printf("B:");
    scanf_s("%i", &B);

    printf("C:");
    scanf_s("%i", &C);

    printf("%i\n", (A / C) * (B / C));

    return 0;
}