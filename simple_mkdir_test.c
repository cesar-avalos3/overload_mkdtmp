#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void main()
{
    char template[] = "/tmp/tmpdir.XXXXXX";
    char *dirname = mkdtemp(template);
    if(dirname == 0)
    {
        perror("mkdtemp failed\n");
    }
    printf("dirname: %s\n", dirname);
}
