
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1001f390 <.text+0x1e390>:
1001f390:	55                   	push   ebp
1001f391:	8b ec                	mov    ebp,esp
1001f393:	53                   	push   ebx
1001f394:	56                   	push   esi
1001f395:	57                   	push   edi
1001f396:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1001f399:	8b d9                	mov    ebx,ecx
1001f39b:	ba 74 98 1a 10       	mov    edx,0x101a9874
1001f3a0:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
1001f3a3:	8b c6                	mov    eax,esi
1001f3a5:	8a 08                	mov    cl,BYTE PTR [eax]
1001f3a7:	3a 0a                	cmp    cl,BYTE PTR [edx]
1001f3a9:	75 1a                	jne    0x1001f3c5
1001f3ab:	84 c9                	test   cl,cl
1001f3ad:	74 12                	je     0x1001f3c1
1001f3af:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
1001f3b2:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
1001f3b5:	75 0e                	jne    0x1001f3c5
1001f3b7:	83 c0 02             	add    eax,0x2
1001f3ba:	83 c2 02             	add    edx,0x2
1001f3bd:	84 c9                	test   cl,cl
1001f3bf:	75 e4                	jne    0x1001f3a5
1001f3c1:	33 c0                	xor    eax,eax
1001f3c3:	eb 05                	jmp    0x1001f3ca
1001f3c5:	1b c0                	sbb    eax,eax
1001f3c7:	83 c8 01             	or     eax,0x1
1001f3ca:	85 c0                	test   eax,eax
1001f3cc:	75 22                	jne    0x1001f3f0
1001f3ce:	ff 77 08             	push   DWORD PTR [edi+0x8]
1001f3d1:	e8 88 c1 14 00       	call   0x1016b55e
1001f3d6:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
1001f3d9:	83 c4 04             	add    esp,0x4
1001f3dc:	89 81 48 02 00 00    	mov    DWORD PTR [ecx+0x248],eax
1001f3e2:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
1001f3e9:	5f                   	pop    edi
1001f3ea:	5e                   	pop    esi
1001f3eb:	5b                   	pop    ebx
1001f3ec:	5d                   	pop    ebp
1001f3ed:	c2 04 00             	ret    0x4
1001f3f0:	b9 7c 24 1a 10       	mov    ecx,0x101a247c
1001f3f5:	8b c6                	mov    eax,esi
1001f3f7:	8a 10                	mov    dl,BYTE PTR [eax]
1001f3f9:	3a 11                	cmp    dl,BYTE PTR [ecx]
1001f3fb:	75 1a                	jne    0x1001f417
1001f3fd:	84 d2                	test   dl,dl
1001f3ff:	74 12                	je     0x1001f413
1001f401:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1001f404:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1001f407:	75 0e                	jne    0x1001f417
1001f409:	83 c0 02             	add    eax,0x2
1001f40c:	83 c1 02             	add    ecx,0x2
1001f40f:	84 d2                	test   dl,dl
1001f411:	75 e4                	jne    0x1001f3f7
1001f413:	33 c0                	xor    eax,eax
1001f415:	eb 05                	jmp    0x1001f41c
1001f417:	1b c0                	sbb    eax,eax
1001f419:	83 c8 01             	or     eax,0x1
1001f41c:	85 c0                	test   eax,eax
1001f41e:	75 1d                	jne    0x1001f43d
1001f420:	ff 77 08             	push   DWORD PTR [edi+0x8]
1001f423:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
1001f429:	83 c4 04             	add    esp,0x4
1001f42c:	89 43 18             	mov    DWORD PTR [ebx+0x18],eax
1001f42f:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
1001f436:	5f                   	pop    edi
1001f437:	5e                   	pop    esi
1001f438:	5b                   	pop    ebx
1001f439:	5d                   	pop    ebp
1001f43a:	c2 04 00             	ret    0x4
1001f43d:	b9 88 24 1a 10       	mov    ecx,0x101a2488
1001f442:	8b c6                	mov    eax,esi
1001f444:	8a 10                	mov    dl,BYTE PTR [eax]
1001f446:	3a 11                	cmp    dl,BYTE PTR [ecx]
1001f448:	75 1a                	jne    0x1001f464
1001f44a:	84 d2                	test   dl,dl
1001f44c:	74 12                	je     0x1001f460
1001f44e:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1001f451:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1001f454:	75 0e                	jne    0x1001f464
1001f456:	83 c0 02             	add    eax,0x2
1001f459:	83 c1 02             	add    ecx,0x2
1001f45c:	84 d2                	test   dl,dl
1001f45e:	75 e4                	jne    0x1001f444
1001f460:	33 c0                	xor    eax,eax
1001f462:	eb 05                	jmp    0x1001f469
1001f464:	1b c0                	sbb    eax,eax
1001f466:	83 c8 01             	or     eax,0x1
1001f469:	85 c0                	test   eax,eax
1001f46b:	75 1c                	jne    0x1001f489
1001f46d:	ff 77 08             	push   DWORD PTR [edi+0x8]
1001f470:	e8 e9 c0 14 00       	call   0x1016b55e
1001f475:	83 c4 04             	add    esp,0x4
1001f478:	89 43 60             	mov    DWORD PTR [ebx+0x60],eax
1001f47b:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
1001f482:	5f                   	pop    edi
1001f483:	5e                   	pop    esi
1001f484:	5b                   	pop    ebx
1001f485:	5d                   	pop    ebp
1001f486:	c2 04 00             	ret    0x4
1001f489:	b8 90 24 1a 10       	mov    eax,0x101a2490
1001f48e:	66 90                	xchg   ax,ax
1001f490:	8a 0e                	mov    cl,BYTE PTR [esi]
1001f492:	3a 08                	cmp    cl,BYTE PTR [eax]
1001f494:	75 1a                	jne    0x1001f4b0
1001f496:	84 c9                	test   cl,cl
1001f498:	74 12                	je     0x1001f4ac
1001f49a:	8a 4e 01             	mov    cl,BYTE PTR [esi+0x1]
1001f49d:	3a 48 01             	cmp    cl,BYTE PTR [eax+0x1]
1001f4a0:	75 0e                	jne    0x1001f4b0
1001f4a2:	83 c6 02             	add    esi,0x2
1001f4a5:	83 c0 02             	add    eax,0x2
1001f4a8:	84 c9                	test   cl,cl
1001f4aa:	75 e4                	jne    0x1001f490
1001f4ac:	33 c0                	xor    eax,eax
1001f4ae:	eb 05                	jmp    0x1001f4b5
1001f4b0:	1b c0                	sbb    eax,eax
1001f4b2:	83 c8 01             	or     eax,0x1
1001f4b5:	85 c0                	test   eax,eax
1001f4b7:	75 1c                	jne    0x1001f4d5
1001f4b9:	ff 77 08             	push   DWORD PTR [edi+0x8]
1001f4bc:	e8 9d c0 14 00       	call   0x1016b55e
1001f4c1:	83 c4 04             	add    esp,0x4
1001f4c4:	89 43 64             	mov    DWORD PTR [ebx+0x64],eax
1001f4c7:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
1001f4ce:	5f                   	pop    edi
1001f4cf:	5e                   	pop    esi
1001f4d0:	5b                   	pop    ebx
1001f4d1:	5d                   	pop    ebp
1001f4d2:	c2 04 00             	ret    0x4
1001f4d5:	c7 47 0c 00 00 00 00 	mov    DWORD PTR [edi+0xc],0x0
1001f4dc:	5f                   	pop    edi
1001f4dd:	5e                   	pop    esi
1001f4de:	5b                   	pop    ebx
1001f4df:	5d                   	pop    ebp
1001f4e0:	c2 04 00             	ret    0x4
