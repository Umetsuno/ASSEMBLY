global	_ft_write

extern ___error

_ft_write:
			mov rax, 0x2000004
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