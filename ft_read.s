global	_ft_read

extern ___error

_ft_read:
			mov rax, 0x2000003
			syscall
			jc	.Invert
			ret
.Invert:
			mov rdi, rax
			push rdi
			call ___error
			pop	rdi
			mov [rax], rdi
			mov rax, -1
			ret