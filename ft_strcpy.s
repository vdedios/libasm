section	.text
global	_ft_strcpy

_ft_strcpy:
			xor		rcx, rcx
			xor		rdx, rdx
			cmp		rsi, 0
			je		end
			jmp		copy
copy:
			mov		dl, BYTE [rsi + rcx]
			mov		BYTE [rdi + rcx], dl
			cmp		dl, 0
			je		end
			inc		rcx
			jmp		copy
end:
			mov		rax, rdi
			ret