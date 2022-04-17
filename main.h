#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg>

/**
 * struct flags - struct containing flags
 * @plus: flag for +
 * @space: flag for ' '
 * @hash: flag for #
 */
typedef struct flags
{
	int plus, space, hash;
} flags_t;

/**
 * struct printHandler - struct to choose right function
 * @c: format specifier
 * @f: pointer to correct printing
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;

/* print_nums*/
int print_int(va_list l, flags_t *f);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f);
int count_digit(int i);

/*print_bases*/
int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);

/*print_alpha*/
int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);

/*write functions*/
int _putchar(char c);
int _puts(char *str);

/*print custom*/
int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);
/*converting*/
char *convert(unsigned long int num, int base, int lowercase);
/*_printf*/
int _printf(const char *format, ...);
/*get_print*/
int (*get_print(char s))(va_list, flags_t *);
/*get flag**/
int get_flag(char s, flags_t *f);
/*print address*/
int print_address(va_list l, flags_t *f);
/*print percent*/
int print_percent(va_list l, flags_t *f);

#endif
