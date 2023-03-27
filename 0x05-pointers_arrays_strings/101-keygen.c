#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 15

int main(void)
{
    int i;
    char password[PASSWORD_LENGTH + 1];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }

    password[PASSWORD_LENGTH] = '\0';

    printf("Generated Password: %s\n", password);

    if (strcmp(password, "Tada! Congrats") == 0) {
        printf("Success!\n");
    } else {
        printf("Wrong password\n");
    }

    return 0;
}

