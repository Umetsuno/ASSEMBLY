global	_ft_strcmp

_ft_strcmp:
			movzx r9, byte [rsi]
			movzx r8, byte [rdi]
			xor rax, rax
.Check_same:
			cmp	byte [rdi], 0
			je	.Return
			cmp	byte [rsi], 0
			je	.Return
			cmp	r8, r9
			jne	.Return
			jmp .Add_value
.Add_value:
			inc	rdi
			inc	rsi
			movzx r9, byte [rsi]
			movzx r8, byte [rdi]
			jmp	.Check_same
.Return:
			mov rax, r8
			sub rax, r9
			ret