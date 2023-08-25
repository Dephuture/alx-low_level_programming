section .data
    hello db "Hello, Holberton,",0   ; Null-terminated string

section .text
    global main

extern printf

main:
    push rbp                ; Set up the stack frame
    mov rdi, hello          ; Load the address of the string to rdi
    call printf            ; Call printf
    add rsp, 8             ; Clean up the stack
    ret
