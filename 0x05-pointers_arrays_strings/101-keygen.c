#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -password.
 * Return: Always 0.
 */

int main(void)
{
    char password[PASSWORD_LENGTH + 1];  // add one to include null terminator
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=";

    srand(time(NULL));

    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = charset[rand() % sizeof(charset)];
    }

    password[PASSWORD_LENGTH] = '\0';

    printf("Random Password: %s\n", password);

    return 0;
}
