
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10102480 <.text+0x101480>:
10102480:	55                   	push   ebp
10102481:	8b ec                	mov    ebp,esp
10102483:	53                   	push   ebx
10102484:	56                   	push   esi
10102485:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10102488:	ba e8 b1 1c 10       	mov    edx,0x101cb1e8
1010248d:	57                   	push   edi
1010248e:	8b f9                	mov    edi,ecx
10102490:	8b 5e 04             	mov    ebx,DWORD PTR [esi+0x4]
10102493:	8b c3                	mov    eax,ebx
10102495:	8a 08                	mov    cl,BYTE PTR [eax]
10102497:	3a 0a                	cmp    cl,BYTE PTR [edx]
10102499:	75 1a                	jne    0x101024b5
1010249b:	84 c9                	test   cl,cl
1010249d:	74 12                	je     0x101024b1
1010249f:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
101024a2:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
101024a5:	75 0e                	jne    0x101024b5
101024a7:	83 c0 02             	add    eax,0x2
101024aa:	83 c2 02             	add    edx,0x2
101024ad:	84 c9                	test   cl,cl
101024af:	75 e4                	jne    0x10102495
101024b1:	33 c0                	xor    eax,eax
101024b3:	eb 05                	jmp    0x101024ba
101024b5:	1b c0                	sbb    eax,eax
101024b7:	83 c8 01             	or     eax,0x1
101024ba:	85 c0                	test   eax,eax
101024bc:	75 1f                	jne    0x101024dd
101024be:	ff 76 08             	push   DWORD PTR [esi+0x8]
101024c1:	e8 26 d1 06 00       	call   0x1016f5ec
101024c6:	83 c4 04             	add    esp,0x4
101024c9:	d9 9f 10 01 00 00    	fstp   DWORD PTR [edi+0x110]
101024cf:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
101024d6:	5f                   	pop    edi
101024d7:	5e                   	pop    esi
101024d8:	5b                   	pop    ebx
101024d9:	5d                   	pop    ebp
101024da:	c2 04 00             	ret    0x4
101024dd:	b9 30 7e 1d 10       	mov    ecx,0x101d7e30
101024e2:	8b c3                	mov    eax,ebx
101024e4:	8a 10                	mov    dl,BYTE PTR [eax]
101024e6:	3a 11                	cmp    dl,BYTE PTR [ecx]
101024e8:	75 1a                	jne    0x10102504
101024ea:	84 d2                	test   dl,dl
101024ec:	74 12                	je     0x10102500
101024ee:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
101024f1:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
101024f4:	75 0e                	jne    0x10102504
101024f6:	83 c0 02             	add    eax,0x2
101024f9:	83 c1 02             	add    ecx,0x2
101024fc:	84 d2                	test   dl,dl
101024fe:	75 e4                	jne    0x101024e4
10102500:	33 c0                	xor    eax,eax
10102502:	eb 05                	jmp    0x10102509
10102504:	1b c0                	sbb    eax,eax
10102506:	83 c8 01             	or     eax,0x1
10102509:	85 c0                	test   eax,eax
1010250b:	75 1f                	jne    0x1010252c
1010250d:	ff 76 08             	push   DWORD PTR [esi+0x8]
10102510:	e8 d7 d0 06 00       	call   0x1016f5ec
10102515:	83 c4 04             	add    esp,0x4
10102518:	d9 9f 0c 01 00 00    	fstp   DWORD PTR [edi+0x10c]
1010251e:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10102525:	5f                   	pop    edi
10102526:	5e                   	pop    esi
10102527:	5b                   	pop    ebx
10102528:	5d                   	pop    ebp
10102529:	c2 04 00             	ret    0x4
1010252c:	b9 a0 52 1a 10       	mov    ecx,0x101a52a0
10102531:	8b c3                	mov    eax,ebx
10102533:	8a 10                	mov    dl,BYTE PTR [eax]
10102535:	3a 11                	cmp    dl,BYTE PTR [ecx]
10102537:	75 1a                	jne    0x10102553
10102539:	84 d2                	test   dl,dl
1010253b:	74 12                	je     0x1010254f
1010253d:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10102540:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10102543:	75 0e                	jne    0x10102553
10102545:	83 c0 02             	add    eax,0x2
10102548:	83 c1 02             	add    ecx,0x2
1010254b:	84 d2                	test   dl,dl
1010254d:	75 e4                	jne    0x10102533
1010254f:	33 c0                	xor    eax,eax
10102551:	eb 05                	jmp    0x10102558
10102553:	1b c0                	sbb    eax,eax
10102555:	83 c8 01             	or     eax,0x1
10102558:	85 c0                	test   eax,eax
1010255a:	75 20                	jne    0x1010257c
1010255c:	ff 76 08             	push   DWORD PTR [esi+0x8]
1010255f:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10102565:	83 c4 04             	add    esp,0x4
10102568:	89 87 7c 01 00 00    	mov    DWORD PTR [edi+0x17c],eax
1010256e:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10102575:	5f                   	pop    edi
10102576:	5e                   	pop    esi
10102577:	5b                   	pop    ebx
10102578:	5d                   	pop    ebp
10102579:	c2 04 00             	ret    0x4
1010257c:	68 a4 41 1a 10       	push   0x101a41a4
10102581:	53                   	push   ebx
10102582:	e8 19 86 f0 ff       	call   0x1000aba0
10102587:	83 c4 08             	add    esp,0x8
1010258a:	85 c0                	test   eax,eax
1010258c:	74 1f                	je     0x101025ad
1010258e:	ff 76 08             	push   DWORD PTR [esi+0x8]
10102591:	e8 56 d0 06 00       	call   0x1016f5ec
10102596:	83 c4 04             	add    esp,0x4
10102599:	d9 9f 08 01 00 00    	fstp   DWORD PTR [edi+0x108]
1010259f:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
101025a6:	5f                   	pop    edi
101025a7:	5e                   	pop    esi
101025a8:	5b                   	pop    ebx
101025a9:	5d                   	pop    ebp
101025aa:	c2 04 00             	ret    0x4
101025ad:	56                   	push   esi
101025ae:	8b cf                	mov    ecx,edi
101025b0:	e8 0b fe ff ff       	call   0x101023c0
101025b5:	5f                   	pop    edi
101025b6:	5e                   	pop    esi
101025b7:	5b                   	pop    ebx
101025b8:	5d                   	pop    ebp
101025b9:	c2 04 00             	ret    0x4
