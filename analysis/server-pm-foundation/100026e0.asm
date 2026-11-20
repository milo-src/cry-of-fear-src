
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100026e0 <.text+0x16e0>:
100026e0:	55                   	push   ebp
100026e1:	8b ec                	mov    ebp,esp
100026e3:	83 ec 08             	sub    esp,0x8
100026e6:	56                   	push   esi
100026e7:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100026ea:	57                   	push   edi
100026eb:	56                   	push   esi
100026ec:	e8 df 08 00 00       	call   0x10002fd0
100026f1:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
100026f4:	d9 5d f8             	fstp   DWORD PTR [ebp-0x8]
100026f7:	57                   	push   edi
100026f8:	e8 d3 08 00 00       	call   0x10002fd0
100026fd:	f3 0f 10 45 f8       	movss  xmm0,DWORD PTR [ebp-0x8]
10002702:	83 c4 08             	add    esp,0x8
10002705:	0f 57 c9             	xorps  xmm1,xmm1
10002708:	0f 2e c1             	ucomiss xmm0,xmm1
1000270b:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
1000270e:	9f                   	lahf
1000270f:	f6 c4 44             	test   ah,0x44
10002712:	7b 75                	jnp    0x10002789
10002714:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
10002719:	0f 2e c1             	ucomiss xmm0,xmm1
1000271c:	9f                   	lahf
1000271d:	f6 c4 44             	test   ah,0x44
10002720:	7b 67                	jnp    0x10002789
10002722:	f3 0f 10 4e 04       	movss  xmm1,DWORD PTR [esi+0x4]
10002727:	f3 0f 10 06          	movss  xmm0,DWORD PTR [esi]
1000272b:	f3 0f 59 07          	mulss  xmm0,DWORD PTR [edi]
1000272f:	f3 0f 59 4f 04       	mulss  xmm1,DWORD PTR [edi+0x4]
10002734:	f3 0f 58 c8          	addss  xmm1,xmm0
10002738:	f3 0f 10 46 08       	movss  xmm0,DWORD PTR [esi+0x8]
1000273d:	f3 0f 59 47 08       	mulss  xmm0,DWORD PTR [edi+0x8]
10002742:	f3 0f 58 c8          	addss  xmm1,xmm0
10002746:	0f 5a c1             	cvtps2pd xmm0,xmm1
10002749:	e8 92 8e 16 00       	call   0x1016b5e0
1000274e:	f3 0f 10 4d fc       	movss  xmm1,DWORD PTR [ebp-0x4]
10002753:	f3 0f 59 4d f8       	mulss  xmm1,DWORD PTR [ebp-0x8]
10002758:	5f                   	pop    edi
10002759:	5e                   	pop    esi
1000275a:	0f 5a c9             	cvtps2pd xmm1,xmm1
1000275d:	f2 0f 5e c1          	divsd  xmm0,xmm1
10002761:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
10002765:	f3 0f 59 05 c4 13 1a 	mulss  xmm0,DWORD PTR ds:0x101a13c4
1000276c:	10 
1000276d:	f3 0f 5a c0          	cvtss2sd xmm0,xmm0
10002771:	f2 0f 5e 05 a0 13 1a 	divsd  xmm0,QWORD PTR ds:0x101a13a0
10002778:	10 
10002779:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
1000277d:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
10002782:	d9 45 f8             	fld    DWORD PTR [ebp-0x8]
10002785:	8b e5                	mov    esp,ebp
10002787:	5d                   	pop    ebp
10002788:	c3                   	ret
10002789:	d9 ee                	fldz
1000278b:	5f                   	pop    edi
1000278c:	5e                   	pop    esi
1000278d:	8b e5                	mov    esp,ebp
1000278f:	5d                   	pop    ebp
10002790:	c3                   	ret
