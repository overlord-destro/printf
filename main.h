#ifndef MAIN_H
#define MAIN_H
/**
*struct print - struct for printing
*@t: type to print
*@f: function to print
*/
#include <stdarg.h>

typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _printf(const char *format, ...);
int _putchar(char);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);












#endif
