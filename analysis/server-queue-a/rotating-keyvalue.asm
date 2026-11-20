
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100105e0 <.text+0xf5e0>:
100105e0:	55                   	push   ebp
100105e1:	8b ec                	mov    ebp,esp
100105e3:	83 ec 0c             	sub    esp,0xc
100105e6:	ba e8 3f 1a 10       	mov    edx,0x101a3fe8
100105eb:	53                   	push   ebx
100105ec:	56                   	push   esi
100105ed:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100105f0:	57                   	push   edi
100105f1:	8b f9                	mov    edi,ecx
100105f3:	8b 5e 04             	mov    ebx,DWORD PTR [esi+0x4]
100105f6:	8b c3                	mov    eax,ebx
100105f8:	8a 08                	mov    cl,BYTE PTR [eax]
100105fa:	3a 0a                	cmp    cl,BYTE PTR [edx]
100105fc:	75 1a                	jne    0x10010618
100105fe:	84 c9                	test   cl,cl
10010600:	74 12                	je     0x10010614
10010602:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
10010605:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
10010608:	75 0e                	jne    0x10010618
1001060a:	83 c0 02             	add    eax,0x2
1001060d:	83 c2 02             	add    edx,0x2
10010610:	84 c9                	test   cl,cl
10010612:	75 e4                	jne    0x100105f8
10010614:	33 c0                	xor    eax,eax
10010616:	eb 05                	jmp    0x1001061d
10010618:	1b c0                	sbb    eax,eax
1001061a:	83 c8 01             	or     eax,0x1
1001061d:	85 c0                	test   eax,eax
1001061f:	75 27                	jne    0x10010648
10010621:	ff 76 08             	push   DWORD PTR [esi+0x8]
10010624:	e8 c3 ef 15 00       	call   0x1016f5ec
10010629:	dc 35 10 47 1a 10    	fdiv   QWORD PTR ds:0x101a4710
1001062f:	83 c4 04             	add    esp,0x4
10010632:	d9 9f dc 00 00 00    	fstp   DWORD PTR [edi+0xdc]
10010638:	5f                   	pop    edi
10010639:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10010640:	5e                   	pop    esi
10010641:	5b                   	pop    ebx
10010642:	8b e5                	mov    esp,ebp
10010644:	5d                   	pop    ebp
10010645:	c2 04 00             	ret    0x4
10010648:	b9 f4 3f 1a 10       	mov    ecx,0x101a3ff4
1001064d:	8b c3                	mov    eax,ebx
1001064f:	90                   	nop
10010650:	8a 10                	mov    dl,BYTE PTR [eax]
10010652:	3a 11                	cmp    dl,BYTE PTR [ecx]
10010654:	75 1a                	jne    0x10010670
10010656:	84 d2                	test   dl,dl
10010658:	74 12                	je     0x1001066c
1001065a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1001065d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10010660:	75 0e                	jne    0x10010670
10010662:	83 c0 02             	add    eax,0x2
10010665:	83 c1 02             	add    ecx,0x2
10010668:	84 d2                	test   dl,dl
1001066a:	75 e4                	jne    0x10010650
1001066c:	33 c0                	xor    eax,eax
1001066e:	eb 05                	jmp    0x10010675
10010670:	1b c0                	sbb    eax,eax
10010672:	83 c8 01             	or     eax,0x1
10010675:	85 c0                	test   eax,eax
10010677:	75 66                	jne    0x100106df
10010679:	ff 76 08             	push   DWORD PTR [esi+0x8]
1001067c:	e8 6b ef 15 00       	call   0x1016f5ec
10010681:	dc 35 f8 46 1a 10    	fdiv   QWORD PTR ds:0x101a46f8
10010687:	83 c4 04             	add    esp,0x4
1001068a:	d9 5d 08             	fstp   DWORD PTR [ebp+0x8]
1001068d:	f3 0f 10 4d 08       	movss  xmm1,DWORD PTR [ebp+0x8]
10010692:	0f 2f 0d 90 13 1a 10 	comiss xmm1,DWORD PTR ds:0x101a1390
10010699:	f3 0f 11 8f e4 00 00 	movss  DWORD PTR [edi+0xe4],xmm1
100106a0:	00 
100106a1:	76 1a                	jbe    0x100106bd
100106a3:	c7 87 e4 00 00 00 00 	mov    DWORD PTR [edi+0xe4],0x3f800000
100106aa:	00 80 3f 
100106ad:	5f                   	pop    edi
100106ae:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100106b5:	5e                   	pop    esi
100106b6:	5b                   	pop    ebx
100106b7:	8b e5                	mov    esp,ebp
100106b9:	5d                   	pop    ebp
100106ba:	c2 04 00             	ret    0x4
100106bd:	0f 57 c0             	xorps  xmm0,xmm0
100106c0:	0f 2f c1             	comiss xmm0,xmm1
100106c3:	76 0a                	jbe    0x100106cf
100106c5:	c7 87 e4 00 00 00 00 	mov    DWORD PTR [edi+0xe4],0x0
100106cc:	00 00 00 
100106cf:	5f                   	pop    edi
100106d0:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100106d7:	5e                   	pop    esi
100106d8:	5b                   	pop    ebx
100106d9:	8b e5                	mov    esp,ebp
100106db:	5d                   	pop    ebp
100106dc:	c2 04 00             	ret    0x4
100106df:	b9 fc 3f 1a 10       	mov    ecx,0x101a3ffc
100106e4:	8b c3                	mov    eax,ebx
100106e6:	8a 10                	mov    dl,BYTE PTR [eax]
100106e8:	3a 11                	cmp    dl,BYTE PTR [ecx]
100106ea:	75 1a                	jne    0x10010706
100106ec:	84 d2                	test   dl,dl
100106ee:	74 12                	je     0x10010702
100106f0:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100106f3:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100106f6:	75 0e                	jne    0x10010706
100106f8:	83 c0 02             	add    eax,0x2
100106fb:	83 c1 02             	add    ecx,0x2
100106fe:	84 d2                	test   dl,dl
10010700:	75 e4                	jne    0x100106e6
10010702:	33 c0                	xor    eax,eax
10010704:	eb 05                	jmp    0x1001070b
10010706:	1b c0                	sbb    eax,eax
10010708:	83 c8 01             	or     eax,0x1
1001070b:	85 c0                	test   eax,eax
1001070d:	75 65                	jne    0x10010774
1001070f:	ff 76 08             	push   DWORD PTR [esi+0x8]
10010712:	8d 45 f4             	lea    eax,[ebp-0xc]
10010715:	50                   	push   eax
10010716:	e8 a5 9f 10 00       	call   0x1011a6c0
1001071b:	f3 0f 10 45 f4       	movss  xmm0,DWORD PTR [ebp-0xc]
10010720:	83 c4 08             	add    esp,0x8
10010723:	0f 2e 05 34 2f 22 10 	ucomiss xmm0,DWORD PTR ds:0x10222f34
1001072a:	9f                   	lahf
1001072b:	f6 c4 44             	test   ah,0x44
1001072e:	7a 28                	jp     0x10010758
10010730:	f3 0f 10 45 f8       	movss  xmm0,DWORD PTR [ebp-0x8]
10010735:	0f 2e 05 38 2f 22 10 	ucomiss xmm0,DWORD PTR ds:0x10222f38
1001073c:	9f                   	lahf
1001073d:	f6 c4 44             	test   ah,0x44
10010740:	7a 16                	jp     0x10010758
10010742:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
10010747:	0f 2e 05 3c 2f 22 10 	ucomiss xmm0,DWORD PTR ds:0x10222f3c
1001074e:	9f                   	lahf
1001074f:	f6 c4 44             	test   ah,0x44
10010752:	0f 8b 8b 00 00 00    	jnp    0x100107e3
10010758:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1001075b:	f3 0f 7e 45 f4       	movq   xmm0,QWORD PTR [ebp-0xc]
10010760:	5f                   	pop    edi
10010761:	5e                   	pop    esi
10010762:	66 0f d6 41 08       	movq   QWORD PTR [ecx+0x8],xmm0
10010767:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1001076a:	89 41 10             	mov    DWORD PTR [ecx+0x10],eax
1001076d:	5b                   	pop    ebx
1001076e:	8b e5                	mov    esp,ebp
10010770:	5d                   	pop    ebp
10010771:	c2 04 00             	ret    0x4
10010774:	68 08 40 1a 10       	push   0x101a4008
10010779:	53                   	push   ebx
1001077a:	e8 21 a4 ff ff       	call   0x1000aba0
1001077f:	83 c4 08             	add    esp,0x8
10010782:	85 c0                	test   eax,eax
10010784:	74 21                	je     0x100107a7
10010786:	ff 76 08             	push   DWORD PTR [esi+0x8]
10010789:	e8 d0 ad 15 00       	call   0x1016b55e
1001078e:	83 c4 04             	add    esp,0x4
10010791:	89 87 ec 00 00 00    	mov    DWORD PTR [edi+0xec],eax
10010797:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1001079e:	5f                   	pop    edi
1001079f:	5e                   	pop    esi
100107a0:	5b                   	pop    ebx
100107a1:	8b e5                	mov    esp,ebp
100107a3:	5d                   	pop    ebp
100107a4:	c2 04 00             	ret    0x4
100107a7:	68 10 40 1a 10       	push   0x101a4010
100107ac:	53                   	push   ebx
100107ad:	e8 ee a3 ff ff       	call   0x1000aba0
100107b2:	83 c4 08             	add    esp,0x8
100107b5:	85 c0                	test   eax,eax
100107b7:	74 22                	je     0x100107db
100107b9:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100107bc:	ff 76 08             	push   DWORD PTR [esi+0x8]
100107bf:	83 c0 44             	add    eax,0x44
100107c2:	50                   	push   eax
100107c3:	e8 f8 9e 10 00       	call   0x1011a6c0
100107c8:	83 c4 08             	add    esp,0x8
100107cb:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100107d2:	5f                   	pop    edi
100107d3:	5e                   	pop    esi
100107d4:	5b                   	pop    ebx
100107d5:	8b e5                	mov    esp,ebp
100107d7:	5d                   	pop    ebp
100107d8:	c2 04 00             	ret    0x4
100107db:	56                   	push   esi
100107dc:	8b cf                	mov    ecx,edi
100107de:	e8 bd d3 ff ff       	call   0x1000dba0
100107e3:	5f                   	pop    edi
100107e4:	5e                   	pop    esi
100107e5:	5b                   	pop    ebx
100107e6:	8b e5                	mov    esp,ebp
100107e8:	5d                   	pop    ebp
100107e9:	c2 04 00             	ret    0x4
