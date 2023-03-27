#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
    int sum = 0, i = 0, random;
    char password[PASSWORD_LENGTH + 1];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=";

    srand(time(NULL));

    while (sum < PASSWORD_LENGTH) {
        random = rand() % (sizeof(charset) - 1);
        if (sum + random > PASSWORD_LENGTH) {
            continue;
        }
        password[i] = charset[random];
        i++;
        sum += random;
    }

    password[PASSWORD_LENGTH] = '\0';

    printf("Generated Password: %s\n", password);

    return 0;
}

