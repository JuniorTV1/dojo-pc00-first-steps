#include <unistd.h>

void my_putnbr(int n)
{

 if (n < 0)
     {
        write(1, "0", 1);
     }

}