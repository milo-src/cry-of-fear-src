
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10100410 <.text+0xff410>:
10100410:	55                   	push   ebp
10100411:	8b ec                	mov    ebp,esp
10100413:	53                   	push   ebx
10100414:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10100417:	56                   	push   esi
10100418:	57                   	push   edi
10100419:	85 db                	test   ebx,ebx
1010041b:	74 73                	je     0x10100490
1010041d:	83 7d 14 00          	cmp    DWORD PTR [ebp+0x14],0x0
10100421:	74 6d                	je     0x10100490
10100423:	8b 7d 10             	mov    edi,DWORD PTR [ebp+0x10]
10100426:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
10100429:	8b 3f                	mov    edi,DWORD PTR [edi]
1010042b:	3b fa                	cmp    edi,edx
1010042d:	7d 61                	jge    0x10100490
1010042f:	8b 45 18             	mov    eax,DWORD PTR [ebp+0x18]
10100432:	8b ca                	mov    ecx,edx
10100434:	2b cf                	sub    ecx,edi
10100436:	48                   	dec    eax
10100437:	8b f7                	mov    esi,edi
10100439:	3b c8                	cmp    ecx,eax
1010043b:	7e 06                	jle    0x10100443
1010043d:	8b 55 18             	mov    edx,DWORD PTR [ebp+0x18]
10100440:	4a                   	dec    edx
10100441:	03 d7                	add    edx,edi
10100443:	33 c0                	xor    eax,eax
10100445:	3b f2                	cmp    esi,edx
10100447:	7d 47                	jge    0x10100490
10100449:	8d 48 01             	lea    ecx,[eax+0x1]
1010044c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
10100450:	85 c0                	test   eax,eax
10100452:	75 0c                	jne    0x10100460
10100454:	80 3c 1e 0a          	cmp    BYTE PTR [esi+ebx*1],0xa
10100458:	0f 44 c1             	cmove  eax,ecx
1010045b:	46                   	inc    esi
1010045c:	3b f2                	cmp    esi,edx
1010045e:	7c f0                	jl     0x10100450
10100460:	3b f7                	cmp    esi,edi
10100462:	74 2c                	je     0x10100490
10100464:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10100467:	8b de                	mov    ebx,esi
10100469:	2b df                	sub    ebx,edi
1010046b:	03 c7                	add    eax,edi
1010046d:	8b 7d 14             	mov    edi,DWORD PTR [ebp+0x14]
10100470:	53                   	push   ebx
10100471:	50                   	push   eax
10100472:	57                   	push   edi
10100473:	e8 b8 fc 03 00       	call   0x10140130
10100478:	83 c4 0c             	add    esp,0xc
1010047b:	3b 5d 18             	cmp    ebx,DWORD PTR [ebp+0x18]
1010047e:	7d 04                	jge    0x10100484
10100480:	c6 04 3b 00          	mov    BYTE PTR [ebx+edi*1],0x0
10100484:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
10100487:	89 30                	mov    DWORD PTR [eax],esi
10100489:	8b c7                	mov    eax,edi
1010048b:	5f                   	pop    edi
1010048c:	5e                   	pop    esi
1010048d:	5b                   	pop    ebx
1010048e:	5d                   	pop    ebp
1010048f:	c3                   	ret
10100490:	5f                   	pop    edi
10100491:	5e                   	pop    esi
10100492:	33 c0                	xor    eax,eax
10100494:	5b                   	pop    ebx
10100495:	5d                   	pop    ebp
10100496:	c3                   	ret
