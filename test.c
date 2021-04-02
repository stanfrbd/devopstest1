#include <stdio.h>
#include <stdlib.h>

#include "colors/colors.h"

int main(void)
{
    print_info("Version-test\n");
    puts("Hello, world!");
    puts("New line");
    puts("Is my project running?");
    set_red("Trying to push without tag\n");
    print_passed("This time is will work with version-7.0\n");
    set_cyan("22:45\n");
    return 0;
}
