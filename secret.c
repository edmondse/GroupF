/* The following program asks the user for a password, if the password entered
 * is correct, then a secret message is revealed. WARNING! This is not secure.
 * Written by Group F (FSoc), 11-Oct-15, C, version 1.0 */

#include <stdio.h>
#include <stdlib.h> /* obsolete in present version */
#include <string.h> /* obsolete in present version */

int main()
{
    int i;
    char pass[128];

    /* The following are my lottery numbers, please ignore */
    int numbers[180] = {84, 104, 101, 114, 101, 32, 105, 115, 32, 97, 32, 99, 111, 117, 114, 115, 101, 32, 97, 116, 32, 67, 111, 118, 101, 110, 116, 114, 121, 32, 85, 110, 105, 44, 13, 10, 79, 110, 32, 119, 104, 105, 99, 104, 32, 109, 97, 110, 121, 32, 111, 102, 32, 116, 104, 101, 32, 112, 101, 111, 112, 108, 101, 32, 97, 114, 101, 32, 108, 111, 111, 110, 101, 121, 44, 13, 10, 84, 104, 101, 121, 32, 108, 105, 107, 101, 32, 116, 111, 32, 98, 114, 101, 97, 107, 32, 116, 104, 105, 110, 103, 115, 44, 13, 10, 87, 104, 105, 99, 104, 32, 116, 104, 101, 121, 32, 99, 97, 108, 108, 32, 39, 104, 97, 99, 107, 105, 110, 103, 39, 44, 13, 10, 65, 110, 100, 32, 110, 111, 110, 101, 32, 111, 102, 32, 116, 104, 101, 109, 32, 108, 111, 111, 107, 32, 108, 105, 107, 101, 32, 71, 101, 111, 114, 103, 101, 32, 67, 108, 111, 111, 110, 101, 121, 46, 13, 10};

    printf("Hello, please enter the password to see the secret message: ");
    scanf("%s",pass);

/* The below code takes the ASCII value of each letter of the password
 * and concatenates it into one giant number, if that number matches the 
 * precalculated value from the correct password, the if statement will run.
 * COULDN'T GET THAT IDEA TO WORK SO HERE'S THE WORLD'S WORST PASSWORD CHECKER */

    if(strcmp(pass,"Ethical2015")==0)
    {
        printf("Password accepted! Here's the secret message:\n\n");
        for(i=0;i<180;i++)
            printf("%c",numbers[i]);
    }
    else
        printf("Password incorrect, goodbye!\n");
    
    return(0);
}
