#include <unistd.h>

void my_print_digits(void)
{
    write(1, "0-1-2-3-4-5-6-7-8-9", 19);
    write(1, "\n", 1);
}