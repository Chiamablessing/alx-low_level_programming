section .data

    hello db 'Hello, Holberton', 0Ah ; string to print, 0Ah is the newline character
    len equ $-hello                 ; length of the string, calculated using the current location $ symbol

section .text
    global main

main:
    mov rax, 1      ; write syscall number to stdout
    mov rdi, 1      ; file descriptor 1 for stdout
    mov rsi, hello  ; address of the string to be printed
    mov rdx, len    ; length of the string to print
    syscall         ; invoke system call to write the string

    mov rax, 60     ; exit syscall number
    xor rdi, rdi    ; return value 0
    syscall         ; invoke system call to exit program
