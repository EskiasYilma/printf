#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
#include <stdint.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUF_SIZE 1024

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

int _printf(const char *format, ...);
char *char_to_str(char);
int _strlen(char *s);
void _xprintf(char *buffer, unsigned int buf_size);
char *(*get_flags(char s))(va_list);
int buffer_mgmt(char *hold, int hlen, char *buffer, int blen, int *total);
void print_number(int n);
int toLower(int chr);
void print_number(int n);
void rev_string(char *str1);
void unsigned_no_to_str(uint64_t num, int base, char *buffer);
void unsigned_no_to_str_upper(uint64_t num, int base, char *buffer);
char *_memcpy(char *dest, char *src, unsigned int n, unsigned int bufferlen);
void no_to_str(int64_t num, int base, char *buffer);
void hexaupper(unsigned long x);
void flag_str(const char *s);
int state_checker(const char *format, va_list args);
int state_checker_dig1(const char *format, va_list args);
int state_checker_dig2(const char *format, va_list args);
int state_checker_adv(const char *format, va_list args);
int state_checker_default(const char *format, va_list args);
char *flag_c(va_list);
char *flag_s(va_list);
char *flag_nil(char c);
char *flag_percent(void);
char *flag_i_d(va_list);




#endif
