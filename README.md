# LIBASM PROJECT

nasm -f macho64 test.s		// crée le fichier .o  
ld -lSystem test.o			//crée un exe a.out executable  
objdump -d test.o			//permet de voir le fichier en bits  
alias ls="curl wttr.in/lyon && ls"  
  
asm registers:  
rax => 64 bits | eax => 32 bits | ax => 16 bits | ah - al  
rdi => 64 bits | edi => 32 bits | bx => 16 bits | bh - bl  
rsi => 64 bits | ecx => 32 bits | cx => 16 bits | ch - cl  
rdx => 64 bits | ebx => 32 bits | dx => 16 bits | dh - dl  

mov <destination>, <source>  
mov rax, 45 | rax = 45  
syscall => kernel call  
  
db => define bytes       => 1 octet | unsigned char  
dw => define word        => 2 octet | unsigned short  
dd => define double word => 4 octet | unsigned int  
dq => define quad word   => 8 octet | unsigned long  
 
instruction :  
cmp c1, c2   | compare  
je			 | jump if equal  

label :  
_start:  

label:  
	jmp		label pour aller vers la section cible  

Les six premiers arguments entiers ou pointeurs sont passés dans les registres :  
RDI, RSI, RDX, RCX, R8, R9  

Pour les premiers arguments en virgule flottante:  
XMM0, XMM1, XMM2, XMM3, XMM4, XMM5, XMM6 et XMM7  

if instructions :  
jle (<=), je (==), jge (>=), jg (>), jne (!=), jc si condition remplie, and many others  
