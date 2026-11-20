
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10117360 <.text+0x116360>:
10117360:	55                   	push   ebp
10117361:	8b ec                	mov    ebp,esp
10117363:	f3 0f 10 4d 08       	movss  xmm1,DWORD PTR [ebp+0x8]
10117368:	0f 2f 4d 0c          	comiss xmm1,DWORD PTR [ebp+0xc]
1011736c:	0f 28 d1             	movaps xmm2,xmm1
1011736f:	f3 0f 5c 55 0c       	subss  xmm2,DWORD PTR [ebp+0xc]
10117374:	f3 0f 11 55 08       	movss  DWORD PTR [ebp+0x8],xmm2
10117379:	76 1b                	jbe    0x10117396
1011737b:	0f 2f 15 c4 13 1a 10 	comiss xmm2,DWORD PTR ds:0x101a13c4
10117382:	72 2c                	jb     0x101173b0
10117384:	f3 0f 5c 15 cc 13 1a 	subss  xmm2,DWORD PTR ds:0x101a13cc
1011738b:	10 
1011738c:	f3 0f 11 55 08       	movss  DWORD PTR [ebp+0x8],xmm2
10117391:	d9 45 08             	fld    DWORD PTR [ebp+0x8]
10117394:	5d                   	pop    ebp
10117395:	c3                   	ret
10117396:	f3 0f 10 05 d4 13 1a 	movss  xmm0,DWORD PTR ds:0x101a13d4
1011739d:	10 
1011739e:	0f 2f c2             	comiss xmm0,xmm2
101173a1:	72 0d                	jb     0x101173b0
101173a3:	f3 0f 58 15 cc 13 1a 	addss  xmm2,DWORD PTR ds:0x101a13cc
101173aa:	10 
101173ab:	f3 0f 11 55 08       	movss  DWORD PTR [ebp+0x8],xmm2
101173b0:	d9 45 08             	fld    DWORD PTR [ebp+0x8]
101173b3:	5d                   	pop    ebp
101173b4:	c3                   	ret
