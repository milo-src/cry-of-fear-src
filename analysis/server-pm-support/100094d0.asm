
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100094d0 <.text+0x84d0>:
100094d0:	55                   	push   ebp
100094d1:	8b ec                	mov    ebp,esp
100094d3:	f3 0f 10 55 08       	movss  xmm2,DWORD PTR [ebp+0x8]
100094d8:	f3 0f 59 55 0c       	mulss  xmm2,DWORD PTR [ebp+0xc]
100094dd:	0f 28 ca             	movaps xmm1,xmm2
100094e0:	f3 0f 59 ca          	mulss  xmm1,xmm2
100094e4:	0f 28 c1             	movaps xmm0,xmm1
100094e7:	f3 0f 58 c9          	addss  xmm1,xmm1
100094eb:	f3 0f 59 05 a0 1e 1a 	mulss  xmm0,DWORD PTR ds:0x101a1ea0
100094f2:	10 
100094f3:	f3 0f 59 ca          	mulss  xmm1,xmm2
100094f7:	f3 0f 5c c1          	subss  xmm0,xmm1
100094fb:	f3 0f 11 45 08       	movss  DWORD PTR [ebp+0x8],xmm0
10009500:	d9 45 08             	fld    DWORD PTR [ebp+0x8]
10009503:	5d                   	pop    ebp
10009504:	c3                   	ret
