	.file	"merge_pseudo_avx_sort.cpp"
# GNU C++17 (GCC) version 12.2.0 (x86_64-linux-musl)
#	compiled by GNU C version 12.2.0, GMP version 6.2.1, MPFR version 4.1.0, MPC version 1.2.1, isl version isl-0.24-GMP

# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
# options passed: -march=haswell -mmmx -mpopcnt -msse -msse2 -msse3 -mssse3 -msse4.1 -msse4.2 -mavx -mavx2 -mno-sse4a -mno-fma4 -mno-xop -mfma -mno-avx512f -mbmi -mbmi2 -maes -mpclmul -mno-avx512vl -mno-avx512bw -mno-avx512dq -mno-avx512cd -mno-avx512er -mno-avx512pf -mno-avx512vbmi -mno-avx512ifma -mno-avx5124vnniw -mno-avx5124fmaps -mno-avx512vpopcntdq -mno-avx512vbmi2 -mno-gfni -mno-vpclmulqdq -mno-avx512vnni -mno-avx512bitalg -mno-avx512bf16 -mno-avx512vp2intersect -mno-3dnow -mno-adx -mabm -mno-cldemote -mno-clflushopt -mno-clwb -mno-clzero -mcx16 -mno-enqcmd -mf16c -mfsgsbase -mfxsr -mhle -msahf -mno-lwp -mlzcnt -mmovbe -mno-movdir64b -mno-movdiri -mno-mwaitx -mno-pconfig -mno-pku -mno-prefetchwt1 -mno-prfchw -mno-ptwrite -mno-rdpid -mrdrnd -mno-rdseed -mrtm -mno-serialize -mno-sgx -mno-sha -mno-shstk -mno-tbm -mno-tsxldtrk -mno-vaes -mno-waitpkg -mno-wbnoinvd -mxsave -mno-xsavec -mxsaveopt -mno-xsaves -mno-amx-tile -mno-amx-int8 -mno-amx-bf16 -mno-uintr -mno-hreset -mno-kl -mno-widekl -mno-avxvnni -mno-avx512fp16 --param=l1-cache-size=32 --param=l1-cache-line-size=64 --param=l2-cache-size=6144 -mtune=haswell -O2
	.text
	.p2align 4
	.globl	_Z21merge_pseudo_avx_sortP4testi
	.type	_Z21merge_pseudo_avx_sortP4testi, @function
_Z21merge_pseudo_avx_sortP4testi:
.LFB669:
	.cfi_startproc
	pushq	%r15	#
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pushq	%r14	#
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	movslq	%esi, %r14	# tmp173,
	pushq	%r13	#
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	movq	%r14, %r15	#,
	pushq	%r12	#
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	pushq	%rbp	#
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	pushq	%rbx	#
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	movq	%rdi, %rbx	# tmp172, t
# merge_pseudo_avx_sort.cpp:35: 	int **postings = (int **)malloc(sizeof(int *) * n);
	leaq	0(,%r14,8), %rdi	#, tmp143
# merge_pseudo_avx_sort.cpp:34: bool merge_pseudo_avx_sort(struct test *t, int n) {
	subq	$24, %rsp	#,
	.cfi_def_cfa_offset 80
# merge_pseudo_avx_sort.cpp:35: 	int **postings = (int **)malloc(sizeof(int *) * n);
	call	malloc@PLT	#
# merge_pseudo_avx_sort.cpp:36: 	unsigned char *segments = (unsigned char *)malloc(n);
	movq	%r14, %rdi	# _1,
# merge_pseudo_avx_sort.cpp:35: 	int **postings = (int **)malloc(sizeof(int *) * n);
	movq	%rax, %r12	# tmp174, postings
# merge_pseudo_avx_sort.cpp:36: 	unsigned char *segments = (unsigned char *)malloc(n);
	call	malloc@PLT	#
	movq	%rax, %rbp	# tmp175, segments
# merge_pseudo_avx_sort.cpp:38: 	for (int i = 0; i < n; i++) {
	testl	%r14d, %r14d	# n
	jle	.L6	#,
# merge_pseudo_avx_sort.cpp:39: 		postings[i] = t->postings[i];
	movq	(%rbx), %rsi	# t_32(D)->postings, t_32(D)->postings
	movl	%r14d, %edx	# n, _155
	movq	%r12, %rdi	# postings,
	salq	$3, %rdx	#, tmp149
	call	memcpy@PLT	#
	xorl	%eax, %eax	# ivtmp.39
	.p2align 4,,10
	.p2align 3
.L5:
# merge_pseudo_avx_sort.cpp:40: 		segments[i] = i;
	movb	%al, 0(%rbp,%rax)	# ivtmp.39, MEM[(unsigned char *)segments_29 + ivtmp.39_134 * 1]
# merge_pseudo_avx_sort.cpp:38: 	for (int i = 0; i < n; i++) {
	incq	%rax	# ivtmp.39
	cmpq	%rax, %r14	# ivtmp.39, _1
	jne	.L5	#,
