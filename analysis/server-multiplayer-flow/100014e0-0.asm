
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100014e0 <.text+0x4e0>:
100014e0:	55                   	push   ebp
100014e1:	8b ec                	mov    ebp,esp
100014e3:	f2 0f 10 4d 08       	movsd  xmm1,QWORD PTR [ebp+0x8]
100014e8:	f2 0f 58 49 18       	addsd  xmm1,QWORD PTR [ecx+0x18]
100014ed:	f2 0f 10 05 78 13 1a 	movsd  xmm0,QWORD PTR ds:0x101a1378
100014f4:	10 
100014f5:	66 0f 2f c1          	comisd xmm0,xmm1
100014f9:	f2 0f 11 49 18       	movsd  QWORD PTR [ecx+0x18],xmm1
100014fe:	77 05                	ja     0x10001505
10001500:	e8 0b 00 00 00       	call   0x10001510
10001505:	5d                   	pop    ebp
10001506:	c2 08 00             	ret    0x8
