/*Make a while loop,
Get the length of password
Decide what character the password can have
Randomly choose the character on each slot
and print the password*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

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