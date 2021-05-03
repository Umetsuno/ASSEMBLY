global	_ft_strcpy

_ft_strcpy:
			mov rax, 0
			mov r8, 0
.Compare:
			cmp byte [rsi + r8], 0
			jne .Add_value
			mov byte [rdi + r8], 0 
			mov rax, rdi
			ret
.Add_value:
			mov byte dl, [rsi + r8]
			mov byte [rdi + r8], dl 
			inc r8
			jmp .Compare