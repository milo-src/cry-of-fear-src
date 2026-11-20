
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000eda0 <.text+0xdda0>:
1000eda0:	55                   	push   ebp
1000eda1:	8b ec                	mov    ebp,esp
1000eda3:	f3 0f 10 55 08       	movss  xmm2,DWORD PTR [ebp+0x8]
1000eda8:	0f 57 db             	xorps  xmm3,xmm3
1000edab:	0f 2e d3             	ucomiss xmm2,xmm3
1000edae:	8b d1                	mov    edx,ecx
1000edb0:	9f                   	lahf
1000edb1:	f6 c4 44             	test   ah,0x44
1000edb4:	7a 3b                	jp     0x1000edf1
1000edb6:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000edbb:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
1000edbe:	f2 0f 10 05 e0 1d 1a 	movsd  xmm0,QWORD PTR ds:0x101a1de0
1000edc5:	10 
1000edc6:	f3 0f 10 20          	movss  xmm4,DWORD PTR [eax]
1000edca:	0f 28 d4             	movaps xmm2,xmm4
1000edcd:	f3 0f 5c 91 38 01 00 	subss  xmm2,DWORD PTR [ecx+0x138]
1000edd4:	00 
1000edd5:	0f 5a ca             	cvtps2pd xmm1,xmm2
1000edd8:	f3 0f 11 55 08       	movss  DWORD PTR [ebp+0x8],xmm2
1000eddd:	66 0f 2f c1          	comisd xmm0,xmm1
1000ede1:	72 0e                	jb     0x1000edf1
1000ede3:	d9 ee                	fldz
1000ede5:	f3 0f 11 a1 38 01 00 	movss  DWORD PTR [ecx+0x138],xmm4
1000edec:	00 
1000eded:	5d                   	pop    ebp
1000edee:	c2 04 00             	ret    0x4
1000edf1:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
1000edf4:	f3 0f 10 81 38 01 00 	movss  xmm0,DWORD PTR [ecx+0x138]
1000edfb:	00 
1000edfc:	0f 2e c3             	ucomiss xmm0,xmm3
1000edff:	9f                   	lahf
1000ee00:	f6 c4 44             	test   ah,0x44
1000ee03:	7a 08                	jp     0x1000ee0d
1000ee05:	0f 57 d2             	xorps  xmm2,xmm2
1000ee08:	f3 0f 11 55 08       	movss  DWORD PTR [ebp+0x8],xmm2
1000ee0d:	f3 0f 10 82 ec 00 00 	movss  xmm0,DWORD PTR [edx+0xec]
1000ee14:	00 
1000ee15:	f3 0f 59 c2          	mulss  xmm0,xmm2
1000ee19:	f3 0f 59 81 3c 01 00 	mulss  xmm0,DWORD PTR [ecx+0x13c]
1000ee20:	00 
1000ee21:	f3 0f 58 81 34 01 00 	addss  xmm0,DWORD PTR [ecx+0x134]
1000ee28:	00 
1000ee29:	f3 0f 11 81 34 01 00 	movss  DWORD PTR [ecx+0x134],xmm0
1000ee30:	00 
1000ee31:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000ee36:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
1000ee39:	8b 00                	mov    eax,DWORD PTR [eax]
1000ee3b:	89 81 38 01 00 00    	mov    DWORD PTR [ecx+0x138],eax
1000ee41:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
1000ee44:	f3 0f 10 81 34 01 00 	movss  xmm0,DWORD PTR [ecx+0x134]
1000ee4b:	00 
1000ee4c:	0f 2f d8             	comiss xmm3,xmm0
1000ee4f:	77 09                	ja     0x1000ee5a
1000ee51:	0f 2f 05 84 13 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1384
1000ee58:	72 5d                	jb     0x1000eeb7
1000ee5a:	83 ba fc 00 00 00 00 	cmp    DWORD PTR [edx+0xfc],0x0
1000ee61:	74 2c                	je     0x1000ee8f
1000ee63:	0f 5a c8             	cvtps2pd xmm1,xmm0
1000ee66:	0f 28 c1             	movaps xmm0,xmm1
1000ee69:	f2 0f 59 05 68 2e 1a 	mulsd  xmm0,QWORD PTR ds:0x101a2e68
1000ee70:	10 
1000ee71:	f2 0f 2c c0          	cvttsd2si eax,xmm0
1000ee75:	66 0f 6e c0          	movd   xmm0,eax
1000ee79:	f3 0f e6 c0          	cvtdq2pd xmm0,xmm0
1000ee7d:	f2 0f 59 05 70 2e 1a 	mulsd  xmm0,QWORD PTR ds:0x101a2e70
1000ee84:	10 
1000ee85:	f2 0f 5c c8          	subsd  xmm1,xmm0
1000ee89:	66 0f 5a c1          	cvtpd2ps xmm0,xmm1
1000ee8d:	eb 16                	jmp    0x1000eea5
1000ee8f:	56                   	push   esi
1000ee90:	33 f6                	xor    esi,esi
1000ee92:	b8 ff 00 00 00       	mov    eax,0xff
1000ee97:	0f 2f d8             	comiss xmm3,xmm0
1000ee9a:	0f 47 c6             	cmova  eax,esi
1000ee9d:	5e                   	pop    esi
1000ee9e:	66 0f 6e c0          	movd   xmm0,eax
1000eea2:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1000eea5:	f3 0f 11 81 34 01 00 	movss  DWORD PTR [ecx+0x134],xmm0
1000eeac:	00 
1000eead:	c7 82 f8 00 00 00 01 	mov    DWORD PTR [edx+0xf8],0x1
1000eeb4:	00 00 00 
1000eeb7:	d9 45 08             	fld    DWORD PTR [ebp+0x8]
1000eeba:	5d                   	pop    ebp
1000eebb:	c2 04 00             	ret    0x4
