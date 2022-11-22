# Printf Team Project
![Latest commit](https://img.shields.io/github/last-commit/EskiasYilma/printf?style=round-square)


This team project is a custom made printf function for the C programming language called printf (https://man7.org/linux/man-pages/man3/printf.3.html) function. It has been optimized to take various inputs and optional arguments based exactly on how the standard library function printf works. We submitted this as part of the ALX software engineering course requirement for grading.

**Synopsis**
This function '_printf' writes output to stdout, the standard output stream with the format and options without making use of any of the standard library files. It was written to use a local buffer of 1024 bytes when printing although it can print larger sets of data.

The '_printf' function returns the total number of characters printed to the stdout(excluding the null byte at the end of strings) after a successful execution.

If an output error is encountered, a negative value of -1 is returned.

The prototype of this function is:  **int _printf(const char *format, ...);***

This means that it has one mandatory format argument, and an extra number of arguments that can be none, or many.

**Format of the format string**

The format string is a character string starting and ending with double quotes. The format string is composed of zero or more directives; ordinary characters (not %), and conversion specifications, each of which results in fetching zero or more subsequent arguments. 

Each conversion specification is introduced by the character **%** and ends with a **conversion specifier**. In between there may be (in this order):

**The conversion specifier**

|Specifier| Description |
|--|--|
|**d, i**|The argument **int** is converted to a signed decimal notation. If precision is present,it gives the minimum number of digits that must appear; if the converted value requires fewer digits, then it is padded with zeros on the left. Default precision is 1.|
|**c**|The  int argument is converted to an unsigned char and the resulting character is written. The representation of characters is based off the ASCII coding.|
|**s**|The argument received is expected to be a pointer type char * to an array of characters.  Characters from this array are printed up  to  (but  not including) a null byte  (**'\0'**).  If precision is specified, then this will determine how many characters are taken into account for printing.|
|**%**|A  ' **%** ' character is written and no conversion is made. The specification is as follows: **%%**. |

## **Authors**
ESKIAS YILMA (<a href="https://github.com/eskiasyilma/">Eskias Yilma</a>)\
KAYODE GBENGA MICHAEL (<a href="https://github.com/miclincoln/">Kayode Gbenga Michael</a>)
