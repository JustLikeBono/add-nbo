#include "add-nbo.h"
#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <netinet/in.h>

uint32_t get_number(char *filename)
{
    uint32_t result;
    uint32_t fd;
    fd = open(filename,O_RDONLY);
    read(fd,&result,sizeof(result));
    if(fd != 0)
        result = ntohl(result);
    close(fd);

    return result;
}
