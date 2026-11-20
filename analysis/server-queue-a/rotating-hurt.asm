
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100102e0 <.text+0xf2e0>:
100102e0:	55                   	push   ebp
100102e1:	8b ec                	mov    ebp,esp
100102e3:	83 e4 f0             	and    esp,0xfffffff0
100102e6:	83 ec 28             	sub    esp,0x28
100102e9:	56                   	push   esi
100102ea:	57                   	push   edi
100102eb:	8b f9                	mov    edi,ecx
100102ed:	0f 57 c9             	xorps  xmm1,xmm1
100102f0:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100102f3:	0f 29 4c 24 20       	movaps XMMWORD PTR [esp+0x20],xmm1
100102f8:	8b 71 04             	mov    esi,DWORD PTR [ecx+0x4]
100102fb:	f3 0f 10 86 70 01 00 	movss  xmm0,DWORD PTR [esi+0x170]
10010302:	00 
10010303:	0f 2e c1             	ucomiss xmm0,xmm1
10010306:	9f                   	lahf
10010307:	f6 c4 44             	test   ah,0x44
1001030a:	0f 8b 0d 01 00 00    	jnp    0x1001041d
10010310:	f3 0f 10 87 f0 00 00 	movss  xmm0,DWORD PTR [edi+0xf0]
10010317:	00 
10010318:	f3 0f 5e 05 e0 1e 1a 	divss  xmm0,DWORD PTR ds:0x101a1ee0
1001031f:	10 
10010320:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10010323:	6a 01                	push   0x1
10010325:	51                   	push   ecx
10010326:	f3 0f 11 80 e4 01 00 	movss  DWORD PTR [eax+0x1e4],xmm0
1001032d:	00 
1001032e:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10010331:	8b 11                	mov    edx,DWORD PTR [ecx]
10010333:	f3 0f 10 80 e4 01 00 	movss  xmm0,DWORD PTR [eax+0x1e4]
1001033a:	00 
1001033b:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10010340:	50                   	push   eax
10010341:	50                   	push   eax
10010342:	ff 52 64             	call   DWORD PTR [edx+0x64]
10010345:	8b 7f 04             	mov    edi,DWORD PTR [edi+0x4]
10010348:	8d 44 24 14          	lea    eax,[esp+0x14]
1001034c:	57                   	push   edi
1001034d:	50                   	push   eax
1001034e:	e8 cd 20 00 00       	call   0x10012420
10010353:	f3 0f 10 46 0c       	movss  xmm0,DWORD PTR [esi+0xc]
10010358:	83 c4 08             	add    esp,0x8
1001035b:	f3 0f 10 56 08       	movss  xmm2,DWORD PTR [esi+0x8]
10010360:	f3 0f 10 5e 10       	movss  xmm3,DWORD PTR [esi+0x10]
10010365:	f3 0f 5c 40 04       	subss  xmm0,DWORD PTR [eax+0x4]
1001036a:	f3 0f 5c 10          	subss  xmm2,DWORD PTR [eax]
1001036e:	f3 0f 5c 58 08       	subss  xmm3,DWORD PTR [eax+0x8]
10010373:	0f 28 c8             	movaps xmm1,xmm0
10010376:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
1001037c:	f3 0f 59 c8          	mulss  xmm1,xmm0
10010380:	0f 28 c2             	movaps xmm0,xmm2
10010383:	f3 0f 59 c2          	mulss  xmm0,xmm2
10010387:	f3 0f 11 54 24 08    	movss  DWORD PTR [esp+0x8],xmm2
1001038d:	f3 0f 11 5c 24 10    	movss  DWORD PTR [esp+0x10],xmm3
10010393:	f3 0f 58 c8          	addss  xmm1,xmm0
10010397:	0f 28 c3             	movaps xmm0,xmm3
1001039a:	f3 0f 59 c3          	mulss  xmm0,xmm3
1001039e:	f3 0f 58 c8          	addss  xmm1,xmm0
100103a2:	0f 5a c1             	cvtps2pd xmm0,xmm1
100103a5:	0f 57 c9             	xorps  xmm1,xmm1
100103a8:	66 0f 2e c8          	ucomisd xmm1,xmm0
100103ac:	77 06                	ja     0x100103b4
100103ae:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100103b2:	eb 05                	jmp    0x100103b9
100103b4:	e8 d7 ba 15 00       	call   0x1016be90
100103b9:	0f 28 54 24 20       	movaps xmm2,XMMWORD PTR [esp+0x20]
100103be:	f3 0f 10 0d 90 13 1a 	movss  xmm1,DWORD PTR ds:0x101a1390
100103c5:	10 
100103c6:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100103ca:	0f 2e c2             	ucomiss xmm0,xmm2
100103cd:	9f                   	lahf
100103ce:	f6 c4 44             	test   ah,0x44
100103d1:	7a 05                	jp     0x100103d8
100103d3:	0f 28 da             	movaps xmm3,xmm2
100103d6:	eb 1c                	jmp    0x100103f4
100103d8:	f3 0f 5e c8          	divss  xmm1,xmm0
100103dc:	0f 28 d1             	movaps xmm2,xmm1
100103df:	0f 28 d9             	movaps xmm3,xmm1
100103e2:	f3 0f 59 54 24 08    	mulss  xmm2,DWORD PTR [esp+0x8]
100103e8:	f3 0f 59 5c 24 0c    	mulss  xmm3,DWORD PTR [esp+0xc]
100103ee:	f3 0f 59 4c 24 10    	mulss  xmm1,DWORD PTR [esp+0x10]
100103f4:	f3 0f 10 87 e4 01 00 	movss  xmm0,DWORD PTR [edi+0x1e4]
100103fb:	00 
100103fc:	f3 0f 59 d0          	mulss  xmm2,xmm0
10010400:	f3 0f 59 d8          	mulss  xmm3,xmm0
10010404:	f3 0f 59 c8          	mulss  xmm1,xmm0
10010408:	0f 14 d3             	unpcklps xmm2,xmm3
1001040b:	66 0f d6 56 20       	movq   QWORD PTR [esi+0x20],xmm2
10010410:	f3 0f 11 4c 24 1c    	movss  DWORD PTR [esp+0x1c],xmm1
10010416:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
1001041a:	89 46 28             	mov    DWORD PTR [esi+0x28],eax
1001041d:	5f                   	pop    edi
1001041e:	5e                   	pop    esi
1001041f:	8b e5                	mov    esp,ebp
10010421:	5d                   	pop    ebp
10010422:	c2 04 00             	ret    0x4
