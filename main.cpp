#include "add-nbo.h"
#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <netinet/in.h>

int main(int argc, char **argv)
{
    if (argc < 3)
    {
        printf("Usage: ./add-nbo file1 file2\n");
        return 0;
    }
    uint32_t num1,num2;
    num1 = get_number(argv[1]);
    num2 = get_number(argv[2]);
    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n",num1,num1,num2,num2,(num1+num2),(num1+num2));
    return 0;
}