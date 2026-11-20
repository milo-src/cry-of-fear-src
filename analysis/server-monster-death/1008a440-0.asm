
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008a440 <.text+0x89440>:
1008a440:	55                   	push   ebp
1008a441:	8b ec                	mov    ebp,esp
1008a443:	83 e4 f8             	and    esp,0xfffffff8
1008a446:	83 ec 0c             	sub    esp,0xc
1008a449:	56                   	push   esi
1008a44a:	8b 71 04             	mov    esi,DWORD PTR [ecx+0x4]
1008a44d:	f3 0f 10 4e 20       	movss  xmm1,DWORD PTR [esi+0x20]
1008a452:	f3 0f 10 46 24       	movss  xmm0,DWORD PTR [esi+0x24]
1008a457:	f3 0f 59 c0          	mulss  xmm0,xmm0
1008a45b:	f3 0f 59 c9          	mulss  xmm1,xmm1
1008a45f:	f3 0f 58 c8          	addss  xmm1,xmm0
1008a463:	f3 0f 10 46 28       	movss  xmm0,DWORD PTR [esi+0x28]
1008a468:	f3 0f 59 c0          	mulss  xmm0,xmm0
1008a46c:	f3 0f 58 c8          	addss  xmm1,xmm0
1008a470:	0f 5a c1             	cvtps2pd xmm0,xmm1
1008a473:	0f 57 c9             	xorps  xmm1,xmm1
1008a476:	66 0f 2e c8          	ucomisd xmm1,xmm0
1008a47a:	77 06                	ja     0x1008a482
1008a47c:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
1008a480:	eb 05                	jmp    0x1008a487
1008a482:	e8 09 1a 0e 00       	call   0x1016be90
1008a487:	f3 0f 10 25 58 ef 1b 	movss  xmm4,DWORD PTR ds:0x101bef58
1008a48e:	10 
1008a48f:	0f 57 d2             	xorps  xmm2,xmm2
1008a492:	f2 0f 5a d0          	cvtsd2ss xmm2,xmm0
1008a496:	0f 2f d4             	comiss xmm2,xmm4
1008a499:	76 61                	jbe    0x1008a4fc
1008a49b:	0f 57 c9             	xorps  xmm1,xmm1
1008a49e:	0f 2e d1             	ucomiss xmm2,xmm1
1008a4a1:	9f                   	lahf
1008a4a2:	f6 c4 44             	test   ah,0x44
1008a4a5:	7a 0d                	jp     0x1008a4b4
1008a4a7:	f3 0f 10 15 90 13 1a 	movss  xmm2,DWORD PTR ds:0x101a1390
1008a4ae:	10 
1008a4af:	0f 57 db             	xorps  xmm3,xmm3
1008a4b2:	eb 27                	jmp    0x1008a4db
1008a4b4:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
1008a4bb:	10 
1008a4bc:	f3 0f 5e c2          	divss  xmm0,xmm2
1008a4c0:	f3 0f 10 4e 20       	movss  xmm1,DWORD PTR [esi+0x20]
1008a4c5:	f3 0f 10 5e 24       	movss  xmm3,DWORD PTR [esi+0x24]
1008a4ca:	f3 0f 10 56 28       	movss  xmm2,DWORD PTR [esi+0x28]
1008a4cf:	f3 0f 59 c8          	mulss  xmm1,xmm0
1008a4d3:	f3 0f 59 d8          	mulss  xmm3,xmm0
1008a4d7:	f3 0f 59 d0          	mulss  xmm2,xmm0
1008a4db:	f3 0f 59 cc          	mulss  xmm1,xmm4
1008a4df:	f3 0f 59 dc          	mulss  xmm3,xmm4
1008a4e3:	f3 0f 59 d4          	mulss  xmm2,xmm4
1008a4e7:	0f 14 cb             	unpcklps xmm1,xmm3
1008a4ea:	66 0f d6 4e 20       	movq   QWORD PTR [esi+0x20],xmm1
1008a4ef:	f3 0f 11 54 24 0c    	movss  DWORD PTR [esp+0xc],xmm2
1008a4f5:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
1008a4f9:	89 46 28             	mov    DWORD PTR [esi+0x28],eax
1008a4fc:	5e                   	pop    esi
1008a4fd:	8b e5                	mov    esp,ebp
1008a4ff:	5d                   	pop    ebp
1008a500:	c3                   	ret
