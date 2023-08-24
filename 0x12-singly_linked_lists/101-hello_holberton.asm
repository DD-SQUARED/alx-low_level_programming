global main
extern printf
main:
 mov   format
 call  printf
 mov   0
format: db `Hello, Holberton\n`,0

