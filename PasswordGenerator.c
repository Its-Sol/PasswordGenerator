
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/*
Author: Sol medeiros de faria
Pronouns: It/its
Date: Somewhere in 2024 after the calculator project
Project name: Password generator
Purpose: Generate a random password with a length given by user
*/

char password[121];
int length;
char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-="; char random;

int main(){
    printf("How long do you want your password to be? ");
    scanf("%d", &length);

    if (length < 1 || length > 120){
        printf("Invalid length, please enter a length between 1 and 120.\n");
    return 1;
    }

    srand(time(NULL));
    for (int i = 0; i < length; i++){
    password[i] = characters[rand() % strlen(characters)];
    //random = "ABSZ"[rand() % 4]; another wayt to choose randomly between the string character 
    
    password[length] = '\0';
}
printf("Your password is %c", &password);

return 0;
}