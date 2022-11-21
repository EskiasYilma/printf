#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
#include <stdint.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUF_SIZE 1025

int _putchar(char c);
int _printf(const char *format, ...);
int toLower(int chr);
void print_number(int n);
void rev_string(char *str1);
void unsigned_no_to_str(uint64_t num, int base, char *buffer);
void unsigned_no_to_str_upper(uint64_t num, int base, char *buffer);
void print_number(int n);
void no_to_str(int64_t num, int base, char *buffer);
void hexaupper(unsigned long x);
void flag_str(const char *s);
int state_checker(const char *format, va_list args);
int state_checker_dig1(const char *format, va_list args);
int state_checker_dig2(const char *format, va_list args);
int state_checker_adv(const char *format, va_list args);
int state_checker_default(const char *format, va_list args);

#endif
