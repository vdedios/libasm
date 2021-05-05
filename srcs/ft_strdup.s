section	.text

global	_ft_strdup
extern	_malloc

;char    *ft_strdup(const char *s1);

_ft_strdup:
			xor		rcx, rcx
			xor		rdx, rdx
count:
			cmp		BYTE [rdi + rcx], 0
			je		allocate
			inc		rcx
			jmp		count
allocate:
			inc		rcx
			push	rdi
			mov		rdi, rcx
			call	_malloc
			cmp		rax, 0
			je		err
			pop		rdi
copy:
			mov		dl, BYTE [rdi + rcx]
			mov		BYTE [rax + rcx], dl
			cmp		dl, 0
			je		end
			inc		rcx
			jmp		copy
err:
			xor		rax, rax
end:
			ret