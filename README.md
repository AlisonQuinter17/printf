# printf
![](https://github.com/AlisonQuinter17/printf/blob/master/final%20gif.gif)
This project contains a mini version of the **printf** function
that we can find in the library <stdio.h>,
if we are using the **C programming language.**
The **printf** function basically allows us to print any argument
given to standard or terminal output. This means that we can print
any combination of strings, integers, and other different data types.

## Synopsis ##
In this repository you can find all the code necessary for our
custom printf function to run.
Our mini version currently handles conversion specifiers: *c, s,%, d, i*,
and does not yet support field width, precision, markup, or length modifiers.

## How To Install & Compile ##
To have this repository and its content, you must execute the following on
your terminal:
~~~
$ git clone https://github.com/AlisonQuinter17/printf.git
$ cd printf
~~~

To compile you need a main program, as you wish ... for example:
~~~
int main(void)
{
       _printf("%s %c%drld", "Hello", "W", 0);
       return(0);
}
~~~
And execute the following in your terminal:
~~~
$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c -o a
$ ./a
Hello W0rld
$
~~~

## Description of the files contained. ##
~~~
man_3_printf .......... Custom manual for our _printf function
print.c ............... Contains our _printf function
holberton.h ........... Contains the prototypes of the functions used that
                        can be found in the other files
selector.c ............ Contains the function that selects the correct
                        function requested by the user
basic_op.c ............ Contains the functions that allow printing basic
                        formats (%c, %s, %d, %i, %%).
advanced_op.c ......... Contains advanced printing functions
                        (Unsigned; u, reverse; r, rot13; R, ...).
auxiliar_op.c ......... Contains the auxiliary _putchar function, used to print
~~~
### Note ###
If you want to review the manual of our _printf function you can execute
in your terminal:
~~~
$ man ./man_3_printf
~~~
## Environment ##
* Language: C
* OS: Ubuntu 14.04 LTS
* Compiler: gcc 4.8.4
* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)
and
[Betty-doc](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
### Authors ###
* [Alison Quintero](https://twitter.com/AlisonQuinter17)
* [Christian Bedoya](https://twitter.com/ChrisBedoya11)
* [Angie Perez](https://twitter.com/xiommyperez)
