#include <unistd.h>

void my_print_sign(int n)
{
    char sign;
    
    if (n < 0)
        sign = -1;
    else if (n > 0)
        sign = 1;
    else 
        sign = 0;

    write(1, &sign, 1);
    write(1, "\n", 1);
}