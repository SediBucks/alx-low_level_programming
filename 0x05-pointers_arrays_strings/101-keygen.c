#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -password.
 * Return: Always 0.
 */

int main(void)
{
    char password[9]; 
    const char charset[] = "abcdefghijklmnopqrstuvwxyz0123456789";
    srand(time(NULL)); 

    for (int i = 0; i < 8; i++) {
        password[i] = charset[rand() % 36];
    }

    password[8] = '\0'; 

    printf("Random Password: %s\n", password);

    return 0;
}