# merge_pseudo_avx_sort.cpp:10: 	for (i = 1; i < length; i++) {
	cmpl	$1, %r15d	#, n
	je	.L6	#,
	leal	-1(%r15), %r9d	#, _135
	xorl	%edi, %edi	# ivtmp.32
	.p2align 4,,10
	.p2align 3
.L10:
# merge_pseudo_avx_sort.cpp:11: 		unsigned char x = segments[i];
	movzbl	1(%rbp,%rdi), %eax	# MEM[(unsigned char *)segments_29 + 1B + ivtmp.32_140 * 1],
	movq	%rax, %r8	#,
# merge_pseudo_avx_sort.cpp:12: 		for (j = i - 1; j >= 0 && *postings[segments[j]] < *postings[x]; j--)
	movq	(%r12,%rax,8), %rax	# *_61, *_61
	movl	(%rax), %esi	# *_62, _63
	movq	%rdi, %rax	# ivtmp.32, ivtmp.24
	jmp	.L7	#
	.p2align 4,,10
	.p2align 3
.L9:
# merge_pseudo_avx_sort.cpp:13: 			segments[j+1] = segments[j];
	movb	%dl, 1(%rbp,%rax)	# _50, MEM[(unsigned char *)segments_29 + 1B + ivtmp.24_146 * 1]
# merge_pseudo_avx_sort.cpp:12: 		for (j = i - 1; j >= 0 && *postings[segments[j]] < *postings[x]; j--)
	decq	%rax	# ivtmp.24
	cmpl	$-1, %eax	#, ivtmp.24
	je	.L14	#,
.L7:
# merge_pseudo_avx_sort.cpp:12: 		for (j = i - 1; j >= 0 && *postings[segments[j]] < *postings[x]; j--)
	movzbl	0(%rbp,%rax), %ecx	# MEM[(unsigned char *)segments_29 + ivtmp.24_146 * 1],
	movq	%rcx, %rdx	#,
# merge_pseudo_avx_sort.cpp:12: 		for (j = i - 1; j >= 0 && *postings[segments[j]] < *postings[x]; j--)
	movq	(%r12,%rcx,8), %rcx	# *_56, *_56
# merge_pseudo_avx_sort.cpp:12: 		for (j = i - 1; j >= 0 && *postings[segments[j]] < *postings[x]; j--)
	cmpl	%esi, (%rcx)	# _63, *_57
	jl	.L9	#,
# merge_pseudo_avx_sort.cpp:14: 		segments[j+1] = x;
	incl	%eax	# tmp161
	cltq
	addq	%rbp, %rax	# segments, _161
.L8:
# merge_pseudo_avx_sort.cpp:10: 	for (i = 1; i < length; i++) {
	incq	%rdi	# ivtmp.32
# merge_pseudo_avx_sort.cpp:14: 		segments[j+1] = x;
	movb	%r8b, (%rax)	# x, *prephitmp_162
# merge_pseudo_avx_sort.cpp:10: 	for (i = 1; i < length; i++) {
	cmpq	%rdi, %r9	# ivtmp.32, _135
	jne	.L10	#,
.L6:
# merge_pseudo_avx_sort.cpp:48: 		if (*postings[segments[0]] == 0)
	movzbl	0(%rbp), %eax	# *segments_29,
	movq	%rax, %r14	#,
# merge_pseudo_avx_sort.cpp:48: 		if (*postings[segments[0]] == 0)
	leaq	(%r12,%rax,8), %rax	#, _14
	movq	(%rax), %rsi	# *_75, _15
# merge_pseudo_avx_sort.cpp:48: 		if (*postings[segments[0]] == 0)
	movl	(%rsi), %edx	# *_74, _16
# merge_pseudo_avx_sort.cpp:48: 		if (*postings[segments[0]] == 0)
	testl	%edx, %edx	# _16
	je	.L3	#,
# merge_pseudo_avx_sort.cpp:30: 	memmove(&segments[0], &segments[1], i);
	leaq	1(%rbp), %rdi	#, _166
	movq	16(%rbx), %r13	# t_32(D)->results, ivtmp.19
# merge_pseudo_avx_sort.cpp:23: 	for (i = 0; i < length-1 && *postings[x] < *postings[segments[i+1]]; i++)

/*********
 * START *
 *********/

/* length-- */
	decl	%r15d	# _165
# merge_pseudo_avx_sort.cpp:30: 	memmove(&segments[0], &segments[1], i);
	movq	%rdi, 8(%rsp)	# _166, %sfp
	.p2align 4,,10
	.p2align 3
.L13:
# merge_pseudo_avx_sort.cpp:51: 		t->results[pos++] = *postings[segments[0]]++;
	leaq	4(%rsi), %rcx	#, tmp164
# merge_pseudo_avx_sort.cpp:51: 		t->results[pos++] = *postings[segments[0]]++;
	movl	%edx, 0(%r13)	# _16, MEM[(int *)_147]
