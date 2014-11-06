#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, string argv[])
{
  // store key in variable k
  int k = atoi(argv[1]);
  string p;
  printf("%d", argc);
  if ( argc == 2 && k > 0)
    {
      // Prompt user for message and store in variable p
      printf("What message would you like to encrypt?\n");
      p = GetString();
    }
  else if ( k <= 0)
    {
      printf("Please enter a valid number that is greater than 1\n");
    }
  else
    {
      printf("Please enter only a number\n");
    }
  // Convert each character to its ASCII value, then add the key to each
  

  // Reconvert each new ASCII value back to a letter

  // Print new message
}
