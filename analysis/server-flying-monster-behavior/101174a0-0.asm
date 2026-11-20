
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101174a0 <.text+0x1164a0>:
101174a0:	55                   	push   ebp
101174a1:	8b ec                	mov    ebp,esp
101174a3:	f3 0f 10 65 08       	movss  xmm4,DWORD PTR [ebp+0x8]
101174a8:	f3 0f 10 4d 0c       	movss  xmm1,DWORD PTR [ebp+0xc]
101174ad:	0f 28 dc             	movaps xmm3,xmm4
101174b0:	f3 0f 10 55 10       	movss  xmm2,DWORD PTR [ebp+0x10]
101174b5:	f3 0f 5c d9          	subss  xmm3,xmm1
101174b9:	0f 2f da             	comiss xmm3,xmm2
101174bc:	76 0e                	jbe    0x101174cc
101174be:	f3 0f 58 ca          	addss  xmm1,xmm2
101174c2:	f3 0f 11 4d 0c       	movss  DWORD PTR [ebp+0xc],xmm1
101174c7:	d9 45 0c             	fld    DWORD PTR [ebp+0xc]
101174ca:	5d                   	pop    ebp
101174cb:	c3                   	ret
101174cc:	0f 28 c2             	movaps xmm0,xmm2
101174cf:	0f 57 05 e0 13 1a 10 	xorps  xmm0,XMMWORD PTR ds:0x101a13e0
101174d6:	0f 2f c3             	comiss xmm0,xmm3
101174d9:	76 0e                	jbe    0x101174e9
101174db:	f3 0f 5c ca          	subss  xmm1,xmm2
101174df:	f3 0f 11 4d 0c       	movss  DWORD PTR [ebp+0xc],xmm1
101174e4:	d9 45 0c             	fld    DWORD PTR [ebp+0xc]
101174e7:	5d                   	pop    ebp
101174e8:	c3                   	ret
101174e9:	f3 0f 11 65 0c       	movss  DWORD PTR [ebp+0xc],xmm4
101174ee:	d9 45 0c             	fld    DWORD PTR [ebp+0xc]
101174f1:	5d                   	pop    ebp
101174f2:	c3                   	ret
