
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bd850 <.text+0xbc850>:
100bd850:	55                   	push   ebp
100bd851:	8b ec                	mov    ebp,esp
100bd853:	f3 0f 10 4d 0c       	movss  xmm1,DWORD PTR [ebp+0xc]
100bd858:	0f 2f 0d 04 1f 1a 10 	comiss xmm1,DWORD PTR ds:0x101a1f04
100bd85f:	76 24                	jbe    0x100bd885
100bd861:	f3 0f 10 05 20 5e 1a 	movss  xmm0,DWORD PTR ds:0x101a5e20
100bd868:	10 
100bd869:	0f 2f c1             	comiss xmm0,xmm1
100bd86c:	72 17                	jb     0x100bd885
100bd86e:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
100bd873:	0f 2f 05 d8 1d 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1dd8
100bd87a:	72 09                	jb     0x100bd885
100bd87c:	b8 01 00 00 00       	mov    eax,0x1
100bd881:	5d                   	pop    ebp
100bd882:	c2 08 00             	ret    0x8
100bd885:	33 c0                	xor    eax,eax
100bd887:	5d                   	pop    ebp
100bd888:	c2 08 00             	ret    0x8
