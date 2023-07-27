extern printf

section .data
    hello_msg db "Hello, Holberton", 0Ah ; define a null-terminated string

section .text
    global main

main:
    ; prepare arguments for printf
    mov rdi, hello_msg  ; format string
    xor rax, rax        ; clear rax
    call printf         ; call printf with the prepared arguments

    ; return 0
    xor eax, eax        ; set return value to 0
    ret                 ; return from main
