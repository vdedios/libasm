section	.text
global	_ft_strlen

;ft_strlen(char *str);

_ft_strlen:
			xor		rax, rax
			jmp		count

count:
			cmp		BYTE [rdi + rax], 0
			je		end
			inc		rax
			jmp		count

end:
			ret