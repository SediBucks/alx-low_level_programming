#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 8 // password length
#define CHARS 
"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{};':\"\\|,.<>/?`~" 

/**
 * main -password.
 * Return: Always 0.
 */


int main() {
    srand(time(NULL)); 

    char password[LENGTH + 1];

    for (int i = 0; i < LENGTH; i++) {
        password[i] = CHARS[rand() % (sizeof(CHARS) - 1)];
    }

    password[LENGTH] = '\0';

    printf("Password: %s\n", password);
    return 0;
}
