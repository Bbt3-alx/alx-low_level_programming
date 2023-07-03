; 64-bit program in assembly that prints Hello, Holberton, followed by a new line

    global main
    extern printf

    section .data
        msg: db "Hello, Holberton", 10, 0 ; message to print, 10 is newline, 0 is null terminator

    section .text
        main:
            ; save the stack pointer
            push rbp
            mov rbp, rsp

            ; pass the message as the first argument to printf
            mov rdi, msg
            ; call printf
            call printf

            ; restore the stack pointer and return
            mov rsp, rbp
            pop rbp
            ret

