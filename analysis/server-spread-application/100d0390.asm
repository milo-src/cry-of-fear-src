
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100d0390 <.text+0xcf390>:
100d0390:	55                   	push   ebp
100d0391:	8b ec                	mov    ebp,esp
100d0393:	83 e4 f8             	and    esp,0xfffffff8
100d0396:	51                   	push   ecx
100d0397:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
100d039a:	56                   	push   esi
100d039b:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100d039e:	f3 0f 10 0e          	movss  xmm1,DWORD PTR [esi]
100d03a2:	83 e8 01             	sub    eax,0x1
100d03a5:	74 4d                	je     0x100d03f4
100d03a7:	83 e8 01             	sub    eax,0x1
100d03aa:	74 34                	je     0x100d03e0
100d03ac:	83 e8 01             	sub    eax,0x1
100d03af:	75 47                	jne    0x100d03f8
100d03b1:	0f 5a c1             	cvtps2pd xmm0,xmm1
100d03b4:	0f 57 c9             	xorps  xmm1,xmm1
100d03b7:	66 0f 2e c8          	ucomisd xmm1,xmm0
100d03bb:	77 11                	ja     0x100d03ce
100d03bd:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100d03c1:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100d03c5:	f3 0f 11 06          	movss  DWORD PTR [esi],xmm0
100d03c9:	5e                   	pop    esi
100d03ca:	8b e5                	mov    esp,ebp
100d03cc:	5d                   	pop    ebp
100d03cd:	c3                   	ret
100d03ce:	e8 bd ba 09 00       	call   0x1016be90
100d03d3:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100d03d7:	f3 0f 11 06          	movss  DWORD PTR [esi],xmm0
100d03db:	5e                   	pop    esi
100d03dc:	8b e5                	mov    esp,ebp
100d03de:	5d                   	pop    ebp
100d03df:	c3                   	ret
100d03e0:	0f 28 c1             	movaps xmm0,xmm1
100d03e3:	f3 0f 59 c1          	mulss  xmm0,xmm1
100d03e7:	f3 0f 59 c1          	mulss  xmm0,xmm1
100d03eb:	f3 0f 11 06          	movss  DWORD PTR [esi],xmm0
100d03ef:	5e                   	pop    esi
100d03f0:	8b e5                	mov    esp,ebp
100d03f2:	5d                   	pop    ebp
100d03f3:	c3                   	ret
100d03f4:	f3 0f 59 c9          	mulss  xmm1,xmm1
100d03f8:	f3 0f 11 0e          	movss  DWORD PTR [esi],xmm1
100d03fc:	5e                   	pop    esi
100d03fd:	8b e5                	mov    esp,ebp
100d03ff:	5d                   	pop    ebp
100d0400:	c3                   	ret
