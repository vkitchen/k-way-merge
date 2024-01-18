	.file	"merge_pseudo_avx_sort_binary_search.cpp"
# GNU C++17 (GCC) version 12.2.0 (x86_64-linux-musl)
#	compiled by GNU C version 12.2.0, GMP version 6.2.1, MPFR version 4.1.0, MPC version 1.2.1, isl version isl-0.24-GMP

# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
# options passed: -march=haswell -mmmx -mpopcnt -msse -msse2 -msse3 -mssse3 -msse4.1 -msse4.2 -mavx -mavx2 -mno-sse4a -mno-fma4 -mno-xop -mfma -mno-avx512f -mbmi -mbmi2 -maes -mpclmul -mno-avx512vl -mno-avx512bw -mno-avx512dq -mno-avx512cd -mno-avx512er -mno-avx512pf -mno-avx512vbmi -mno-avx512ifma -mno-avx5124vnniw -mno-avx5124fmaps -mno-avx512vpopcntdq -mno-avx512vbmi2 -mno-gfni -mno-vpclmulqdq -mno-avx512vnni -mno-avx512bitalg -mno-avx512bf16 -mno-avx512vp2intersect -mno-3dnow -mno-adx -mabm -mno-cldemote -mno-clflushopt -mno-clwb -mno-clzero -mcx16 -mno-enqcmd -mf16c -mfsgsbase -mfxsr -mhle -msahf -mno-lwp -mlzcnt -mmovbe -mno-movdir64b -mno-movdiri -mno-mwaitx -mno-pconfig -mno-pku -mno-prefetchwt1 -mno-prfchw -mno-ptwrite -mno-rdpid -mrdrnd -mno-rdseed -mrtm -mno-serialize -mno-sgx -mno-sha -mno-shstk -mno-tbm -mno-tsxldtrk -mno-vaes -mno-waitpkg -mno-wbnoinvd -mxsave -mno-xsavec -mxsaveopt -mno-xsaves -mno-amx-tile -mno-amx-int8 -mno-amx-bf16 -mno-uintr -mno-hreset -mno-kl -mno-widekl -mno-avxvnni -mno-avx512fp16 --param=l1-cache-size=32 --param=l1-cache-line-size=64 --param=l2-cache-size=6144 -mtune=haswell -O2
	.text
	.p2align 4
	.globl	_Z35merge_pseudo_avx_sort_binary_searchP4testi
	.type	_Z35merge_pseudo_avx_sort_binary_searchP4testi, @function
_Z35merge_pseudo_avx_sort_binary_searchP4testi:
.LFB670:
	.cfi_startproc
	pushq	%r15	#
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pushq	%r14	#
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	pushq	%r13	#
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	pushq	%r12	#
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	movslq	%esi, %r12	# tmp184,
	pushq	%rbp	#
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	movq	%rdi, %rbp	# tmp183, t
# merge_pseudo_avx_sort_binary_search.cpp:28: 	int **postings = (int **)malloc(sizeof(int *) * n);
	leaq	0(,%r12,8), %rdi	#, tmp150
# merge_pseudo_avx_sort_binary_search.cpp:27: bool merge_pseudo_avx_sort_binary_search(struct test *t, int n) {
	pushq	%rbx	#
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	subq	$24, %rsp	#,
	.cfi_def_cfa_offset 80
# merge_pseudo_avx_sort_binary_search.cpp:28: 	int **postings = (int **)malloc(sizeof(int *) * n);
	call	malloc@PLT	#
# merge_pseudo_avx_sort_binary_search.cpp:29: 	unsigned char *segments = (unsigned char *)malloc(n);
	movq	%r12, %rdi	# n,
# merge_pseudo_avx_sort_binary_search.cpp:28: 	int **postings = (int **)malloc(sizeof(int *) * n);
	movq	%rax, %r14	# tmp185, postings
# merge_pseudo_avx_sort_binary_search.cpp:29: 	unsigned char *segments = (unsigned char *)malloc(n);
	call	malloc@PLT	#
	movq	%rax, %rbx	# tmp186, segments
# merge_pseudo_avx_sort_binary_search.cpp:31: 	for (int i = 0; i < n; i++) {
	testl	%r12d, %r12d	# n
	jle	.L6	#,
