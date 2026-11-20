
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fc4d0 <.text+0xfb4d0>:
100fc4d0:	55                   	push   ebp
100fc4d1:	8b ec                	mov    ebp,esp
100fc4d3:	68 7c 6a 1c 10       	push   0x101c6a7c
100fc4d8:	ff 15 30 30 22 10    	call   DWORD PTR ds:0x10223030
100fc4de:	83 c4 04             	add    esp,0x4
100fc4e1:	8d 50 01             	lea    edx,[eax+0x1]
100fc4e4:	8a 08                	mov    cl,BYTE PTR [eax]
100fc4e6:	40                   	inc    eax
100fc4e7:	84 c9                	test   cl,cl
100fc4e9:	75 f9                	jne    0x100fc4e4
100fc4eb:	56                   	push   esi
100fc4ec:	2b c2                	sub    eax,edx
100fc4ee:	57                   	push   edi
100fc4ef:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100fc4f2:	83 f8 01             	cmp    eax,0x1
100fc4f5:	0f 86 b9 00 00 00    	jbe    0x100fc5b4
100fc4fb:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fc500:	68 8c 6a 1c 10       	push   0x101c6a8c
100fc505:	8b b0 98 00 00 00    	mov    esi,DWORD PTR [eax+0x98]
100fc50b:	03 70 0c             	add    esi,DWORD PTR [eax+0xc]
100fc50e:	ff 15 30 30 22 10    	call   DWORD PTR ds:0x10223030
100fc514:	83 c4 04             	add    esp,0x4
100fc517:	8a 08                	mov    cl,BYTE PTR [eax]
100fc519:	3a 0e                	cmp    cl,BYTE PTR [esi]
100fc51b:	75 1a                	jne    0x100fc537
100fc51d:	84 c9                	test   cl,cl
100fc51f:	74 12                	je     0x100fc533
100fc521:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100fc524:	3a 4e 01             	cmp    cl,BYTE PTR [esi+0x1]
100fc527:	75 0e                	jne    0x100fc537
100fc529:	83 c0 02             	add    eax,0x2
100fc52c:	83 c6 02             	add    esi,0x2
100fc52f:	84 c9                	test   cl,cl
100fc531:	75 e4                	jne    0x100fc517
100fc533:	33 c0                	xor    eax,eax
100fc535:	eb 05                	jmp    0x100fc53c
100fc537:	1b c0                	sbb    eax,eax
100fc539:	83 c8 01             	or     eax,0x1
100fc53c:	85 c0                	test   eax,eax
100fc53e:	75 74                	jne    0x100fc5b4
100fc540:	68 7c 6a 1c 10       	push   0x101c6a7c
100fc545:	ff 15 30 30 22 10    	call   DWORD PTR ds:0x10223030
100fc54b:	50                   	push   eax
100fc54c:	6a 00                	push   0x0
100fc54e:	e8 3d c0 01 00       	call   0x10118590
100fc553:	8b f0                	mov    esi,eax
100fc555:	83 c4 0c             	add    esp,0xc
100fc558:	85 f6                	test   esi,esi
100fc55a:	74 35                	je     0x100fc591
100fc55c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100fc560:	8b 16                	mov    edx,DWORD PTR [esi]
100fc562:	51                   	push   ecx
100fc563:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100fc56a:	8b ce                	mov    ecx,esi
100fc56c:	6a 03                	push   0x3
100fc56e:	57                   	push   edi
100fc56f:	57                   	push   edi
100fc570:	ff 92 e8 00 00 00    	call   DWORD PTR [edx+0xe8]
100fc576:	68 7c 6a 1c 10       	push   0x101c6a7c
100fc57b:	ff 15 30 30 22 10    	call   DWORD PTR ds:0x10223030
100fc581:	50                   	push   eax
100fc582:	56                   	push   esi
100fc583:	e8 08 c0 01 00       	call   0x10118590
100fc588:	8b f0                	mov    esi,eax
100fc58a:	83 c4 0c             	add    esp,0xc
100fc58d:	85 f6                	test   esi,esi
100fc58f:	75 cf                	jne    0x100fc560
100fc591:	68 96 24 1a 10       	push   0x101a2496
100fc596:	68 7c 6a 1c 10       	push   0x101c6a7c
100fc59b:	ff 15 38 30 22 10    	call   DWORD PTR ds:0x10223038
100fc5a1:	68 96 24 1a 10       	push   0x101a2496
100fc5a6:	68 8c 6a 1c 10       	push   0x101c6a8c
100fc5ab:	ff 15 38 30 22 10    	call   DWORD PTR ds:0x10223038
100fc5b1:	83 c4 10             	add    esp,0x10
100fc5b4:	68 88 63 1d 10       	push   0x101d6388
100fc5b9:	6a 00                	push   0x0
100fc5bb:	e8 a0 be 01 00       	call   0x10118460
100fc5c0:	8b f0                	mov    esi,eax
100fc5c2:	83 c4 08             	add    esp,0x8
100fc5c5:	85 f6                	test   esi,esi
100fc5c7:	74 26                	je     0x100fc5ef
100fc5c9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100fc5d0:	8b 16                	mov    edx,DWORD PTR [esi]
100fc5d2:	8b ce                	mov    ecx,esi
100fc5d4:	57                   	push   edi
100fc5d5:	ff 92 e4 00 00 00    	call   DWORD PTR [edx+0xe4]
100fc5db:	68 88 63 1d 10       	push   0x101d6388
100fc5e0:	56                   	push   esi
100fc5e1:	e8 7a be 01 00       	call   0x10118460
100fc5e6:	8b f0                	mov    esi,eax
100fc5e8:	83 c4 08             	add    esp,0x8
100fc5eb:	85 f6                	test   esi,esi
100fc5ed:	75 e1                	jne    0x100fc5d0
100fc5ef:	5f                   	pop    edi
100fc5f0:	5e                   	pop    esi
100fc5f1:	5d                   	pop    ebp
100fc5f2:	c2 04 00             	ret    0x4
