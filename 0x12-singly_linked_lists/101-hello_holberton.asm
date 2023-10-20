section .data
    hello db "Hello, Holberton", 10, 0  ; The string to be printed, followed by a newline character

section .text
    global main

    extern printf

main:
    push rbp            ; Save the base pointer
    mov rdi, hello      ; Load the address of the string into rdi
    call printf        ; Call printf
    pop rbp             ; Restore the base pointer

    mov rax, 60         ; Exit syscall number (64-bit)
    xor rdi, rdi        ; Status code (0)
    syscall             ; Invoke syscall to exit

