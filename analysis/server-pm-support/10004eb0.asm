
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10004eb0 <.text+0x3eb0>:
10004eb0:	55                   	push   ebp
10004eb1:	8b ec                	mov    ebp,esp
10004eb3:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
10004eb6:	33 c9                	xor    ecx,ecx
10004eb8:	0f 57 c0             	xorps  xmm0,xmm0
10004ebb:	b8 01 00 00 00       	mov    eax,0x1
10004ec0:	f3 0f 10 62 08       	movss  xmm4,DWORD PTR [edx+0x8]
10004ec5:	0f 2f e0             	comiss xmm4,xmm0
10004ec8:	0f 47 c8             	cmova  ecx,eax
10004ecb:	0f 2e e0             	ucomiss xmm4,xmm0
10004ece:	9f                   	lahf
10004ecf:	f6 c4 44             	test   ah,0x44
10004ed2:	7a 03                	jp     0x10004ed7
10004ed4:	83 c9 02             	or     ecx,0x2
10004ed7:	f3 0f 10 0a          	movss  xmm1,DWORD PTR [edx]
10004edb:	56                   	push   esi
10004edc:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10004edf:	0f 28 c1             	movaps xmm0,xmm1
10004ee2:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
10004ee5:	f3 0f 10 16          	movss  xmm2,DWORD PTR [esi]
10004ee9:	f3 0f 10 5e 04       	movss  xmm3,DWORD PTR [esi+0x4]
10004eee:	f3 0f 59 5a 04       	mulss  xmm3,DWORD PTR [edx+0x4]
10004ef3:	f3 0f 59 c2          	mulss  xmm0,xmm2
10004ef7:	f3 0f 58 d8          	addss  xmm3,xmm0
10004efb:	f3 0f 10 46 08       	movss  xmm0,DWORD PTR [esi+0x8]
10004f00:	f3 0f 59 c4          	mulss  xmm0,xmm4
10004f04:	f2 0f 10 25 58 1f 1a 	movsd  xmm4,QWORD PTR ds:0x101a1f58
10004f0b:	10 
10004f0c:	f3 0f 58 d8          	addss  xmm3,xmm0
10004f10:	f3 0f 59 5d 14       	mulss  xmm3,DWORD PTR [ebp+0x14]
10004f15:	f3 0f 59 cb          	mulss  xmm1,xmm3
10004f19:	f3 0f 5c d1          	subss  xmm2,xmm1
10004f1d:	0f 5a c2             	cvtps2pd xmm0,xmm2
10004f20:	f3 0f 11 10          	movss  DWORD PTR [eax],xmm2
10004f24:	66 0f 2f c4          	comisd xmm0,xmm4
10004f28:	f2 0f 10 15 f8 1d 1a 	movsd  xmm2,QWORD PTR ds:0x101a1df8
10004f2f:	10 
10004f30:	76 0c                	jbe    0x10004f3e
10004f32:	66 0f 2f d0          	comisd xmm2,xmm0
10004f36:	76 06                	jbe    0x10004f3e
10004f38:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
10004f3e:	f3 0f 10 4e 04       	movss  xmm1,DWORD PTR [esi+0x4]
10004f43:	0f 28 c3             	movaps xmm0,xmm3
10004f46:	f3 0f 59 42 04       	mulss  xmm0,DWORD PTR [edx+0x4]
10004f4b:	f3 0f 5c c8          	subss  xmm1,xmm0
10004f4f:	0f 5a c1             	cvtps2pd xmm0,xmm1
10004f52:	f3 0f 11 48 04       	movss  DWORD PTR [eax+0x4],xmm1
10004f57:	66 0f 2f c4          	comisd xmm0,xmm4
10004f5b:	76 0d                	jbe    0x10004f6a
10004f5d:	66 0f 2f d0          	comisd xmm2,xmm0
10004f61:	76 07                	jbe    0x10004f6a
10004f63:	c7 40 04 00 00 00 00 	mov    DWORD PTR [eax+0x4],0x0
10004f6a:	f3 0f 59 5a 08       	mulss  xmm3,DWORD PTR [edx+0x8]
10004f6f:	f3 0f 10 46 08       	movss  xmm0,DWORD PTR [esi+0x8]
10004f74:	5e                   	pop    esi
10004f75:	f3 0f 5c c3          	subss  xmm0,xmm3
10004f79:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
10004f7e:	0f 5a c0             	cvtps2pd xmm0,xmm0
10004f81:	66 0f 2f c4          	comisd xmm0,xmm4
10004f85:	76 0d                	jbe    0x10004f94
10004f87:	66 0f 2f d0          	comisd xmm2,xmm0
10004f8b:	76 07                	jbe    0x10004f94
10004f8d:	c7 40 08 00 00 00 00 	mov    DWORD PTR [eax+0x8],0x0
10004f94:	8b c1                	mov    eax,ecx
10004f96:	5d                   	pop    ebp
10004f97:	c3                   	ret
