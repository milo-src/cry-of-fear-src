
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100a7480 <.text+0xa6480>:
100a7480:	55                   	push   ebp
100a7481:	8b ec                	mov    ebp,esp
100a7483:	83 ec 08             	sub    esp,0x8
100a7486:	68 30 21 1a 10       	push   0x101a2130
100a748b:	6a 00                	push   0x0
100a748d:	e8 ce 0f 07 00       	call   0x10118460
100a7492:	83 c4 08             	add    esp,0x8
100a7495:	85 c0                	test   eax,eax
100a7497:	0f 84 06 01 00 00    	je     0x100a75a3
100a749d:	53                   	push   ebx
100a749e:	ff 70 04             	push   DWORD PTR [eax+0x4]
100a74a1:	e8 3a b1 f6 ff       	call   0x100125e0
100a74a6:	8b d8                	mov    ebx,eax
100a74a8:	83 c4 04             	add    esp,0x4
100a74ab:	85 db                	test   ebx,ebx
100a74ad:	0f 84 ef 00 00 00    	je     0x100a75a2
100a74b3:	8d 83 14 25 00 00    	lea    eax,[ebx+0x2514]
100a74b9:	b9 06 00 00 00       	mov    ecx,0x6
100a74be:	56                   	push   esi
100a74bf:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100a74c2:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100a74c5:	57                   	push   edi
100a74c6:	8b 38                	mov    edi,DWORD PTR [eax]
100a74c8:	85 ff                	test   edi,edi
100a74ca:	0f 84 be 00 00 00    	je     0x100a758e
100a74d0:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
100a74d3:	ba 50 de 1a 10       	mov    edx,0x101ade50
100a74d8:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
100a74de:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
100a74e4:	f7 d9                	neg    ecx
100a74e6:	1b c9                	sbb    ecx,ecx
100a74e8:	23 c8                	and    ecx,eax
100a74ea:	8b 01                	mov    eax,DWORD PTR [ecx]
100a74ec:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100a74f2:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
100a74f8:	8a 08                	mov    cl,BYTE PTR [eax]
100a74fa:	3a 0a                	cmp    cl,BYTE PTR [edx]
100a74fc:	75 1a                	jne    0x100a7518
100a74fe:	84 c9                	test   cl,cl
100a7500:	74 12                	je     0x100a7514
100a7502:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100a7505:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
100a7508:	75 0e                	jne    0x100a7518
100a750a:	83 c0 02             	add    eax,0x2
100a750d:	83 c2 02             	add    edx,0x2
100a7510:	84 c9                	test   cl,cl
100a7512:	75 e4                	jne    0x100a74f8
100a7514:	33 c0                	xor    eax,eax
100a7516:	eb 05                	jmp    0x100a751d
100a7518:	1b c0                	sbb    eax,eax
100a751a:	83 c8 01             	or     eax,0x1
100a751d:	85 c0                	test   eax,eax
100a751f:	75 59                	jne    0x100a757a
100a7521:	56                   	push   esi
100a7522:	e8 09 b9 fa ff       	call   0x10052e30
100a7527:	8b f0                	mov    esi,eax
100a7529:	83 c4 04             	add    esp,0x4
100a752c:	85 f6                	test   esi,esi
100a752e:	74 4a                	je     0x100a757a
100a7530:	6a 07                	push   0x7
100a7532:	c6 86 f9 01 00 00 01 	mov    BYTE PTR [esi+0x1f9],0x1
100a7539:	8b ce                	mov    ecx,esi
100a753b:	6a 01                	push   0x1
100a753d:	c7 83 14 1f 00 00 01 	mov    DWORD PTR [ebx+0x1f14],0x1
100a7544:	00 00 00 
100a7547:	e8 f4 75 f6 ff       	call   0x1000eb40
100a754c:	6a 01                	push   0x1
100a754e:	6a 02                	push   0x2
100a7550:	8b ce                	mov    ecx,esi
100a7552:	e8 e9 75 f6 ff       	call   0x1000eb40
100a7557:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100a755a:	8b ce                	mov    ecx,esi
100a755c:	8b 16                	mov    edx,DWORD PTR [esi]
100a755e:	ff b0 14 01 00 00    	push   DWORD PTR [eax+0x114]
100a7564:	53                   	push   ebx
100a7565:	ff 92 9c 01 00 00    	call   DWORD PTR [edx+0x19c]
100a756b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100a756e:	8b 80 14 01 00 00    	mov    eax,DWORD PTR [eax+0x114]
100a7574:	89 83 cc 05 00 00    	mov    DWORD PTR [ebx+0x5cc],eax
100a757a:	8b bf 64 01 00 00    	mov    edi,DWORD PTR [edi+0x164]
100a7580:	85 ff                	test   edi,edi
100a7582:	0f 85 48 ff ff ff    	jne    0x100a74d0
100a7588:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100a758b:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
100a758e:	83 c0 04             	add    eax,0x4
100a7591:	83 e9 01             	sub    ecx,0x1
100a7594:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100a7597:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100a759a:	0f 85 26 ff ff ff    	jne    0x100a74c6
100a75a0:	5f                   	pop    edi
100a75a1:	5e                   	pop    esi
100a75a2:	5b                   	pop    ebx
100a75a3:	8b e5                	mov    esp,ebp
100a75a5:	5d                   	pop    ebp
100a75a6:	c2 10 00             	ret    0x10
