/* Secret message program. Enter the correct password to descramble 
 * the message, otherwise we hope you enjoy your eggs buttery and mixed.
 * Written by Group F (FSoc), 01-Nov-15, C, version 2.0 */

#include <stdio.h>

int main()
{
    int n, i = 0;
    char pass[64];

    /* The following are my lottery numbers, please ignore */
    int lotto[155] = {138, 162, 65, 153, 177, 162, 147, 138, 79, 167, 172, 65, 142, 172, 169, 154, 139, 156, 152, 171, 149, 69, 160, 89, 161, 137, 161, 156, 173, 149, 81, 76, 67, 130, 142, 144, 167, 93, 138, 147, 162, 165, 163, 138, 148, 151, 93, 149, 141, 164, 89, 150, 139, 144, 151, 162, 147, 69, 165, 162, 154, 139, 79, 90, 160, 147, 158, 175, 173, 85, 82, 60, 61, 127, 150, 153, 95, 168, 163, 152, 79, 148, 177, 149, 138, 172, 169, 162, 153, 79, 148, 177, 65, 105, 132, 140, 90, 51, 57, 133, 162, 148, 154, 171, 173, 147, 138, 79, 156, 171, 65, 134, 95, 166, 147, 153, 162, 95, 74, 43, 121, 167, 158, 78, 137, 158, 151, 162, 65, 156, 160, 172, 78, 151, 164, 156, 177, 134, 69, 178, 162, 155, 150, 155, 172, 93, 148, 141, 168, 173, 92, 51, 57, 51, 61};

    printf("Hello, please enter the password to see the secret message: ");
    scanf("%s",pass);
    putchar('\n');

    for(n=0;n<155;n++)
    {
        if(pass[i]=='X')
        {
            i = 0;
            printf("%c",lotto[n]-pass[i]);
            i++;
        }
        else
        {
            printf("%c",lotto[n]-pass[i]);
            i++;
        }
    }
    putchar('\n');
    return(0);
}
