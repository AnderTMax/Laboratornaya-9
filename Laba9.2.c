#include <stdio.h>

int main(void)
{
    int K;
    printf("K:");
    scanf_s("%i", &K);

    printf("%i\n", (K + 3) % 7);

    return 0;
}