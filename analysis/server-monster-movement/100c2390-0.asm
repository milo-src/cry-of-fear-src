
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c2390 <.text+0xc1390>:
100c2390:	55                   	push   ebp
100c2391:	8b ec                	mov    ebp,esp
100c2393:	f3 0f 10 05 d8 1e 1a 	movss  xmm0,DWORD PTR ds:0x101a1ed8
100c239a:	10 
100c239b:	33 c0                	xor    eax,eax
100c239d:	0f 2f 45 08          	comiss xmm0,DWORD PTR [ebp+0x8]
100c23a1:	0f 93 c0             	setae  al
100c23a4:	5d                   	pop    ebp
100c23a5:	c2 04 00             	ret    0x4
