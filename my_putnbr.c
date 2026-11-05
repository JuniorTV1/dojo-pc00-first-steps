#include <unistd.h>

void my_putnbr(int n)
{
    int i = 0;

    if (n == 0)
    {
        write(1, "0", 1);
        return;
    }

}