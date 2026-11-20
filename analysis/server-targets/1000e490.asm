
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000e490 <.text+0xd490>:
1000e490:	55                   	push   ebp
1000e491:	8b ec                	mov    ebp,esp
1000e493:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000e498:	53                   	push   ebx
1000e499:	8b d9                	mov    ebx,ecx
1000e49b:	56                   	push   esi
1000e49c:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1000e4a2:	57                   	push   edi
1000e4a3:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
1000e4a6:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1000e4a9:	57                   	push   edi
1000e4aa:	03 82 cc 01 00 00    	add    eax,DWORD PTR [edx+0x1cc]
1000e4b0:	50                   	push   eax
1000e4b1:	6a 00                	push   0x0
1000e4b3:	e8 48 a0 10 00       	call   0x10118500
1000e4b8:	8b f0                	mov    esi,eax
1000e4ba:	83 c4 0c             	add    esp,0xc
1000e4bd:	85 f6                	test   esi,esi
1000e4bf:	0f 84 a2 00 00 00    	je     0x1000e567
1000e4c5:	8b 16                	mov    edx,DWORD PTR [esi]
1000e4c7:	8b ce                	mov    ecx,esi
1000e4c9:	ff 52 24             	call   DWORD PTR [edx+0x24]
1000e4cc:	85 c0                	test   eax,eax
1000e4ce:	0f 84 93 00 00 00    	je     0x1000e567
1000e4d4:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1000e4d7:	8b 88 d4 01 00 00    	mov    ecx,DWORD PTR [eax+0x1d4]
1000e4dd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000e4e2:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1000e4e8:	03 c1                	add    eax,ecx
1000e4ea:	b9 8c 2d 1a 10       	mov    ecx,0x101a2d8c
1000e4ef:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1000e4f2:	8a 10                	mov    dl,BYTE PTR [eax]
1000e4f4:	3a 11                	cmp    dl,BYTE PTR [ecx]
1000e4f6:	75 1a                	jne    0x1000e512
1000e4f8:	84 d2                	test   dl,dl
1000e4fa:	74 12                	je     0x1000e50e
1000e4fc:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1000e4ff:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1000e502:	75 0e                	jne    0x1000e512
1000e504:	83 c0 02             	add    eax,0x2
1000e507:	83 c1 02             	add    ecx,0x2
1000e50a:	84 d2                	test   dl,dl
1000e50c:	75 e4                	jne    0x1000e4f2
1000e50e:	33 c0                	xor    eax,eax
1000e510:	eb 05                	jmp    0x1000e517
1000e512:	1b c0                	sbb    eax,eax
1000e514:	83 c8 01             	or     eax,0x1
1000e517:	85 c0                	test   eax,eax
1000e519:	74 20                	je     0x1000e53b
1000e51b:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1000e51e:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
1000e525:	74 11                	je     0x1000e538
1000e527:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1000e52a:	6a 00                	push   0x0
1000e52c:	e8 4f a4 10 00       	call   0x10118980
1000e531:	83 c4 08             	add    esp,0x8
1000e534:	8b f8                	mov    edi,eax
1000e536:	eb 03                	jmp    0x1000e53b
1000e538:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1000e53b:	8b 16                	mov    edx,DWORD PTR [esi]
1000e53d:	8b ce                	mov    ecx,esi
1000e53f:	85 ff                	test   edi,edi
1000e541:	74 0e                	je     0x1000e551
1000e543:	57                   	push   edi
1000e544:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1000e54a:	5f                   	pop    edi
1000e54b:	5e                   	pop    esi
1000e54c:	5b                   	pop    ebx
1000e54d:	5d                   	pop    ebp
1000e54e:	c2 10 00             	ret    0x10
1000e551:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1000e554:	ff b0 d4 01 00 00    	push   DWORD PTR [eax+0x1d4]
1000e55a:	ff 92 24 01 00 00    	call   DWORD PTR [edx+0x124]
1000e560:	5f                   	pop    edi
1000e561:	5e                   	pop    esi
1000e562:	5b                   	pop    ebx
1000e563:	5d                   	pop    ebp
1000e564:	c2 10 00             	ret    0x10
1000e567:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000e56c:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
1000e56f:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
1000e575:	8b 82 cc 01 00 00    	mov    eax,DWORD PTR [edx+0x1cc]
1000e57b:	03 c1                	add    eax,ecx
1000e57d:	50                   	push   eax
1000e57e:	8b 82 d0 01 00 00    	mov    eax,DWORD PTR [edx+0x1d0]
1000e584:	03 c1                	add    eax,ecx
1000e586:	50                   	push   eax
1000e587:	68 98 2d 1a 10       	push   0x101a2d98
1000e58c:	6a 04                	push   0x4
1000e58e:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000e594:	83 c4 10             	add    esp,0x10
1000e597:	5f                   	pop    edi
1000e598:	5e                   	pop    esi
1000e599:	5b                   	pop    ebx
1000e59a:	5d                   	pop    ebp
1000e59b:	c2 10 00             	ret    0x10
