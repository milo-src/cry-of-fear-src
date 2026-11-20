
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100abea0 <.text+0xaaea0>:
100abea0:	55                   	push   ebp
100abea1:	8b ec                	mov    ebp,esp
100abea3:	83 e4 f8             	and    esp,0xfffffff8
100abea6:	51                   	push   ecx
100abea7:	56                   	push   esi
100abea8:	8b f1                	mov    esi,ecx
100abeaa:	8b 8e bc 02 00 00    	mov    ecx,DWORD PTR [esi+0x2bc]
100abeb0:	03 c9                	add    ecx,ecx
100abeb2:	f6 84 ce 44 02 00 00 	test   BYTE PTR [esi+ecx*8+0x244],0x80
100abeb9:	80 
100abeba:	74 68                	je     0x100abf24
100abebc:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100abebf:	f3 0f 10 8c ce 38 02 	movss  xmm1,DWORD PTR [esi+ecx*8+0x238]
100abec6:	00 00 
100abec8:	f3 0f 10 94 ce 3c 02 	movss  xmm2,DWORD PTR [esi+ecx*8+0x23c]
100abecf:	00 00 
100abed1:	f3 0f 10 84 ce 40 02 	movss  xmm0,DWORD PTR [esi+ecx*8+0x240]
100abed8:	00 00 
100abeda:	f3 0f 5c 50 0c       	subss  xmm2,DWORD PTR [eax+0xc]
100abedf:	f3 0f 5c 48 08       	subss  xmm1,DWORD PTR [eax+0x8]
100abee4:	f3 0f 5c 40 10       	subss  xmm0,DWORD PTR [eax+0x10]
100abee9:	f3 0f 59 d2          	mulss  xmm2,xmm2
100abeed:	f3 0f 59 c9          	mulss  xmm1,xmm1
100abef1:	f3 0f 59 c0          	mulss  xmm0,xmm0
100abef5:	f3 0f 58 d1          	addss  xmm2,xmm1
100abef9:	0f 57 c9             	xorps  xmm1,xmm1
100abefc:	f3 0f 58 d0          	addss  xmm2,xmm0
100abf00:	0f 5a c2             	cvtps2pd xmm0,xmm2
100abf03:	66 0f 2e c8          	ucomisd xmm1,xmm0
100abf07:	77 0d                	ja     0x100abf16
100abf09:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100abf0d:	0f 57 c9             	xorps  xmm1,xmm1
100abf10:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
100abf14:	eb 13                	jmp    0x100abf29
100abf16:	e8 75 ff 0b 00       	call   0x1016be90
100abf1b:	0f 57 c9             	xorps  xmm1,xmm1
100abf1e:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
100abf22:	eb 05                	jmp    0x100abf29
100abf24:	f3 0f 10 4d 08       	movss  xmm1,DWORD PTR [ebp+0x8]
100abf29:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100abf2e:	f3 0f 10 86 f0 00 00 	movss  xmm0,DWORD PTR [esi+0xf0]
100abf35:	00 
100abf36:	5e                   	pop    esi
100abf37:	f3 0f 59 40 04       	mulss  xmm0,DWORD PTR [eax+0x4]
100abf3c:	33 c0                	xor    eax,eax
100abf3e:	f3 0f 58 05 04 1f 1a 	addss  xmm0,DWORD PTR ds:0x101a1f04
100abf45:	10 
100abf46:	0f 2f c1             	comiss xmm0,xmm1
100abf49:	0f 93 c0             	setae  al
100abf4c:	8b e5                	mov    esp,ebp
100abf4e:	5d                   	pop    ebp
100abf4f:	c2 04 00             	ret    0x4
