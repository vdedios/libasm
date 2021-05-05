section	.text

global	_ft_read
extern ___error

;ssize_t read(int fildes, void *buf, size_t nbyte);

_ft_read:
			mov			rax, 0x02000003
			syscall
			jc			error
			ret

error:
            push        rax
            call        ___error ;returns errno address
            pop         qword [rax] ;copy errno value into errno address
            mov         rax, -1 ;return -1
            ret