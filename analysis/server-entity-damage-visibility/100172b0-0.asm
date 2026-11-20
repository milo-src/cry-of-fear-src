
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100172b0 <.text+0x162b0>:
100172b0:	55                   	push   ebp
100172b1:	8b ec                	mov    ebp,esp
100172b3:	83 e4 f8             	and    esp,0xfffffff8
100172b6:	83 ec 24             	sub    esp,0x24
100172b9:	53                   	push   ebx
100172ba:	56                   	push   esi
100172bb:	57                   	push   edi
100172bc:	8b f9                	mov    edi,ecx
100172be:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100172c1:	f3 0f 10 81 70 01 00 	movss  xmm0,DWORD PTR [ecx+0x170]
100172c8:	00 
100172c9:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
100172d0:	9f                   	lahf
100172d1:	f6 c4 44             	test   ah,0x44
100172d4:	0f 8b 99 02 00 00    	jnp    0x10017573
100172da:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100172dd:	8d 44 24 18          	lea    eax,[esp+0x18]
100172e1:	51                   	push   ecx
100172e2:	50                   	push   eax
100172e3:	e8 38 b1 ff ff       	call   0x10012420
100172e8:	f3 0f 10 46 08       	movss  xmm0,DWORD PTR [esi+0x8]
100172ed:	83 c4 08             	add    esp,0x8
100172f0:	f3 0f 10 56 0c       	movss  xmm2,DWORD PTR [esi+0xc]
100172f5:	f3 0f 10 5e 10       	movss  xmm3,DWORD PTR [esi+0x10]
100172fa:	f3 0f 5c 00          	subss  xmm0,DWORD PTR [eax]
100172fe:	f3 0f 5c 50 04       	subss  xmm2,DWORD PTR [eax+0x4]
10017303:	f3 0f 5c 58 08       	subss  xmm3,DWORD PTR [eax+0x8]
10017308:	0f 28 c8             	movaps xmm1,xmm0
1001730b:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
10017311:	f3 0f 59 c8          	mulss  xmm1,xmm0
10017315:	0f 28 c2             	movaps xmm0,xmm2
10017318:	f3 0f 59 c2          	mulss  xmm0,xmm2
1001731c:	f3 0f 11 54 24 10    	movss  DWORD PTR [esp+0x10],xmm2
10017322:	f3 0f 11 5c 24 14    	movss  DWORD PTR [esp+0x14],xmm3
10017328:	f3 0f 58 c8          	addss  xmm1,xmm0
1001732c:	0f 28 c3             	movaps xmm0,xmm3
1001732f:	f3 0f 59 c3          	mulss  xmm0,xmm3
10017333:	f3 0f 58 c8          	addss  xmm1,xmm0
10017337:	0f 5a c1             	cvtps2pd xmm0,xmm1
1001733a:	0f 57 c9             	xorps  xmm1,xmm1
1001733d:	66 0f 2e c8          	ucomisd xmm1,xmm0
10017341:	77 06                	ja     0x10017349
10017343:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
10017347:	eb 05                	jmp    0x1001734e
10017349:	e8 42 4b 15 00       	call   0x1016be90
1001734e:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
10017352:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
10017359:	9f                   	lahf
1001735a:	f6 c4 44             	test   ah,0x44
1001735d:	7a 1a                	jp     0x10017379
1001735f:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
10017366:	00 
10017367:	c7 44 24 1c 00 00 00 	mov    DWORD PTR [esp+0x1c],0x0
1001736e:	00 
1001736f:	c7 44 24 20 00 00 80 	mov    DWORD PTR [esp+0x20],0x3f800000
10017376:	3f 
10017377:	eb 36                	jmp    0x100173af
10017379:	f3 0f 10 0d 90 13 1a 	movss  xmm1,DWORD PTR ds:0x101a1390
10017380:	10 
10017381:	f3 0f 5e c8          	divss  xmm1,xmm0
10017385:	0f 28 c1             	movaps xmm0,xmm1
10017388:	f3 0f 59 44 24 0c    	mulss  xmm0,DWORD PTR [esp+0xc]
1001738e:	f3 0f 11 44 24 18    	movss  DWORD PTR [esp+0x18],xmm0
10017394:	0f 28 c1             	movaps xmm0,xmm1
10017397:	f3 0f 59 44 24 10    	mulss  xmm0,DWORD PTR [esp+0x10]
1001739d:	f3 0f 59 4c 24 14    	mulss  xmm1,DWORD PTR [esp+0x14]
100173a3:	f3 0f 11 44 24 1c    	movss  DWORD PTR [esp+0x1c],xmm0
100173a9:	f3 0f 11 4c 24 20    	movss  DWORD PTR [esp+0x20],xmm1
100173af:	f3 0f 7e 44 24 18    	movq   xmm0,QWORD PTR [esp+0x18]
100173b5:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
100173b9:	66 0f d6 05 28 2f 22 	movq   QWORD PTR ds:0x10222f28,xmm0
100173c0:	10 
100173c1:	a3 30 2f 22 10       	mov    ds:0x10222f30,eax
100173c6:	85 f6                	test   esi,esi
100173c8:	0f 84 6d 01 00 00    	je     0x1001753b
100173ce:	ff b6 0c 02 00 00    	push   DWORD PTR [esi+0x20c]
100173d4:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
100173da:	83 c4 04             	add    esp,0x4
100173dd:	85 c0                	test   eax,eax
100173df:	0f 84 56 01 00 00    	je     0x1001753b
100173e5:	8b 5f 04             	mov    ebx,DWORD PTR [edi+0x4]
100173e8:	8b 83 08 01 00 00    	mov    eax,DWORD PTR [ebx+0x108]
100173ee:	83 f8 03             	cmp    eax,0x3
100173f1:	74 09                	je     0x100173fc
100173f3:	83 f8 04             	cmp    eax,0x4
100173f6:	0f 85 3f 01 00 00    	jne    0x1001753b
100173fc:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
100173ff:	83 b9 0c 01 00 00 01 	cmp    DWORD PTR [ecx+0x10c],0x1
10017406:	0f 84 28 01 00 00    	je     0x10017534
1001740c:	f3 0f 10 8e d0 00 00 	movss  xmm1,DWORD PTR [esi+0xd0]
10017413:	00 
10017414:	8d 44 24 24          	lea    eax,[esp+0x24]
10017418:	f3 0f 58 8e c4 00 00 	addss  xmm1,DWORD PTR [esi+0xc4]
1001741f:	00 
10017420:	f3 0f 10 15 d8 1d 1a 	movss  xmm2,DWORD PTR ds:0x101a1dd8
10017427:	10 
10017428:	8d 4c 24 18          	lea    ecx,[esp+0x18]
1001742c:	f3 0f 10 43 08       	movss  xmm0,DWORD PTR [ebx+0x8]
10017431:	50                   	push   eax
10017432:	f3 0f 59 ca          	mulss  xmm1,xmm2
10017436:	f3 0f 5c c1          	subss  xmm0,xmm1
1001743a:	f3 0f 10 8e d4 00 00 	movss  xmm1,DWORD PTR [esi+0xd4]
10017441:	00 
10017442:	f3 0f 58 8e c8 00 00 	addss  xmm1,DWORD PTR [esi+0xc8]
10017449:	00 
1001744a:	f3 0f 11 44 24 1c    	movss  DWORD PTR [esp+0x1c],xmm0
10017450:	f3 0f 10 43 0c       	movss  xmm0,DWORD PTR [ebx+0xc]
10017455:	f3 0f 59 ca          	mulss  xmm1,xmm2
10017459:	f3 0f 5c c1          	subss  xmm0,xmm1
1001745d:	f3 0f 10 8e d8 00 00 	movss  xmm1,DWORD PTR [esi+0xd8]
10017464:	00 
10017465:	f3 0f 58 8e cc 00 00 	addss  xmm1,DWORD PTR [esi+0xcc]
1001746c:	00 
1001746d:	f3 0f 11 44 24 20    	movss  DWORD PTR [esp+0x20],xmm0
10017473:	f3 0f 10 43 10       	movss  xmm0,DWORD PTR [ebx+0x10]
10017478:	f3 0f 59 ca          	mulss  xmm1,xmm2
1001747c:	f3 0f 5c c1          	subss  xmm0,xmm1
10017480:	f3 0f 11 44 24 24    	movss  DWORD PTR [esp+0x24],xmm0
10017486:	e8 e5 09 00 00       	call   0x10017e70
1001748b:	f2 0f 10 0d c0 61 1a 	movsd  xmm1,QWORD PTR ds:0x101a61c0
10017492:	10 
10017493:	f3 0f 10 65 10       	movss  xmm4,DWORD PTR [ebp+0x10]
10017498:	f3 0f 7e 00          	movq   xmm0,QWORD PTR [eax]
1001749c:	66 0f d6 44 24 18    	movq   QWORD PTR [esp+0x18],xmm0
100174a2:	f3 0f 10 83 f8 00 00 	movss  xmm0,DWORD PTR [ebx+0xf8]
100174a9:	00 
100174aa:	f3 0f 59 83 f4 00 00 	mulss  xmm0,DWORD PTR [ebx+0xf4]
100174b1:	00 
100174b2:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
100174b5:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
100174b9:	f3 0f 59 83 fc 00 00 	mulss  xmm0,DWORD PTR [ebx+0xfc]
100174c0:	00 
100174c1:	0f 5a c0             	cvtps2pd xmm0,xmm0
100174c4:	f2 0f 5e c8          	divsd  xmm1,xmm0
100174c8:	0f 5a c4             	cvtps2pd xmm0,xmm4
100174cb:	f2 0f 59 c8          	mulsd  xmm1,xmm0
100174cf:	f2 0f 59 0d b8 61 1a 	mulsd  xmm1,QWORD PTR ds:0x101a61b8
100174d6:	10 
100174d7:	66 0f 5a d9          	cvtpd2ps xmm3,xmm1
100174db:	0f 5a c3             	cvtps2pd xmm0,xmm3
100174de:	66 0f 2f 05 c0 1e 1a 	comisd xmm0,QWORD PTR ds:0x101a1ec0
100174e5:	10 
100174e6:	76 08                	jbe    0x100174f0
100174e8:	f3 0f 10 1d d0 61 1a 	movss  xmm3,DWORD PTR ds:0x101a61d0
100174ef:	10 
100174f0:	f3 0f 10 54 24 18    	movss  xmm2,DWORD PTR [esp+0x18]
100174f6:	f3 0f 10 4c 24 1c    	movss  xmm1,DWORD PTR [esp+0x1c]
100174fc:	f3 0f 10 44 24 20    	movss  xmm0,DWORD PTR [esp+0x20]
10017502:	f3 0f 59 d3          	mulss  xmm2,xmm3
10017506:	f3 0f 59 cb          	mulss  xmm1,xmm3
1001750a:	f3 0f 58 53 20       	addss  xmm2,DWORD PTR [ebx+0x20]
1001750f:	f3 0f 59 c3          	mulss  xmm0,xmm3
10017513:	f3 0f 58 4b 24       	addss  xmm1,DWORD PTR [ebx+0x24]
10017518:	f3 0f 58 43 28       	addss  xmm0,DWORD PTR [ebx+0x28]
1001751d:	0f 14 d1             	unpcklps xmm2,xmm1
10017520:	66 0f d6 53 20       	movq   QWORD PTR [ebx+0x20],xmm2
10017525:	f3 0f 11 44 24 20    	movss  DWORD PTR [esp+0x20],xmm0
1001752b:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
1001752f:	89 43 28             	mov    DWORD PTR [ebx+0x28],eax
10017532:	eb 0c                	jmp    0x10017540
10017534:	f3 0f 10 65 10       	movss  xmm4,DWORD PTR [ebp+0x10]
10017539:	eb 08                	jmp    0x10017543
1001753b:	f3 0f 10 65 10       	movss  xmm4,DWORD PTR [ebp+0x10]
10017540:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
10017543:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10017546:	f3 0f 10 80 64 01 00 	movss  xmm0,DWORD PTR [eax+0x164]
1001754d:	00 
1001754e:	f3 0f 5c c4          	subss  xmm0,xmm4
10017552:	f3 0f 11 80 64 01 00 	movss  DWORD PTR [eax+0x164],xmm0
10017559:	00 
1001755a:	0f 57 c0             	xorps  xmm0,xmm0
1001755d:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10017560:	0f 2f 80 64 01 00 00 	comiss xmm0,DWORD PTR [eax+0x164]
10017567:	72 15                	jb     0x1001757e
10017569:	8b 07                	mov    eax,DWORD PTR [edi]
1001756b:	6a 00                	push   0x0
1001756d:	51                   	push   ecx
1001756e:	8b cf                	mov    ecx,edi
10017570:	ff 50 6c             	call   DWORD PTR [eax+0x6c]
10017573:	33 c0                	xor    eax,eax
10017575:	5f                   	pop    edi
10017576:	5e                   	pop    esi
10017577:	5b                   	pop    ebx
10017578:	8b e5                	mov    esp,ebp
1001757a:	5d                   	pop    ebp
1001757b:	c2 10 00             	ret    0x10
1001757e:	5f                   	pop    edi
1001757f:	5e                   	pop    esi
10017580:	b8 01 00 00 00       	mov    eax,0x1
10017585:	5b                   	pop    ebx
10017586:	8b e5                	mov    esp,ebp
10017588:	5d                   	pop    ebp
10017589:	c2 10 00             	ret    0x10
