
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100153b0 <.text+0x143b0>:
100153b0:	55                   	push   ebp
100153b1:	8b ec                	mov    ebp,esp
100153b3:	83 ec 0c             	sub    esp,0xc
100153b6:	56                   	push   esi
100153b7:	57                   	push   edi
100153b8:	8b f9                	mov    edi,ecx
100153ba:	ff b7 dc 01 00 00    	push   DWORD PTR [edi+0x1dc]
100153c0:	e8 2b da ff ff       	call   0x10012df0
100153c5:	8b f0                	mov    esi,eax
100153c7:	56                   	push   esi
100153c8:	e8 63 16 10 00       	call   0x10116a30
100153cd:	56                   	push   esi
100153ce:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
100153d4:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100153d7:	89 81 ec 01 00 00    	mov    DWORD PTR [ecx+0x1ec],eax
100153dd:	ff 77 04             	push   DWORD PTR [edi+0x4]
100153e0:	e8 1b ca 0e 00       	call   0x10101e00
100153e5:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100153e8:	83 c4 10             	add    esp,0x10
100153eb:	f3 0f 10 1d d0 13 1a 	movss  xmm3,DWORD PTR ds:0x101a13d0
100153f2:	10 
100153f3:	f6 81 a4 01 00 00 02 	test   BYTE PTR [ecx+0x1a4],0x2
100153fa:	74 31                	je     0x1001542d
100153fc:	f3 0f 10 51 44       	movss  xmm2,DWORD PTR [ecx+0x44]
10015401:	f3 0f 10 49 48       	movss  xmm1,DWORD PTR [ecx+0x48]
10015406:	f3 0f 10 41 4c       	movss  xmm0,DWORD PTR [ecx+0x4c]
1001540b:	f3 0f 59 d3          	mulss  xmm2,xmm3
1001540f:	f3 0f 59 cb          	mulss  xmm1,xmm3
10015413:	f3 0f 59 c3          	mulss  xmm0,xmm3
10015417:	0f 14 d1             	unpcklps xmm2,xmm1
1001541a:	66 0f d6 51 44       	movq   QWORD PTR [ecx+0x44],xmm2
1001541f:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
10015424:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
10015427:	89 41 4c             	mov    DWORD PTR [ecx+0x4c],eax
1001542a:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1001542d:	c7 81 08 01 00 00 07 	mov    DWORD PTR [ecx+0x108],0x7
10015434:	00 00 00 
10015437:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1001543a:	8b 81 a4 01 00 00    	mov    eax,DWORD PTR [ecx+0x1a4]
10015440:	f7 d0                	not    eax
10015442:	83 e0 01             	and    eax,0x1
10015445:	c1 e0 02             	shl    eax,0x2
10015448:	89 81 0c 01 00 00    	mov    DWORD PTR [ecx+0x10c],eax
1001544e:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
10015451:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10015456:	8b 8a b8 00 00 00    	mov    ecx,DWORD PTR [edx+0xb8]
1001545c:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
10015462:	51                   	push   ecx
10015463:	ff b2 0c 02 00 00    	push   DWORD PTR [edx+0x20c]
10015469:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
1001546f:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
10015472:	83 c4 08             	add    esp,0x8
10015475:	0f 57 c9             	xorps  xmm1,xmm1
10015478:	f3 0f 10 82 fc 01 00 	movss  xmm0,DWORD PTR [edx+0x1fc]
1001547f:	00 
10015480:	0f 2e c1             	ucomiss xmm0,xmm1
10015483:	9f                   	lahf
10015484:	f6 c4 44             	test   ah,0x44
10015487:	7a 0d                	jp     0x10015496
10015489:	c7 82 fc 01 00 00 00 	mov    DWORD PTR [edx+0x1fc],0x42200000
10015490:	00 20 42 
10015493:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
10015496:	f3 0f 10 a7 0c 01 00 	movss  xmm4,DWORD PTR [edi+0x10c]
1001549d:	00 
1001549e:	0f 2e e1             	ucomiss xmm4,xmm1
100154a1:	9f                   	lahf
100154a2:	f6 c4 44             	test   ah,0x44
100154a5:	7a 12                	jp     0x100154b9
100154a7:	f3 0f 10 25 90 13 1a 	movss  xmm4,DWORD PTR ds:0x101a1390
100154ae:	10 
100154af:	c7 87 0c 01 00 00 00 	mov    DWORD PTR [edi+0x10c],0x3f800000
100154b6:	00 80 3f 
100154b9:	f3 0f 10 82 64 01 00 	movss  xmm0,DWORD PTR [edx+0x164]
100154c0:	00 
100154c1:	0f 2f c1             	comiss xmm0,xmm1
100154c4:	76 15                	jbe    0x100154db
100154c6:	c7 82 70 01 00 00 00 	mov    DWORD PTR [edx+0x170],0x3f800000
100154cd:	00 80 3f 
100154d0:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
100154d3:	f3 0f 10 a7 0c 01 00 	movss  xmm4,DWORD PTR [edi+0x10c]
100154da:	00 
100154db:	f3 0f 10 97 08 01 00 	movss  xmm2,DWORD PTR [edi+0x108]
100154e2:	00 
100154e3:	be 01 00 00 00       	mov    esi,0x1
100154e8:	0f 2e 25 d0 13 1a 10 	ucomiss xmm4,DWORD PTR ds:0x101a13d0
100154ef:	c7 87 00 01 00 00 01 	mov    DWORD PTR [edi+0x100],0x1
100154f6:	00 00 00 
100154f9:	f3 0f 7e 42 50       	movq   xmm0,QWORD PTR [edx+0x50]
100154fe:	66 0f d6 87 34 01 00 	movq   QWORD PTR [edi+0x134],xmm0
10015505:	00 
10015506:	8b 42 58             	mov    eax,DWORD PTR [edx+0x58]
10015509:	89 87 3c 01 00 00    	mov    DWORD PTR [edi+0x13c],eax
1001550f:	f3 0f 10 5a 44       	movss  xmm3,DWORD PTR [edx+0x44]
10015514:	f3 0f 10 4a 48       	movss  xmm1,DWORD PTR [edx+0x48]
10015519:	f3 0f 10 42 4c       	movss  xmm0,DWORD PTR [edx+0x4c]
1001551e:	f3 0f 59 da          	mulss  xmm3,xmm2
10015522:	f3 0f 59 ca          	mulss  xmm1,xmm2
10015526:	f3 0f 58 5a 50       	addss  xmm3,DWORD PTR [edx+0x50]
1001552b:	f3 0f 59 c2          	mulss  xmm0,xmm2
1001552f:	f3 0f 58 4a 54       	addss  xmm1,DWORD PTR [edx+0x54]
10015534:	f3 0f 58 42 58       	addss  xmm0,DWORD PTR [edx+0x58]
10015539:	89 b7 ac 01 00 00    	mov    DWORD PTR [edi+0x1ac],esi
1001553f:	0f 14 d9             	unpcklps xmm3,xmm1
10015542:	66 0f d6 9f 40 01 00 	movq   QWORD PTR [edi+0x140],xmm3
10015549:	00 
1001554a:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
1001554f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
10015552:	89 87 48 01 00 00    	mov    DWORD PTR [edi+0x148],eax
10015558:	9f                   	lahf
10015559:	33 c9                	xor    ecx,ecx
1001555b:	f6 c4 44             	test   ah,0x44
1001555e:	0f 4b ce             	cmovnp ecx,esi
10015561:	89 8f a8 01 00 00    	mov    DWORD PTR [edi+0x1a8],ecx
10015567:	f7 82 a4 01 00 00 00 	test   DWORD PTR [edx+0x1a4],0x100
1001556e:	01 00 00 
10015571:	75 13                	jne    0x10015586
10015573:	c7 47 7c 00 00 00 00 	mov    DWORD PTR [edi+0x7c],0x0
1001557a:	b8 20 32 01 10       	mov    eax,0x10013220
1001557f:	b9 90 30 01 10       	mov    ecx,0x10013090
10015584:	eb 11                	jmp    0x10015597
10015586:	c7 47 7c 70 2f 01 10 	mov    DWORD PTR [edi+0x7c],0x10012f70
1001558d:	b8 90 30 01 10       	mov    eax,0x10013090
10015592:	b9 20 32 01 10       	mov    ecx,0x10013220
10015597:	f7 82 a4 01 00 00 00 	test   DWORD PTR [edx+0x1a4],0x200
1001559e:	02 00 00 
100155a1:	0f 44 c1             	cmove  eax,ecx
100155a4:	89 87 80 00 00 00    	mov    DWORD PTR [edi+0x80],eax
100155aa:	5f                   	pop    edi
100155ab:	5e                   	pop    esi
100155ac:	8b e5                	mov    esp,ebp
100155ae:	5d                   	pop    ebp
100155af:	c3                   	ret
