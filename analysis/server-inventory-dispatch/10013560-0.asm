
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10013560 <.text+0x12560>:
10013560:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
10013563:	83 b8 74 01 00 00 00 	cmp    DWORD PTR [eax+0x174],0x0
1001356a:	75 17                	jne    0x10013583
1001356c:	f3 0f 10 80 64 01 00 	movss  xmm0,DWORD PTR [eax+0x164]
10013573:	00 
10013574:	0f 2f 05 70 13 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1370
1001357b:	76 06                	jbe    0x10013583
1001357d:	b8 01 00 00 00       	mov    eax,0x1
10013582:	c3                   	ret
10013583:	33 c0                	xor    eax,eax
10013585:	c3                   	ret
