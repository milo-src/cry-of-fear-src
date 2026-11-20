
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101181f0 <.text+0x1171f0>:
101181f0:	55                   	push   ebp
101181f1:	8b ec                	mov    ebp,esp
101181f3:	83 e4 f8             	and    esp,0xfffffff8
101181f6:	83 ec 08             	sub    esp,0x8
101181f9:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
101181fc:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
101181ff:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
10118203:	f3 0f 5c 00          	subss  xmm0,DWORD PTR [eax]
10118207:	f3 0f 10 51 04       	movss  xmm2,DWORD PTR [ecx+0x4]
1011820c:	f3 0f 5c 50 04       	subss  xmm2,DWORD PTR [eax+0x4]
10118211:	0f 28 c8             	movaps xmm1,xmm0
10118214:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10118219:	f3 0f 59 c8          	mulss  xmm1,xmm0
1011821d:	0f 28 c2             	movaps xmm0,xmm2
10118220:	f3 0f 11 54 24 04    	movss  DWORD PTR [esp+0x4],xmm2
10118226:	f3 0f 59 c2          	mulss  xmm0,xmm2
1011822a:	f3 0f 58 c8          	addss  xmm1,xmm0
1011822e:	0f 5a c1             	cvtps2pd xmm0,xmm1
10118231:	0f 57 c9             	xorps  xmm1,xmm1
10118234:	66 0f 2e c8          	ucomisd xmm1,xmm0
10118238:	77 06                	ja     0x10118240
1011823a:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
1011823e:	eb 05                	jmp    0x10118245
10118240:	e8 4b 3c 05 00       	call   0x1016be90
10118245:	0f 57 c9             	xorps  xmm1,xmm1
10118248:	0f 57 d2             	xorps  xmm2,xmm2
1011824b:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
1011824f:	0f 2e ca             	ucomiss xmm1,xmm2
10118252:	9f                   	lahf
10118253:	f6 c4 44             	test   ah,0x44
10118256:	7a 05                	jp     0x1011825d
10118258:	0f 57 db             	xorps  xmm3,xmm3
1011825b:	eb 1f                	jmp    0x1011827c
1011825d:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
10118264:	10 
10118265:	f3 0f 5e c1          	divss  xmm0,xmm1
10118269:	f3 0f 10 14 24       	movss  xmm2,DWORD PTR [esp]
1011826e:	f3 0f 10 5c 24 04    	movss  xmm3,DWORD PTR [esp+0x4]
10118274:	f3 0f 59 d0          	mulss  xmm2,xmm0
10118278:	f3 0f 59 d8          	mulss  xmm3,xmm0
1011827c:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1011827f:	f3 0f 10 48 04       	movss  xmm1,DWORD PTR [eax+0x4]
10118284:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10118288:	f3 0f 59 cb          	mulss  xmm1,xmm3
1011828c:	f3 0f 59 c2          	mulss  xmm0,xmm2
10118290:	f3 0f 58 c8          	addss  xmm1,xmm0
10118294:	f3 0f 11 4c 24 04    	movss  DWORD PTR [esp+0x4],xmm1
1011829a:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
1011829e:	8b e5                	mov    esp,ebp
101182a0:	5d                   	pop    ebp
101182a1:	c3                   	ret
