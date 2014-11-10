#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
        // store key in variable k
        if (argv[1] == NULL) {
                printf("Please enter a number greater than 0 when executing the program\n");
                return 1;
        }
        int k = atoi(argv[1]);
        string p;
        if ( argc == 2 && k > 0) {
                // Prompt user for message and store in variable p
                printf("What message would you like to encrypt?\n");
                p = GetString();
        }
        else if ( k <= 0) {
                printf("Please enter a valid number that is greater than 0\n");
                return 1;
        }
        else {
                printf("Please enter only a number\n");
                return 1;
        }
        // Convert each character to its ASCII value, then add the key to each
        // Reconvert each new ASCII value back to a letter
        // Print new message
        for (int i = 0, n = strlen(p); i < n; i++)
        {
                if (isupper(p[i])) {
                        int L = p[i];
                        int v = L + k;
                        if (v > 90) {
                                int num = v - 65;
                                int new_num = num % 26;
                                v = new_num + 65;
                        }
                        char c = v;
                        printf("%c", c);
                }
                else if (islower(p[i])) {
                        int l = p[i];
                        int v = l + k;
                        if (v > 122) {
                                int num = v - 97;
                                int new_num = num % 26;
                                v = new_num + 97;
                        }
                        char c = v;
                        printf("%c", c);
                }
                else {
                        printf("%c", p[i]);
                }
        }
        printf("\n");
}
