
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10042720 <.text+0x41720>:
10042720:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10042725:	33 d2                	xor    edx,edx
10042727:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1004272b:	b8 04 00 00 00       	mov    eax,0x4
10042730:	0f 2f 81 a0 01 00 00 	comiss xmm0,DWORD PTR [ecx+0x1a0]
10042737:	0f 47 c2             	cmova  eax,edx
1004273a:	c3                   	ret