# merge_pseudo_avx_sort_binary_search.cpp:32: 		postings[i] = t->postings[i];
	movq	0(%rbp), %rsi	# t_32(D)->postings, t_32(D)->postings
	movl	%r12d, %edx	# n, _170
	movq	%r14, %rdi	# postings,
	movq	%r12, %r13	#,
	salq	$3, %rdx	#, tmp156
	call	memcpy@PLT	#
	xorl	%eax, %eax	# ivtmp.56
	.p2align 4,,10
	.p2align 3
.L5:
# merge_pseudo_avx_sort_binary_search.cpp:33: 		segments[i] = i;
	movb	%al, (%rbx,%rax)	# ivtmp.56, MEM[(unsigned char *)segments_29 + ivtmp.56_153 * 1]
# merge_pseudo_avx_sort_binary_search.cpp:31: 	for (int i = 0; i < n; i++) {
	incq	%rax	# ivtmp.56
	cmpq	%rax, %r12	# ivtmp.56, n
	jne	.L5	#,
# merge_pseudo_avx_sort_binary_search.cpp:10: 	for (i = 1; i < length; i++) {
	cmpl	$1, %r13d	#, n
	je	.L6	#,
	leal	-1(%r13), %r9d	#, _154
	xorl	%edi, %edi	# ivtmp.49
	.p2align 4,,10
	.p2align 3
.L10:
# merge_pseudo_avx_sort_binary_search.cpp:11: 		unsigned char x = segments[i];
	movzbl	1(%rbx,%rdi), %eax	# MEM[(unsigned char *)segments_29 + 1B + ivtmp.49_159 * 1],
	movq	%rax, %r8	#,
# merge_pseudo_avx_sort_binary_search.cpp:12: 		for (j = i - 1; j >= 0 && *postings[segments[j]] < *postings[x]; j--)
	movq	(%r14,%rax,8), %rax	# *_61, *_61
	movl	(%rax), %esi	# *_62, _63
	movq	%rdi, %rax	# ivtmp.49, ivtmp.41
	jmp	.L7	#
	.p2align 4,,10
	.p2align 3
.L9:
# merge_pseudo_avx_sort_binary_search.cpp:13: 			segments[j+1] = segments[j];
	movb	%dl, 1(%rbx,%rax)	# _50, MEM[(unsigned char *)segments_29 + 1B + ivtmp.41_5 * 1]
# merge_pseudo_avx_sort_binary_search.cpp:12: 		for (j = i - 1; j >= 0 && *postings[segments[j]] < *postings[x]; j--)
	decq	%rax	# ivtmp.41
	cmpl	$-1, %eax	#, ivtmp.41
	je	.L15	#,
.L7:
# merge_pseudo_avx_sort_binary_search.cpp:12: 		for (j = i - 1; j >= 0 && *postings[segments[j]] < *postings[x]; j--)
	movzbl	(%rbx,%rax), %ecx	# MEM[(unsigned char *)segments_29 + ivtmp.41_5 * 1],
	movq	%rcx, %rdx	#,
# merge_pseudo_avx_sort_binary_search.cpp:12: 		for (j = i - 1; j >= 0 && *postings[segments[j]] < *postings[x]; j--)
	movq	(%r14,%rcx,8), %rcx	# *_56, *_56
# merge_pseudo_avx_sort_binary_search.cpp:12: 		for (j = i - 1; j >= 0 && *postings[segments[j]] < *postings[x]; j--)
	cmpl	%esi, (%rcx)	# _63, *_57
	jl	.L9	#,
# merge_pseudo_avx_sort_binary_search.cpp:14: 		segments[j+1] = x;
	incl	%eax	# tmp168
	cltq
	addq	%rbx, %rax	# segments, _177
.L8:
# merge_pseudo_avx_sort_binary_search.cpp:10: 	for (i = 1; i < length; i++) {
	incq	%rdi	# ivtmp.49
# merge_pseudo_avx_sort_binary_search.cpp:14: 		segments[j+1] = x;
	movb	%r8b, (%rax)	# x, *prephitmp_178
# merge_pseudo_avx_sort_binary_search.cpp:10: 	for (i = 1; i < length; i++) {
	cmpq	%rdi, %r9	# ivtmp.49, _154
	jne	.L10	#,
.L6:
# merge_pseudo_avx_sort_binary_search.cpp:41: 		if (*postings[segments[0]] == 0)
	movzbl	(%rbx), %eax	# *segments_29,
	movq	%rax, %r15	#,
