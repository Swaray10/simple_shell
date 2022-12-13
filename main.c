#include "main.h"

int main(int ac, char **argv)
{
    char *prompt = "(Eshell) $ ";
    char *lineptr = NULL, *lineptr_copy = NULL;
    size_t n = 0;
    ssize_t nchars_read;
    const char *delim = " \n"


    // declaring void variables
    (void)ac; (void)argv;

    //create an infinite loop 
    while (1){
      printf("%s", prompt);
      nchars_read = getline(&lineptr, &n, stdin);
        if(nchars_read == -1){
            printf("Exiting shell...\n");
            return (-1);
        }
      printf("%s\n", lineptr);
    }

  return (0);
}
