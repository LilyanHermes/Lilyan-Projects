; ********** CODE STARTS HERE **********
section .bss
    ; Declare uninitialized data section (for stack usage if needed)

section .text
    global _start

_start:
    ; Read the number into EAX
    call read_int

    ; Store the input number in EBX to use later
    mov ebx, eax

    ; Print the number twice
    call print_int
    call print_nl
    call print_int
    call print_nl

    ; Print the previous number
    dec ebx
    mov eax, ebx
    call print_int
    call print_nl

    ; Print the original number
    inc ebx
    mov eax, ebx
    call print_int
    call print_nl

    ; Print the next number
    inc ebx
    mov eax, ebx
    call print_int
    call print_nl

    ; Exit the program
    mov eax, 1          ; sys_exit
    xor ebx, ebx        ; exit code 0
    int 0x80

; *********** CODE ENDS HERE ***********
