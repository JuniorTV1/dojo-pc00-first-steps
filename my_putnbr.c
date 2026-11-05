#include <unistd.h>

void my_putnbr(int n)
{
    write(1, &n, 1);
}