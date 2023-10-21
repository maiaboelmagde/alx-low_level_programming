section  .text
 extern printf
 global main

main:
 mov  edi,our_msg
 mov  eax,0
 call printf

section  .data
 msg db 'Hello, Holberton',0xa,0 
