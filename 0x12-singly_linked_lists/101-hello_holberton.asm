; assembly program that calls a C function on 64-bit Linux
;
;    int main(void) {
;       printf(fmt, msg1);
;       return 0;
;
; Assemble in 64-bit:   nasm  -f elf64 -o hp64.o -l hp64.lst  hello-printf-64.asm
;
; Link:         ld hp64.o  -o hp64  -lc  --dynamic-linker /lib/ld-2.7.so
;   or maybe    ld hp64.o  -o hp64  -lc  --dynamic-linker /lib/ld-linux-x86-64.so.2
;       (the "-lc" option is needed to resolve "printf")
;---------------------------------------
    section .data
fmt     db "%s", 10, 0
msg1    db "Hello, Holberton",0

    section .text
    extern printf
    global main

main:
    push	rbp
	mov	rsi, msg1
	mov	rdi, fmt
	mov	rax, 0
	call 	printf
	pop	rbp
	mov	rax, 0
	ret
