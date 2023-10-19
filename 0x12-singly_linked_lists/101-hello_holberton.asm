section .data
    helloMsg db "Hello, Holberton", 0
    format db "%s", 0

section .text
    extern printf

    global main
    main:
        push rbp
        mov rdi, format
        mov rsi, helloMsg
        call printf
        add rsp, 8  ; clean up the stack
        xor eax, eax  ; return 0
        pop rbp
        ret