# merge_pseudo_avx_sort_binary_search.cpp:41: 		if (*postings[segments[0]] == 0)
	leaq	(%r14,%rax,8), %rax	#, _14
	movq	(%rax), %r9	# *_71, _15
# merge_pseudo_avx_sort_binary_search.cpp:41: 		if (*postings[segments[0]] == 0)
	movl	(%r9), %edx	# *_118, _16
# merge_pseudo_avx_sort_binary_search.cpp:41: 		if (*postings[segments[0]] == 0)
	testl	%edx, %edx	# _16
	je	.L3	#,
# /usr/include/c++/12.2/bits/stl_iterator_base_funcs.h:105:       return __last - __first;
	leaq	-1(%r12), %rsi	#, _183
	movq	16(%rbp), %r12	# t_32(D)->results, ivtmp.35

/*********
 * START *
 *********/
/*
  template<typename _ForwardIterator, typename _Tp, typename _Compare>
    _GLIBCXX20_CONSTEXPR
    _ForwardIterator
    __lower_bound(_ForwardIterator __first, _ForwardIterator __last,
                  const _Tp& __val, _Compare __comp)
    {
      typedef typename iterator_traits<_ForwardIterator>::difference_type
        _DistanceType;

      _DistanceType __len = std::distance(__first, __last);

      while (__len > 0)
        {
          _DistanceType __half = __len >> 1;
          _ForwardIterator __middle = __first;
          std::advance(__middle, __half);
          if (__comp(__middle, __val))
            {
              __first = __middle;
              ++__first;
              __len = __len - __half - 1;
            }
          else
            __len = __half;
        }
      return __first;
    }
*/

# merge_pseudo_avx_sort_binary_search.cpp:20: 	unsigned char *pos = std::lower_bound(&segments[1], &segments[length], x, [postings](unsigned char a, unsigned char x) { return *postings[a] > *postings[x]; });
	leaq	1(%rbx), %r13	#, _181
# /usr/include/c++/12.2/bits/stl_iterator_base_funcs.h:105:       return __last - __first;
	movq	%rsi, 8(%rsp)	# _183, %sfp
	.p2align 4,,10
	.p2align 3
.L14:
# merge_pseudo_avx_sort_binary_search.cpp:44: 		t->results[pos++] = *postings[segments[0]]++;
	leaq	4(%r9), %rcx	#, tmp172
# merge_pseudo_avx_sort_binary_search.cpp:44: 		t->results[pos++] = *postings[segments[0]]++;
	movl	%edx, (%r12)	# _16, MEM[(int *)_6]
# merge_pseudo_avx_sort_binary_search.cpp:44: 		t->results[pos++] = *postings[segments[0]]++;
	movq	%rcx, (%rax)	# tmp172, *_134
# /usr/include/c++/12.2/bits/stl_algobase.h:1456:       _DistanceType __len = std::distance(__first, __last);
	movq	8(%rsp), %rax	# %sfp, __len
# /usr/include/c++/12.2/bits/stl_algobase.h:1458:       while (__len > 0)
	movq	%r13, %rcx	# _181, __first
	.p2align 4,,10
	.p2align 3
.L12:
# /usr/include/c++/12.2/bits/stl_algobase.h:1458:       while (__len > 0)
	testq	%rax, %rax	# __len
	jle	.L32	#,
.L13:
# /usr/include/c++/12.2/bits/stl_algobase.h:1460: 	  _DistanceType __half = __len >> 1;
	movq	%rax, %rdx	# __len, __half
# /usr/include/c++/12.2/bits/stl_algobase.h:1463: 	  if (__comp(__middle, __val))
	movl	4(%r9), %r10d	# MEM[(int *)_105 + 4B], tmp190
# /usr/include/c++/12.2/bits/stl_algobase.h:1460: 	  _DistanceType __half = __len >> 1;
	sarq	%rdx	# __half
# /usr/include/c++/12.2/bits/stl_iterator_base_funcs.h:194: 	__i += __n;
	leaq	(%rcx,%rdx), %rsi	#, _111
# merge_pseudo_avx_sort_binary_search.cpp:20: 	unsigned char *pos = std::lower_bound(&segments[1], &segments[length], x, [postings](unsigned char a, unsigned char x) { return *postings[a] > *postings[x]; });
	movzbl	(%rsi), %edi	# *_111, *_111
