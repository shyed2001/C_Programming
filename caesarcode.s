	.file	"caesarcode.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 4
LC0:
	.ascii "Usage: ./caesar key. Please enter an valid integer key in command line argument.\0"
LC1:
	.ascii "Usage: ./caesar key.\0"
LC2:
	.ascii "Line 23\0"
LC3:
	.ascii "%d\12\0"
LC4:
	.ascii "%S\0"
LC5:
	.ascii "Ciphertext: \0"
LC6:
	.ascii " %c\0"
LC7:
	.ascii " \0"
LC8:
	.ascii " %d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB28:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$48, %esp
	call	___main
	movl	$0, 40(%esp)
	cmpl	$2, 8(%ebp)
	je	L2
	movl	$LC0, (%esp)
	call	_puts
	movl	$1, %eax
	jmp	L3
L2:
	movl	12(%ebp), %eax
	addl	$4, %eax
	movl	(%eax), %eax
	movl	%eax, (%esp)
	call	_valid_key
	xorl	$1, %eax
	testb	%al, %al
	je	L4
	movl	$LC1, (%esp)
	call	_puts
	movl	$1, %eax
	jmp	L3
L4:
	movl	$LC2, (%esp)
	call	_puts
	movl	40(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	movl	12(%ebp), %eax
	addl	$4, %eax
	movl	(%eax), %eax
	movl	%eax, (%esp)
	call	_atoi
	movl	%eax, 40(%esp)
	leal	27(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC4, (%esp)
	call	_scanf
	movl	$LC5, (%esp)
	call	_printf
	movl	$0, 44(%esp)
	leal	27(%esp), %eax
	movl	%eax, (%esp)
	call	_strlen
	movl	%eax, 36(%esp)
	jmp	L5
L9:
	leal	27(%esp), %edx
	movl	44(%esp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	movb	%al, 35(%esp)
	movsbl	35(%esp), %eax
	movl	%eax, (%esp)
	call	_isalpha
	testl	%eax, %eax
	je	L6
	movb	$65, 34(%esp)
	movsbl	35(%esp), %eax
	movl	%eax, (%esp)
	call	_islower
	testl	%eax, %eax
	je	L8
	movb	$97, 34(%esp)
	movsbl	35(%esp), %edx
	movsbl	34(%esp), %eax
	subl	%eax, %edx
	movl	40(%esp), %eax
	leal	(%edx,%eax), %ecx
	movl	$1321528399, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$3, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	imull	$26, %eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	movsbl	34(%esp), %edx
	addl	%edx, %eax
	movl	%eax, 4(%esp)
	movl	$LC6, (%esp)
	call	_printf
	jmp	L8
L6:
	movsbl	35(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC6, (%esp)
	call	_printf
L8:
	addl	$1, 44(%esp)
L5:
	movl	44(%esp), %eax
	cmpl	36(%esp), %eax
	jl	L9
	movl	$LC7, (%esp)
	call	_puts
	movl	40(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC8, (%esp)
	call	_printf
	movl	$0, %eax
L3:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE28:
	.globl	_valid_key
	.def	_valid_key;	.scl	2;	.type	32;	.endef
_valid_key:
LFB29:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	$0, -12(%ebp)
	leal	-23(%ebp), %eax
	movl	%eax, (%esp)
	call	_strlen
	movl	%eax, -16(%ebp)
	jmp	L11
L14:
	movl	-12(%ebp), %eax
	leal	0(,%eax,4), %edx
	movl	8(%ebp), %eax
	addl	%edx, %eax
	movl	(%eax), %eax
	subl	$48, %eax
	cmpl	$9, %eax
	jbe	L12
	movl	$0, %eax
	jmp	L15
L12:
	addl	$1, -12(%ebp)
L11:
	movl	-12(%ebp), %eax
	cmpl	-16(%ebp), %eax
	jl	L14
	movl	$1, %eax
L15:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE29:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_atoi;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_strlen;	.scl	2;	.type	32;	.endef
	.def	_isalpha;	.scl	2;	.type	32;	.endef
	.def	_islower;	.scl	2;	.type	32;	.endef
