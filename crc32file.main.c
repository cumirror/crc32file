#include <stdio.h>
#include "crc32file.h"

main(int argc, char *argv[])
{
        unsigned long crc32val;

        crc32val = Crc32_file(argv[1]);
        printf("+%s, %08X\n", argv[1], crc32val);
}
