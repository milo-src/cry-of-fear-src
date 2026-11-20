
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100033d0 <.text+0x23d0>:
100033d0:	55                   	push   ebp
100033d1:	8b ec                	mov    ebp,esp
100033d3:	83 e4 f8             	and    esp,0xfffffff8
100033d6:	83 ec 14             	sub    esp,0x14
100033d9:	56                   	push   esi
100033da:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100033dd:	f3 0f 10 06          	movss  xmm0,DWORD PTR [esi]
100033e1:	f3 0f 10 56 04       	movss  xmm2,DWORD PTR [esi+0x4]
100033e6:	0f 28 c8             	movaps xmm1,xmm0
100033e9:	f3 0f 10 5e 08       	movss  xmm3,DWORD PTR [esi+0x8]
100033ee:	f3 0f 59 c8          	mulss  xmm1,xmm0
100033f2:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
100033f8:	0f 28 c2             	movaps xmm0,xmm2
100033fb:	f3 0f 59 c2          	mulss  xmm0,xmm2
100033ff:	f3 0f 11 54 24 10    	movss  DWORD PTR [esp+0x10],xmm2
10003405:	f3 0f 11 5c 24 14    	movss  DWORD PTR [esp+0x14],xmm3
1000340b:	f3 0f 58 c8          	addss  xmm1,xmm0
1000340f:	0f 28 c3             	movaps xmm0,xmm3
10003412:	f3 0f 59 c3          	mulss  xmm0,xmm3
10003416:	f3 0f 58 c8          	addss  xmm1,xmm0
1000341a:	0f 5a c1             	cvtps2pd xmm0,xmm1
1000341d:	0f 57 c9             	xorps  xmm1,xmm1
10003420:	66 0f 2e c8          	ucomisd xmm1,xmm0
10003424:	77 06                	ja     0x1000342c
10003426:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
1000342a:	eb 05                	jmp    0x10003431
1000342c:	e8 5f 8a 16 00       	call   0x1016be90
10003431:	0f 57 c9             	xorps  xmm1,xmm1
10003434:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
10003438:	0f 2e 0d 70 13 1a 10 	ucomiss xmm1,DWORD PTR ds:0x101a1370
1000343f:	f3 0f 11 4c 24 08    	movss  DWORD PTR [esp+0x8],xmm1
10003445:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
10003449:	9f                   	lahf
1000344a:	f6 c4 44             	test   ah,0x44
1000344d:	7b 38                	jnp    0x10003487
1000344f:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
10003456:	10 
10003457:	f3 0f 5e c1          	divss  xmm0,xmm1
1000345b:	f3 0f 10 4c 24 0c    	movss  xmm1,DWORD PTR [esp+0xc]
10003461:	f3 0f 59 c8          	mulss  xmm1,xmm0
10003465:	f3 0f 11 0e          	movss  DWORD PTR [esi],xmm1
10003469:	f3 0f 10 4c 24 10    	movss  xmm1,DWORD PTR [esp+0x10]
1000346f:	f3 0f 59 c8          	mulss  xmm1,xmm0
10003473:	f3 0f 11 4e 04       	movss  DWORD PTR [esi+0x4],xmm1
10003478:	f3 0f 10 4c 24 14    	movss  xmm1,DWORD PTR [esp+0x14]
1000347e:	f3 0f 59 c8          	mulss  xmm1,xmm0
10003482:	f3 0f 11 4e 08       	movss  DWORD PTR [esi+0x8],xmm1
10003487:	5e                   	pop    esi
10003488:	8b e5                	mov    esp,ebp
1000348a:	5d                   	pop    ebp
1000348b:	c3                   	ret
