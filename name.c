#include <stdio.h>
#include <string.h>
int main(int argc, char **argv) {
   char greeting[32];
   strcpy(greeting, "Hello ");
   strcat(greeting, argv[1]);
   puts(greeting);
   return (0);
}