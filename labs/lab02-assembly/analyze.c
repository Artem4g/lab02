#include <stdio.h>

int process_data(int limit, int multiplier)
{
    int total = 0;

    if (limit > 0) {
        for (int i = 1; i <= limit; i++) {
            total += i * multiplier;
        }
    } else {
        total = -1;
    }

    return total;
}

int main(void)
{
    int res = process_data(4, 3);
    printf("Result: %d\n", res);
    return 0;
}