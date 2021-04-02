#include "colors.h"

#include <stdio.h>

void set_default()
{
    printf("\033[0m");
}

void set_red(char *input)
{
    printf("\033[1;31m");
    printf("%s", input);
    set_default();
}

void set_green(char *input)
{
    printf("\033[0;32m");
    printf("%s", input);
    set_default();
}

void set_yellow(char *input)
{
    printf("\033[1;33m");
    printf("%s", input);
    set_default();
}

void set_blue(char *input)
{
    printf("\033[0;34m");
    printf("%s", input);
    set_default();
}

void set_purple(char *input)
{
    printf("\033[0;35m");
    printf("%s", input);
    set_default();
}

void set_cyan(char *input)
{
    printf("\033[36m");
    printf("%s", input);
    set_default();
}

void print_passed(char *input)
{
    printf("[");
    set_green("PASSED");
    printf("] ");
    set_green(input);
}

void print_failed(char *input)
{
    printf("[");
    set_red("FAILED");
    printf("] ");
    set_red(input);
}

void print_info(char *input)
{
    printf("[ ");
    set_yellow("INFO");
    printf(" ] ");
    set_yellow(input);
}