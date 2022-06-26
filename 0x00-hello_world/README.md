General
Why C programming is awesome (don’t forget to tweet today, with the hashtag #cisfun :))
Who invented C
Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
What happens when you type gcc main.c
What is an entry point
What is main
How to print text using printf, puts and putchar
How to get the size of a specific type using the unary operator sizeof
How to compile using gcc
What is the default program name when compiling with gcc
What is the official Holberton C coding style and how to check your code with betty-style
How to find the right header to include in your source code when using a standard library function
How does the main function influence the return value of the program
Requirements C
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 14.04 LTS using gcc 4.8.4
All your files should end with a new line
A README.md file at the root of the holbertonschool-low_level_programming repo, containing a description of the repository
A README.md file, at the root of the folder of this project, containing a description of the project
There should be no errors and no warnings during compilation
You are not allowed to use system
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
0-preprocessor: Preprocessor
A script that runs a C file through the preprocessor and save the result into another file. The C file name will be saved in the variable $CFILE; The output should be saved in the file c using gcc $CFILE -E -o c.

1-compiler: Compiler
A script that compiles a C file but does not link. The C file name will be saved in the variable $CFILE; The output file should be named the same as the C file, but with the extension .o instead of .c;

Example: if the C file is main.c, the output file should be main.o using gcc -c $CFILE.

2-assembler: Assembler
A script that generates the assembly code of a C code and save it in an output file. The C file name will be saved in the variable $CFILE; The output file should be named the same as the C file, but with the extension .s instead of .c.

Example: if the C file is main.c, the output file should be main.s using gcc -S $CFILE.

3-name: Name
A script that compiles a C file and creates an executable named cisfun. The C file name will be saved in the variable $CFILE using gcc $CFILE -o cisfun.

4-puts.c: Hello, puts
A C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.. Use the function puts; You are not allowed to use printf; Your program should end with the value 0 using:

#include <stdio.h>

int main(void) { puts("Programming is like building a multilingual puzzle\n"); return (0); }

5-printf.c: Hello, printf
A C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line. Use the function printf; You are not allowed to use the function puts; Your program should return 0; Your program should compile without warning when using the -Wall gcc option using:

#include <stdio.h>

int main(void) { printf("with proper grammar, but the outcome is a piece of art,\n"); return (0); }

6-size.c: Size is not grandeur, and territory does not make a nation
A C program that prints the size of various types on the computer it is compiled and run on. You should produce the exact same output as in the example; Warnings are allowed; Your program should return 0; You might have to install the package libc6-dev-i386 on your Linux (Vagrant) to test the -m32 gcc option using:

#include <stdio.h>

int main(void) { int a; long int b; long long int c; char d; float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}

100-intel: Intel
A script that generates the assembly code (Intel syntax) of a C code and save it in an output file. The C file name will be saved in the variable $CFILE. The output file should be named the same as the C file, but with the extension .s instead of .c.

Example: if the C file is main.c, the output file should be main.s using gcc -S -masm=intel $CFILE.

101-quote.c: UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
A C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error. You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts; Your program should return 1; Your program should compile without any warnings when using the -Wall gcc option using:

#include <stdio.h>

int main(void) { write(2, "and that piece of art is useful" - Dora Korpar, 2015-10-19\n", 61);

return (1);
}