# merge_pseudo_avx_sort.cpp:51: 		t->results[pos++] = *postings[segments[0]]++;
	movq	%rcx, (%rax)	# tmp164, *_103
# merge_pseudo_avx_sort.cpp:23: 	for (i = 0; i < length-1 && *postings[x] < *postings[segments[i+1]]; i++)

/* 0 -> i */
	xorl	%eax, %eax	# ivtmp.11
	jmp	.L12	#
	.p2align 4,,10
	.p2align 3

/********
 * HERE *
 ********/

/* for */
.L31:
# merge_pseudo_avx_sort.cpp:23: 	for (i = 0; i < length-1 && *postings[x] < *postings[segments[i+1]]; i++)
/* segments[i+1] -> %edx */
	movzbl	1(%rbp,%rax), %edx	# MEM[(unsigned char *)segments_29 + 1B + ivtmp.11_39 * 1], MEM[(unsigned char *)segments_29 + 1B + ivtmp.11_39 * 1]
# merge_pseudo_avx_sort.cpp:23: 	for (i = 0; i < length-1 && *postings[x] < *postings[segments[i+1]]; i++)
/* i+1 */
	leaq	1(%rax), %rcx	#, ivtmp.11
# merge_pseudo_avx_sort.cpp:23: 	for (i = 0; i < length-1 && *postings[x] < *postings[segments[i+1]]; i++)
/* postings[%rdx] -> %rdx */
	movq	(%r12,%rdx,8), %rdx	# *_84, *_84
# merge_pseudo_avx_sort.cpp:23: 	for (i = 0; i < length-1 && *postings[x] < *postings[segments[i+1]]; i++)
/* *postings -> %ebx */
	movl	(%rdx), %ebx	# *_85, tmp178
/* *postings[segments[i+1]] >= *postings[x] */
	cmpl	%ebx, 4(%rsi)	# tmp178, MEM[(int *)_104 + 4B]
	jge	.L11	#,
/* i -> %rax */
	movq	%rcx, %rax	# ivtmp.11, ivtmp.11
/* i < length-1 */
.L12:
	cmpl	%eax, %r15d	# ivtmp.11, _165
	jg	.L31	#,
/* end */

/*******
 * END *
 *******/

.L11:
# merge_pseudo_avx_sort.cpp:30: 	memmove(&segments[0], &segments[1], i);
	movslq	%eax, %rbx	# ivtmp.11, _88
	movq	8(%rsp), %rsi	# %sfp,
	movq	%rbp, %rdi	# segments,
# merge_pseudo_avx_sort.cpp:48: 		if (*postings[segments[0]] == 0)
	addq	$4, %r13	#, ivtmp.19
# merge_pseudo_avx_sort.cpp:30: 	memmove(&segments[0], &segments[1], i);
	movq	%rbx, %rdx	# _88,
	call	memmove@PLT	#
# merge_pseudo_avx_sort.cpp:31: 	segments[i] = x;
	movb	%r14b, 0(%rbp,%rbx)	# _11, *_90
# merge_pseudo_avx_sort.cpp:48: 		if (*postings[segments[0]] == 0)
	movzbl	0(%rbp), %eax	# *segments_29,
	movq	%rax, %r14	#,
# merge_pseudo_avx_sort.cpp:48: 		if (*postings[segments[0]] == 0)
	leaq	(%r12,%rax,8), %rax	#, _14
	movq	(%rax), %rsi	# *_14, _15
# merge_pseudo_avx_sort.cpp:48: 		if (*postings[segments[0]] == 0)
	movl	(%rsi), %edx	# *_15, _16
# merge_pseudo_avx_sort.cpp:48: 		if (*postings[segments[0]] == 0)
	testl	%edx, %edx	# _16
	jne	.L13	#,
.L3:
# merge_pseudo_avx_sort.cpp:56: 	free(segments);
	movq	%rbp, %rdi	# segments,
	call	free@PLT	#
# merge_pseudo_avx_sort.cpp:57: 	free(postings);
	movq	%r12, %rdi	# postings,
	call	free@PLT	#
# merge_pseudo_avx_sort.cpp:60: }
	addq	$24, %rsp	#,
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	movl	$1, %eax	#,
	popq	%rbx	#
	.cfi_def_cfa_offset 48
	popq	%rbp	#
	.cfi_def_cfa_offset 40
	popq	%r12	#
	.cfi_def_cfa_offset 32
	popq	%r13	#
	.cfi_def_cfa_offset 24
	popq	%r14	#
	.cfi_def_cfa_offset 16
	popq	%r15	#
	.cfi_def_cfa_offset 8
	ret	
	.p2align 4,,10
	.p2align 3
.L14:
	.cfi_restore_state
	movq	%rbp, %rax	# segments, _161
	jmp	.L8	#
	.cfi_endproc
.LFE669:
	.size	_Z21merge_pseudo_avx_sortP4testi, .-_Z21merge_pseudo_avx_sortP4testi
	.ident	"GCC: (GNU) 12.2.0"
	.section	.note.GNU-stack,"",@progbits
