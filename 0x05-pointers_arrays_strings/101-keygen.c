#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 100
#define MAX_ASCII_CODE 77

int main(void)
{
    int password[PASSWORD_LENGTH];
    int i, sum, remaining;

    sum = 0;
    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = rand() % MAX_ASCII_CODE;
        sum += password[i];
        putchar(password[i] + '0');
        if (sum >= 2772) {
            remaining = 2772 - sum + password[i];
            putchar(remaining + '0');
            break;
        }
    }

    return 0;
}

