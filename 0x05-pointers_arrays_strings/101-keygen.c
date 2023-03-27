#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 100
#define MAX_ASCII_CODE 77
#define EXPECTED_PASSWORD "Tada! Congrats"

int main(void)
{
    int password[PASSWORD_LENGTH];
    int i, sum, remaining;
    char password_str[PASSWORD_LENGTH + 1];

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

    password_str[i + 1] = '\0';

    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password_str[i] = password[i] + '0';
    }

    if (strcmp(password_str, EXPECTED_PASSWORD) == 0) {
        printf("\nCongratulations! The password is correct.\n");
    } else {
        printf("\nSorry, the password is incorrect.\n");
    }

    return 0;
}

