#include <unistd.h>

void my_putnbr(int n)
{
    char c;

    if (n == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }
    if (n >= 10)
    {
        my_putnbr(n / 10);
    }
    c = n % 10 + '0';
    write(1, &c, 1);

}