# merge_pseudo_avx_sort_binary_search.cpp:20: 	unsigned char *pos = std::lower_bound(&segments[1], &segments[length], x, [postings](unsigned char a, unsigned char x) { return *postings[a] > *postings[x]; });
	movq	(%r14,%rdi,8), %rdi	# *_90, *_90
# /usr/include/c++/12.2/bits/stl_algobase.h:1463: 	  if (__comp(__middle, __val))
	cmpl	%r10d, (%rdi)	# tmp190, *_91
/* else; jmp L12 */
	jle	.L16	#,
# /usr/include/c++/12.2/bits/stl_algobase.h:1467: 	      __len = __len - __half - 1;
	subq	%rdx, %rax	# __half, _99
# /usr/include/c++/12.2/bits/stl_algobase.h:1466: 	      ++__first;
	leaq	1(%rsi), %rcx	#, __first
# /usr/include/c++/12.2/bits/stl_algobase.h:1467: 	      __len = __len - __half - 1;
	decq	%rax	# __len
# /usr/include/c++/12.2/bits/stl_algobase.h:1458:       while (__len > 0)
	testq	%rax, %rax	# __len
	jg	.L13	#,

/*******
 * END *
 *******/

.L32:
# merge_pseudo_avx_sort_binary_search.cpp:21: 	int i = pos - segments - 1;
	subq	%rbx, %rcx	# segments, tmp176
# merge_pseudo_avx_sort_binary_search.cpp:23: 	memmove(&segments[0], &segments[1], i);
	movq	%r13, %rsi	# _181,
	movq	%rbx, %rdi	# segments,
# merge_pseudo_avx_sort_binary_search.cpp:41: 		if (*postings[segments[0]] == 0)
	addq	$4, %r12	#, ivtmp.35
# merge_pseudo_avx_sort_binary_search.cpp:21: 	int i = pos - segments - 1;
	leal	-1(%rcx), %ebp	#, i
# merge_pseudo_avx_sort_binary_search.cpp:23: 	memmove(&segments[0], &segments[1], i);
	movslq	%ebp, %rbp	# i, _78
	movq	%rbp, %rdx	# _78,
	call	memmove@PLT	#
# merge_pseudo_avx_sort_binary_search.cpp:24: 	segments[i] = x;
	movb	%r15b, (%rbx,%rbp)	# _11, *_79
# merge_pseudo_avx_sort_binary_search.cpp:41: 		if (*postings[segments[0]] == 0)
	movzbl	(%rbx), %eax	# *segments_29,
	movq	%rax, %r15	#,
# merge_pseudo_avx_sort_binary_search.cpp:41: 		if (*postings[segments[0]] == 0)
	leaq	(%r14,%rax,8), %rax	#, _14
	movq	(%rax), %r9	# *_14, _15
# merge_pseudo_avx_sort_binary_search.cpp:41: 		if (*postings[segments[0]] == 0)
	movl	(%r9), %edx	# *_15, _16
# merge_pseudo_avx_sort_binary_search.cpp:41: 		if (*postings[segments[0]] == 0)
	testl	%edx, %edx	# _16
	jne	.L14	#,
.L3:
# merge_pseudo_avx_sort_binary_search.cpp:49: 	free(segments);
	movq	%rbx, %rdi	# segments,
	call	free@PLT	#
# merge_pseudo_avx_sort_binary_search.cpp:50: 	free(postings);
	movq	%r14, %rdi	# postings,
	call	free@PLT	#
# merge_pseudo_avx_sort_binary_search.cpp:53: }
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
.L16:
	.cfi_restore_state
# /usr/include/c++/12.2/bits/stl_algobase.h:1460: 	  _DistanceType __half = __len >> 1;
	movq	%rdx, %rax	# __half, __len
	jmp	.L12	#
	.p2align 4,,10
	.p2align 3
.L15:
	movq	%rbx, %rax	# segments, _177
	jmp	.L8	#
	.cfi_endproc
.LFE670:
	.size	_Z35merge_pseudo_avx_sort_binary_searchP4testi, .-_Z35merge_pseudo_avx_sort_binary_searchP4testi
	.ident	"GCC: (GNU) 12.2.0"
	.section	.note.GNU-stack,"",@progbits
