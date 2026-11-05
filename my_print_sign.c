#include <unistd.h>

void my_print_sign(int n)
{
    char sign;
    
   while (n > 0)
   {
        sign = '+';
   }
    while (n < 0)
    {
        sign = '-';
    }

    write(1, &sign, 1);
    write(1, "\n", 1);
}