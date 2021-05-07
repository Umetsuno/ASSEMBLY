global _ft_strlen

_ft_strlen:
	xor rax, rax ; RAX est a 0. C'est le registre qui sera forcément return
	;test	rdi, rdi ; si la string qu'on nous envoie est a null, la condition est remplie
	;je		grosseteuch

.loop:
	cmp		byte [rdi], 0
	je		ret
	inc		rdi
	inc		rax
	jmp		.loop
