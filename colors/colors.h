#ifndef COLORS_H
#define COLORS_H

#include <stdio.h>
#include <stdlib.h>

/*
 *
 * Black \033[0;30m
 * Red \033[0;31m
 * Green \033[0;32m
 * Yellow \033[0;33m
 * Blue \033[0;34m
 * Purple \033[0;35m
 * Cyan \033[0;36m
 * White \033[0;37m
 *
 */

void set_default();

void set_red(char *input);

void set_green(char *input);

void set_yellow(char *input);

void set_blue(char *input);

void set_purple(char *input);

void set_cyan(char *input);

void print_passed(char *input);

void print_failed(char *input);

void print_info(char *input);

#endif