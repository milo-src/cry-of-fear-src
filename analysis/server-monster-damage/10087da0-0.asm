
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10087da0 <.text+0x86da0>:
10087da0:	55                   	push   ebp
10087da1:	8b ec                	mov    ebp,esp
10087da3:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
10087da6:	f2 0f 10 0d c0 61 1a 	movsd  xmm1,QWORD PTR ds:0x101a61c0
10087dad:	10 
10087dae:	f3 0f 10 80 f8 00 00 	movss  xmm0,DWORD PTR [eax+0xf8]
10087db5:	00 
10087db6:	f3 0f 59 80 f4 00 00 	mulss  xmm0,DWORD PTR [eax+0xf4]
10087dbd:	00 
10087dbe:	f3 0f 59 80 fc 00 00 	mulss  xmm0,DWORD PTR [eax+0xfc]
10087dc5:	00 
10087dc6:	0f 5a c0             	cvtps2pd xmm0,xmm0
10087dc9:	f2 0f 5e c8          	divsd  xmm1,xmm0
10087dcd:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
10087dd2:	0f 5a c0             	cvtps2pd xmm0,xmm0
10087dd5:	f2 0f 59 c8          	mulsd  xmm1,xmm0
10087dd9:	f2 0f 59 0d b8 61 1a 	mulsd  xmm1,QWORD PTR ds:0x101a61b8
10087de0:	10 
10087de1:	66 0f 5a c1          	cvtpd2ps xmm0,xmm1
10087de5:	f3 0f 11 45 08       	movss  DWORD PTR [ebp+0x8],xmm0
10087dea:	0f 5a c0             	cvtps2pd xmm0,xmm0
10087ded:	66 0f 2f 05 c0 1e 1a 	comisd xmm0,QWORD PTR ds:0x101a1ec0
10087df4:	10 
10087df5:	76 07                	jbe    0x10087dfe
10087df7:	c7 45 08 00 00 7a 44 	mov    DWORD PTR [ebp+0x8],0x447a0000
10087dfe:	d9 45 08             	fld    DWORD PTR [ebp+0x8]
10087e01:	5d                   	pop    ebp
10087e02:	c2 04 00             	ret    0x4
