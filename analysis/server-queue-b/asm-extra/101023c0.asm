
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101023c0 <.text+0x1013c0>:
101023c0:	55                   	push   ebp
101023c1:	8b ec                	mov    ebp,esp
101023c3:	53                   	push   ebx
101023c4:	56                   	push   esi
101023c5:	57                   	push   edi
101023c6:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
101023c9:	8b d9                	mov    ebx,ecx
101023cb:	be 88 f4 1d 10       	mov    esi,0x101df488
101023d0:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
101023d3:	8b c2                	mov    eax,edx
101023d5:	8a 08                	mov    cl,BYTE PTR [eax]
101023d7:	3a 0e                	cmp    cl,BYTE PTR [esi]
101023d9:	75 1a                	jne    0x101023f5
101023db:	84 c9                	test   cl,cl
101023dd:	74 12                	je     0x101023f1
101023df:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
101023e2:	3a 4e 01             	cmp    cl,BYTE PTR [esi+0x1]
101023e5:	75 0e                	jne    0x101023f5
101023e7:	83 c0 02             	add    eax,0x2
101023ea:	83 c6 02             	add    esi,0x2
101023ed:	84 c9                	test   cl,cl
101023ef:	75 e4                	jne    0x101023d5
101023f1:	33 c0                	xor    eax,eax
101023f3:	eb 05                	jmp    0x101023fa
101023f5:	1b c0                	sbb    eax,eax
101023f7:	83 c8 01             	or     eax,0x1
101023fa:	85 c0                	test   eax,eax
101023fc:	75 1f                	jne    0x1010241d
101023fe:	ff 77 08             	push   DWORD PTR [edi+0x8]
10102401:	e8 e6 d1 06 00       	call   0x1016f5ec
10102406:	83 c4 04             	add    esp,0x4
10102409:	d9 9b dc 00 00 00    	fstp   DWORD PTR [ebx+0xdc]
1010240f:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
10102416:	5f                   	pop    edi
10102417:	5e                   	pop    esi
10102418:	5b                   	pop    ebx
10102419:	5d                   	pop    ebp
1010241a:	c2 04 00             	ret    0x4
1010241d:	b8 c4 54 1a 10       	mov    eax,0x101a54c4
10102422:	8a 0a                	mov    cl,BYTE PTR [edx]
10102424:	3a 08                	cmp    cl,BYTE PTR [eax]
10102426:	75 1a                	jne    0x10102442
10102428:	84 c9                	test   cl,cl
1010242a:	74 12                	je     0x1010243e
1010242c:	8a 4a 01             	mov    cl,BYTE PTR [edx+0x1]
1010242f:	3a 48 01             	cmp    cl,BYTE PTR [eax+0x1]
10102432:	75 0e                	jne    0x10102442
10102434:	83 c2 02             	add    edx,0x2
10102437:	83 c0 02             	add    eax,0x2
1010243a:	84 c9                	test   cl,cl
1010243c:	75 e4                	jne    0x10102422
1010243e:	33 c0                	xor    eax,eax
10102440:	eb 05                	jmp    0x10102447
10102442:	1b c0                	sbb    eax,eax
10102444:	83 c8 01             	or     eax,0x1
10102447:	85 c0                	test   eax,eax
10102449:	75 20                	jne    0x1010246b
1010244b:	ff 77 08             	push   DWORD PTR [edi+0x8]
1010244e:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10102454:	83 c4 04             	add    esp,0x4
10102457:	89 83 e0 00 00 00    	mov    DWORD PTR [ebx+0xe0],eax
1010245d:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
10102464:	5f                   	pop    edi
10102465:	5e                   	pop    esi
10102466:	5b                   	pop    ebx
10102467:	5d                   	pop    ebp
10102468:	c2 04 00             	ret    0x4
1010246b:	57                   	push   edi
1010246c:	8b cb                	mov    ecx,ebx
1010246e:	e8 2d b7 f0 ff       	call   0x1000dba0
10102473:	5f                   	pop    edi
10102474:	5e                   	pop    esi
10102475:	5b                   	pop    ebx
10102476:	5d                   	pop    ebp
10102477:	c2 04 00             	ret    0x4
