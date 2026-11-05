#include <unistd.h>

void my_print_alphabet_reverse(void)
{
    write(1, "ZYXWVUTSRQPONMLKJIHGFEDCBA", 26);
    write(1, "\n", 1);
}