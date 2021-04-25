section	.text
global	_ft_strcmp

_ft_strcmp:
			xor		rax, rax
			xor		rcx, rcx
			xor		rdx, rdx
			jmp		iterate
iterate:
			mov		dl, BYTE [rdi + rcx]
			cmp		BYTE [rsi + rcx], dl
			jne		compare
			cmp		BYTE [rdi + rcx], 0
			je		compare
			cmp		BYTE [rsi + rcx], 0
			je		compare
			inc		rcx
			jmp		iterate
compare:
			mov     al, BYTE [rdi + rcx]
			cmp     al, BYTE [rsi + rcx]
			jg      bigger
			jl      smaller
			jmp     end
bigger:
			mov     rax, 1
			jmp     end
smaller:
			mov     rax, -1
			jmp     end
end:
			ret