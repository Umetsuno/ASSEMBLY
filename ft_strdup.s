global	_ft_strdup

extern ___error
extern _malloc
extern _ft_strlen
extern _ft_strcpy

_ft_strdup:
			push rdi
			call _ft_strlen
			mov rdi, rax
			call _malloc
			cmp rax, -1
			je .Ret_error
			pop rsi
			mov rdi, rax
			call _ft_strcpy
			jmp .Return_val
.Ret_error:
			ret
.Return_val:
			mov rax, rdi
			ret