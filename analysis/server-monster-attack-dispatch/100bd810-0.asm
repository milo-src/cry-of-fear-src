
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bd810 <.text+0xbc810>:
100bd810:	55                   	push   ebp
100bd811:	8b ec                	mov    ebp,esp
100bd813:	f3 0f 10 05 04 1f 1a 	movss  xmm0,DWORD PTR ds:0x101a1f04
100bd81a:	10 
100bd81b:	0f 2f 45 0c          	comiss xmm0,DWORD PTR [ebp+0xc]
100bd81f:	72 1b                	jb     0x100bd83c
100bd821:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
100bd826:	0f 5a c0             	cvtps2pd xmm0,xmm0
100bd829:	66 0f 2f 05 58 1e 1a 	comisd xmm0,QWORD PTR ds:0x101a1e58
100bd830:	10 
100bd831:	72 09                	jb     0x100bd83c
100bd833:	b8 01 00 00 00       	mov    eax,0x1
100bd838:	5d                   	pop    ebp
100bd839:	c2 08 00             	ret    0x8
100bd83c:	33 c0                	xor    eax,eax
100bd83e:	5d                   	pop    ebp
100bd83f:	c2 08 00             	ret    0x8
