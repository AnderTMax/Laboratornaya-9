#include <stdio.h>

int main(void)
{
    int K, N;
    printf("K:");
    scanf_s("%i", &K);

    printf("N:");
    scanf_s("%i", &N);


    printf("%i\n", ((K + N - 2) % 7) + 1);

    return 0;
}