C Programming Basics

 1. Data Types

The following are some common C data types:

| Data Type | Description                                           |
| --------- | ----------------------------------------------------- |
| int     | Used to store integer values.                         |
| float   | Used to store floating-point values.                  |
| double  | Used to store double-precision floating-point values. |
| char    | Used to store a single character.                     |
| bool    | Used to store a true or false value.                  |
| void    | Represents the absence of a value.                    |

---

 2. Format Specifiers

Format specifiers are used with functions such as `printf()` and `scanf()` to specify the type of data being displayed or entered.

| Format Specifier | Description                                 |
| ---------------- | ------------------------------------------- |
| %d             | Decimal integer                             |
| %u             | Unsigned integer                            |
| %o             | Octal integer                               |
| %x             | Hexadecimal integer in lowercase            |
| %X             | Hexadecimal integer in uppercase            |
| %f             | Floating-point value                        |
| %e             | Floating-point value in scientific notation |
| %c             | Character                                   |
| %s             | String                                      |
| %ld            | Long integer                                |

---

 3. Input/Output Functions

scanf()

scanf() is used to take formatted input from the user.

Example:

   c
scanf("%d", &age);


printf()

printf() is used to display formatted output.

Example:

c
printf("Age = %d", age);


getchar()

getchar() is used to read a single character from the user.

Example:

c
char ch;
ch = getchar();


putchar()

putchar() is used to display a single character.

Example:

c
putchar(ch);


fgets()

fgets() is used to read a string, including spaces.

Example:

c
fgets(name, sizeof(name), stdin);


puts()

puts() is used to display a string followed by a new line.

Example:

c
puts(name);


---

## 4. Escape Sequences

Escape sequences are special characters used to control the formatting of output.

| Escape Sequence | Meaning               | Example                |
| --------------- | --------------------- | ---------------------- |
| \n            | New line              | printf("Hello\n");   |
| \t            | Horizontal tab        | printf("Name\tAge"); |
| \\            | Backslash             | printf("\\");       |
| \"            | Double quotation mark | printf("\"C\"");     |
| \'            | Single quotation mark | printf("\'A\'");     |

---

 5. Precision

Precision specifies the number of digits displayed after the decimal point for floating-point output.

For example:

c
printf("%.2f", value);


displays the value with 2 digits after the decimal point.

Similarly:

c
printf("%.4f", value);


displays 4 digits after the decimal point.

And:

c
printf("%.6f", value);


displays 6 digits after the decimal point.

Changing the precision changes the way the floating-point value is displayed.



 Conclusion

This document covers basic C data types, format specifiers, input/output functions, escape sequences, and floating-point precision.
