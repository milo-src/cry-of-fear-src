
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10003290 <.text+0x2290>:
10003290:	55                   	push   ebp
10003291:	8b ec                	mov    ebp,esp
10003293:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10003296:	f3 0f 10 0d e0 13 1a 	movss  xmm1,DWORD PTR ds:0x101a13e0
1000329d:	10 
1000329e:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100032a2:	0f 57 c1             	xorps  xmm0,xmm1
100032a5:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
100032a9:	f3 0f 10 40 04       	movss  xmm0,DWORD PTR [eax+0x4]
100032ae:	0f 57 c1             	xorps  xmm0,xmm1
100032b1:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
100032b6:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
100032bb:	0f 57 c1             	xorps  xmm0,xmm1
100032be:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
100032c3:	5d                   	pop    ebp
100032c4:	c3                   	ret
