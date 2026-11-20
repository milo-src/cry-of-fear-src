
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bd890 <.text+0xbc890>:
100bd890:	55                   	push   ebp
100bd891:	8b ec                	mov    ebp,esp
100bd893:	f3 0f 10 4d 0c       	movss  xmm1,DWORD PTR [ebp+0xc]
100bd898:	0f 2f 0d 04 1f 1a 10 	comiss xmm1,DWORD PTR ds:0x101a1f04
100bd89f:	76 24                	jbe    0x100bd8c5
100bd8a1:	f3 0f 10 05 2c b9 1a 	movss  xmm0,DWORD PTR ds:0x101ab92c
100bd8a8:	10 
100bd8a9:	0f 2f c1             	comiss xmm0,xmm1
100bd8ac:	72 17                	jb     0x100bd8c5
100bd8ae:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
100bd8b3:	0f 2f 05 d8 1d 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1dd8
100bd8ba:	72 09                	jb     0x100bd8c5
100bd8bc:	b8 01 00 00 00       	mov    eax,0x1
100bd8c1:	5d                   	pop    ebp
100bd8c2:	c2 08 00             	ret    0x8
100bd8c5:	33 c0                	xor    eax,eax
100bd8c7:	5d                   	pop    ebp
100bd8c8:	c2 08 00             	ret    0x8
