#include <unistd.h>

void my_print_sign(int n)
{
    void sign;
    
    if (n < 0)
        sign = -1;
    else if (n > 0)
        sign = 1;
    else 
        sign = 0;
}