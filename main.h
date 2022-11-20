#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
#include <stdint.h>

int _putchar(char c);
int _printf(const char *format, ...);
void unsigned_no_to_str(uint64_t num, int base, char *buffer);
void no_to_str(int64_t num, int base, char *buffer);
void hexaupper(unsigned long x);
void flag_str(const char *s);
int state_checker(const char *format, va_list args);
int toLower(int chr);
int state_checker_dig1(const char *format, va_list args);
void print_number(int n);

#endif
