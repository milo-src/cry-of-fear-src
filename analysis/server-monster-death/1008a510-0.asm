
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008a510 <.text+0x89510>:
1008a510:	55                   	push   ebp
1008a511:	8b ec                	mov    ebp,esp
1008a513:	83 ec 5c             	sub    esp,0x5c
1008a516:	56                   	push   esi
1008a517:	8b f1                	mov    esi,ecx
1008a519:	8b 06                	mov    eax,DWORD PTR [esi]
1008a51b:	8b 80 bc 00 00 00    	mov    eax,DWORD PTR [eax+0xbc]
1008a521:	ff d0                	call   eax
1008a523:	85 c0                	test   eax,eax
1008a525:	75 27                	jne    0x1008a54e
1008a527:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008a52a:	0f 57 c0             	xorps  xmm0,xmm0
1008a52d:	f3 0f 10 88 b4 01 00 	movss  xmm1,DWORD PTR [eax+0x1b4]
1008a534:	00 
1008a535:	0f 2f c1             	comiss xmm0,xmm1
1008a538:	0f 83 4b 01 00 00    	jae    0x1008a689
1008a53e:	f3 0f 5c 0d 90 13 1a 	subss  xmm1,DWORD PTR ds:0x101a1390
1008a545:	10 
1008a546:	f3 0f 11 88 b4 01 00 	movss  DWORD PTR [eax+0x1b4],xmm1
1008a54d:	00 
1008a54e:	57                   	push   edi
1008a54f:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1008a552:	85 ff                	test   edi,edi
1008a554:	0f 8e 2e 01 00 00    	jle    0x1008a688
1008a55a:	f3 0f 10 55 0c       	movss  xmm2,DWORD PTR [ebp+0xc]
1008a55f:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1008a562:	0f 28 ca             	movaps xmm1,xmm2
1008a565:	0f 57 0d e0 13 1a 10 	xorps  xmm1,XMMWORD PTR ds:0x101a13e0
1008a56c:	83 c0 14             	add    eax,0x14
1008a56f:	f3 0f 11 4d 08       	movss  DWORD PTR [ebp+0x8],xmm1
1008a574:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1008a577:	66 0f 1f 84 00 00 00 	nop    WORD PTR [eax+eax*1+0x0]
1008a57e:	00 00 
1008a580:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
1008a583:	83 ec 08             	sub    esp,0x8
1008a586:	f3 0f 7e 00          	movq   xmm0,QWORD PTR [eax]
1008a58a:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1008a58d:	f3 0f 11 54 24 04    	movss  DWORD PTR [esp+0x4],xmm2
1008a593:	66 0f d6 45 e8       	movq   QWORD PTR [ebp-0x18],xmm0
1008a598:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
1008a59b:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
1008a5a0:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
1008a5a6:	d8 45 e8             	fadd   DWORD PTR [ebp-0x18]
1008a5a9:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
1008a5ae:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
1008a5b4:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
1008a5b9:	d9 5d 10             	fstp   DWORD PTR [ebp+0x10]
1008a5bc:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008a5c1:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
1008a5c7:	d8 45 ec             	fadd   DWORD PTR [ebp-0x14]
1008a5ca:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
1008a5cf:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
1008a5d5:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
1008a5da:	d9 5d f8             	fstp   DWORD PTR [ebp-0x8]
1008a5dd:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008a5e2:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
1008a5e8:	f3 0f 10 0d 54 ef 1b 	movss  xmm1,DWORD PTR ds:0x101bef54
1008a5ef:	10 
1008a5f0:	8d 45 a4             	lea    eax,[ebp-0x5c]
1008a5f3:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
1008a5f8:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1008a5fb:	d8 45 f0             	fadd   DWORD PTR [ebp-0x10]
1008a5fe:	50                   	push   eax
1008a5ff:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008a602:	f3 0f 59 c1          	mulss  xmm0,xmm1
1008a606:	d9 5d f4             	fstp   DWORD PTR [ebp-0xc]
1008a609:	f3 0f 58 01          	addss  xmm0,DWORD PTR [ecx]
1008a60d:	f3 0f 11 45 dc       	movss  DWORD PTR [ebp-0x24],xmm0
1008a612:	f3 0f 10 45 f8       	movss  xmm0,DWORD PTR [ebp-0x8]
1008a617:	f3 0f 59 c1          	mulss  xmm0,xmm1
1008a61b:	f3 0f 58 41 04       	addss  xmm0,DWORD PTR [ecx+0x4]
1008a620:	f3 0f 11 45 e0       	movss  DWORD PTR [ebp-0x20],xmm0
1008a625:	f3 0f 10 45 f4       	movss  xmm0,DWORD PTR [ebp-0xc]
1008a62a:	f3 0f 59 c1          	mulss  xmm0,xmm1
1008a62e:	f3 0f 58 41 08       	addss  xmm0,DWORD PTR [ecx+0x8]
1008a633:	f3 0f 11 45 e4       	movss  DWORD PTR [ebp-0x1c],xmm0
1008a638:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1008a63e:	8d 45 dc             	lea    eax,[ebp-0x24]
1008a641:	6a 01                	push   0x1
1008a643:	50                   	push   eax
1008a644:	51                   	push   ecx
1008a645:	e8 b6 01 09 00       	call   0x1011a800
1008a64a:	f3 0f 10 45 b4       	movss  xmm0,DWORD PTR [ebp-0x4c]
1008a64f:	83 c4 1c             	add    esp,0x1c
1008a652:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
1008a659:	9f                   	lahf
1008a65a:	f6 c4 44             	test   ah,0x44
1008a65d:	7b 16                	jnp    0x1008a675
1008a65f:	8b 06                	mov    eax,DWORD PTR [esi]
1008a661:	8b ce                	mov    ecx,esi
1008a663:	8b 40 70             	mov    eax,DWORD PTR [eax+0x70]
1008a666:	ff d0                	call   eax
1008a668:	50                   	push   eax
1008a669:	8d 45 a4             	lea    eax,[ebp-0x5c]
1008a66c:	50                   	push   eax
1008a66d:	e8 8e d0 08 00       	call   0x10117700
1008a672:	83 c4 08             	add    esp,0x8
1008a675:	f3 0f 10 4d 08       	movss  xmm1,DWORD PTR [ebp+0x8]
1008a67a:	f3 0f 10 55 0c       	movss  xmm2,DWORD PTR [ebp+0xc]
1008a67f:	83 ef 01             	sub    edi,0x1
1008a682:	0f 85 f8 fe ff ff    	jne    0x1008a580
1008a688:	5f                   	pop    edi
1008a689:	5e                   	pop    esi
1008a68a:	8b e5                	mov    esp,ebp
1008a68c:	5d                   	pop    ebp
1008a68d:	c2 10 00             	ret    0x10
