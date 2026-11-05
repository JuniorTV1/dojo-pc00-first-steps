#include <unistd.h>

void my_print_alphabet(void)
{
    write(1, "abcdefghijklmnopqrstuvwxyz", 26);
    write(1, "\n", 1);
}