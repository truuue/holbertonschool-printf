# _printf function

This is a custom implementation of the printf function in C.
It is a function that takes in a format string and any additional arguments, and outputs the formatted string to the console.

## Functionality 

The **_printf** function has the following functionality :

- It can print **strings**
- It can print **characters**
- It can print **integers**

### Usage

The **_printf** function can be called by passing in a format string followed by the arguments to be printed, like this :

 >_printf("Hello, %s! You are %d years old.", name, age);
 
### Format Specifiers

The _printf function uses format specifiers to determine how to format the output.
The following format specifiers are available :

| Specifier | Output                 |
| --------- | -----------------------|
| %c        | Character              |
| %s        | String                 |
| %d, %i    | Signed integer         |
| %%        | Percent                |

### Example

```
#include "main.h" int main(void)
{
char *name = "Djamal";
int age = 25;
_printf("Hello, %s! You are %d years old.\n", name,age);
return (0);
}
```
>And the output is : Hello, Djamal! You are 25 years old.

## Test our _printf

You can test it with this main.c file.
```
#include <stdio.h>
#include "main.h"

/**
 * main - Check the code
 * 
 * Return: Always 0
 */
  
int main(void)
{
	int len, len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
}
```

## Flowchart

                    +----------------------+
                    |        Start         |
                    +----------------------+
                               |
                               v
                 +----------------------------+
                 |  Check if format is empty  |
                 +----------------------------+
                               |
                    +----------+------------+
                    |                       |
                    v                       v
              +-----------------------------------+
              | Return -1 if empty, else continue |
              +-----------------------------------+
                    |                       |
                    v                       v
      +------------------------+  +-----------------------+
      |    Iterate through     |  |     Print character   |
      |   format characters    |  |   when format is not  |
      |      until null        |  |    a percent symbol   |
      +------------------------+  +-----------------------+
                 |                         |
                 v                         v
         +---------------+        +------------------+
         |   Check if    |        |  Print percent   |
         | character     |        |    symbol        |
         | after percent |        +------------------+
         | is valid      |                 |
         +---------------+                 v
           +----------------------------------------+
           | Find correct print function for format |
           +----------------------------------------+
                               |
                +--------------+-------------+
                |                            |
                v                            v
        +-----------------+         +------------------+
        |   Print char    |         |   Print string   |
        +-----------------+         +------------------+
                |                            |
                v                            v
        +-----------------+         +------------------+
        |  Print integer  |         |   Print percent  |
        +-----------------+         +------------------+

### AUTHORS

**Djamaldine Mohamed and Noah Vernhet**

![Logo Holberton School](https://github.com/truuue/holbertonschool-printf/blob/master/Holbertonschool-logo.png)
