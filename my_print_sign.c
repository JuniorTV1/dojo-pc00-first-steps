#include <unistd.h>

void my_print_sign(int n)
{
    int sign;
    
    if (n < 0)
        sign = -1;
    else if (n > 0)
        sign = 1;
    else 
        sign = 0;
}