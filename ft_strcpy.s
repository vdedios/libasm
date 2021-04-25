section	.text
global	_ft_strcpy

_ft_strlen:
			xor		rax, rax
			jmp		count

count:
			cmp		BYTE [rdi + rax], 0
            je      done
			inc		rax
            jmp     count

done:
			ret