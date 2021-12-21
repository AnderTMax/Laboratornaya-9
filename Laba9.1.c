#include <stdio.h>

int main(void)
{
    int N;
    printf("N:");
    scanf_s("%i", &N);

    printf("%i\n", (N % (60 * 60)) / 60);

    return 0;
}