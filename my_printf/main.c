#include "myprintf.h"

void ItoaBasePrint(char base,...);
int my_printf(char * restrict str, ...);

int main()
{
    my_printf("%s%s%s%s%s\n","H","E","L","L","O");
    return 0;
}