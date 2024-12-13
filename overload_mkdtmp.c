#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <sys/stat.h>

char *mkdtemp(char *template)
{
    srand(time(NULL));
    int random = rand();
    char *number = malloc(128);
    snprintf(number, 20, "%d", random);
    char *local = malloc(128);
    //snprintf(local, 128, "%s%s", template, number);
    // Append the random number to the end of the template
    snprintf(local, 128, "./here_%s", number);
    //printf("local: %s\n", local);
    mkdir(local, S_IRWXU);
    return local;
}