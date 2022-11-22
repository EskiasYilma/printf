#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
#include <stdint.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * struct flags - structure
  * @c_flag: flag
  * @f: function associated
  */
typedef struct flags
{
	char *c_flag;
	char *(*f)();
} v_flags;

int _putchar(char );
int _printf(const char *, ...);
char *char_to_str(char);
int _strlen(char *);
void _xprintf(char *, unsigned int);
char *(*get_flags(char))(va_list);
void print_number(int);
int toLower(int chr);
void print_number(int n);
void rev_string(char *str1);
int buffer_mgmt(char *, int, char *, int, int *);
void unsigned_no_to_str(uint64_t, int, char *);
void unsigned_no_to_str_upper(uint64_t, int, char *);
char *_memcpy(char *, char *, unsigned int, unsigned int);
void no_to_str(int64_t, int, char *);
void hexaupper(unsigned long);
void flag_str(const char *);
int state_checker_dig1(const char *, va_list);
int state_checker_dig2(const char *, va_list);
int state_checker_adv(const char *, va_list);
int state_checker(const char *, va_list);
int state_checker_default(const char *, va_list);
char *flag_s(va_list);
char *flag_c(va_list);
char *flag_nil(char);
char *flag_i_d(va_list);
char *flag_percent(void);
#define BUFFER_SIZE 1024

#endif
