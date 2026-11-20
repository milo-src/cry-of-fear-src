
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100af560 <.text+0xae560>:
100af560:	55                   	push   ebp
100af561:	8b ec                	mov    ebp,esp
100af563:	51                   	push   ecx
100af564:	53                   	push   ebx
100af565:	57                   	push   edi
100af566:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100af569:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
100af56c:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
100af56f:	83 ba 74 01 00 00 00 	cmp    DWORD PTR [edx+0x174],0x0
100af576:	75 74                	jne    0x100af5ec
100af578:	83 3d 7c 64 22 10 00 	cmp    DWORD PTR ds:0x1022647c,0x0
100af57f:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
100af582:	75 2b                	jne    0x100af5af
100af584:	83 3d 80 64 22 10 00 	cmp    DWORD PTR ds:0x10226480,0x0
100af58b:	75 22                	jne    0x100af5af
100af58d:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100af590:	83 b8 54 02 00 00 01 	cmp    DWORD PTR [eax+0x254],0x1
100af597:	74 16                	je     0x100af5af
100af599:	8b 87 b4 22 00 00    	mov    eax,DWORD PTR [edi+0x22b4]
100af59f:	0b 87 b0 22 00 00    	or     eax,DWORD PTR [edi+0x22b0]
100af5a5:	0b 82 84 01 00 00    	or     eax,DWORD PTR [edx+0x184]
100af5ab:	a8 20                	test   al,0x20
100af5ad:	74 3d                	je     0x100af5ec
100af5af:	6b 83 68 01 00 00 2c 	imul   eax,DWORD PTR [ebx+0x168],0x2c
100af5b6:	8b 80 90 18 23 10    	mov    eax,DWORD PTR [eax+0x10231890]
100af5bc:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
100af5bf:	85 c0                	test   eax,eax
100af5c1:	74 33                	je     0x100af5f6
100af5c3:	56                   	push   esi
100af5c4:	8b 31                	mov    esi,DWORD PTR [ecx]
100af5c6:	8b cb                	mov    ecx,ebx
100af5c8:	e8 23 0d 07 00       	call   0x101202f0
100af5cd:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100af5d0:	50                   	push   eax
100af5d1:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100af5d4:	57                   	push   edi
100af5d5:	ff 96 a8 00 00 00    	call   DWORD PTR [esi+0xa8]
100af5db:	5e                   	pop    esi
100af5dc:	85 c0                	test   eax,eax
100af5de:	75 22                	jne    0x100af602
100af5e0:	53                   	push   ebx
100af5e1:	8b cf                	mov    ecx,edi
100af5e3:	e8 28 2e 03 00       	call   0x100e2410
100af5e8:	85 c0                	test   eax,eax
100af5ea:	74 16                	je     0x100af602
100af5ec:	5f                   	pop    edi
100af5ed:	33 c0                	xor    eax,eax
100af5ef:	5b                   	pop    ebx
100af5f0:	8b e5                	mov    esp,ebp
100af5f2:	5d                   	pop    ebp
100af5f3:	c2 08 00             	ret    0x8
100af5f6:	53                   	push   ebx
100af5f7:	8b cf                	mov    ecx,edi
100af5f9:	e8 12 2e 03 00       	call   0x100e2410
100af5fe:	85 c0                	test   eax,eax
100af600:	75 ea                	jne    0x100af5ec
100af602:	5f                   	pop    edi
100af603:	b8 01 00 00 00       	mov    eax,0x1
100af608:	5b                   	pop    ebx
100af609:	8b e5                	mov    esp,ebp
100af60b:	5d                   	pop    ebp
100af60c:	c2 08 00             	ret    0x8
