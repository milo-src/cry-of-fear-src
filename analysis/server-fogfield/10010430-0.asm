
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10010430 <.text+0xf430>:
10010430:	55                   	push   ebp
10010431:	8b ec                	mov    ebp,esp
10010433:	51                   	push   ecx
10010434:	53                   	push   ebx
10010435:	56                   	push   esi
10010436:	57                   	push   edi
10010437:	68 c0 45 1a 10       	push   0x101a45c0
1001043c:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
10010442:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
10010445:	f3 0f 2c 75 fc       	cvttss2si esi,DWORD PTR [ebp-0x4]
1001044a:	8d 45 08             	lea    eax,[ebp+0x8]
1001044d:	66 0f 6e c6          	movd   xmm0,esi
10010451:	0f 5b c0             	cvtdq2ps xmm0,xmm0
10010454:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10010459:	50                   	push   eax
1001045a:	6a 00                	push   0x0
1001045c:	e8 4f 82 10 00       	call   0x101186b0
10010461:	8b d8                	mov    ebx,eax
10010463:	83 c4 0c             	add    esp,0xc
10010466:	85 db                	test   ebx,ebx
10010468:	74 65                	je     0x100104cf
1001046a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
10010470:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
10010473:	bf 30 21 1a 10       	mov    edi,0x101a2130
10010478:	8b 11                	mov    edx,DWORD PTR [ecx]
1001047a:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
10010480:	03 91 98 00 00 00    	add    edx,DWORD PTR [ecx+0x98]
10010486:	8a 02                	mov    al,BYTE PTR [edx]
10010488:	3a 07                	cmp    al,BYTE PTR [edi]
1001048a:	75 1a                	jne    0x100104a6
1001048c:	84 c0                	test   al,al
1001048e:	74 12                	je     0x100104a2
10010490:	8a 42 01             	mov    al,BYTE PTR [edx+0x1]
10010493:	3a 47 01             	cmp    al,BYTE PTR [edi+0x1]
10010496:	75 0e                	jne    0x100104a6
10010498:	83 c2 02             	add    edx,0x2
1001049b:	83 c7 02             	add    edi,0x2
1001049e:	84 c0                	test   al,al
100104a0:	75 e4                	jne    0x10010486
100104a2:	33 c0                	xor    eax,eax
100104a4:	eb 05                	jmp    0x100104ab
100104a6:	1b c0                	sbb    eax,eax
100104a8:	83 c8 01             	or     eax,0x1
100104ab:	85 c0                	test   eax,eax
100104ad:	74 2b                	je     0x100104da
100104af:	66 0f 6e c6          	movd   xmm0,esi
100104b3:	8d 45 08             	lea    eax,[ebp+0x8]
100104b6:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100104b9:	51                   	push   ecx
100104ba:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100104bf:	50                   	push   eax
100104c0:	53                   	push   ebx
100104c1:	e8 ea 81 10 00       	call   0x101186b0
100104c6:	8b d8                	mov    ebx,eax
100104c8:	83 c4 0c             	add    esp,0xc
100104cb:	85 db                	test   ebx,ebx
100104cd:	75 a1                	jne    0x10010470
100104cf:	5f                   	pop    edi
100104d0:	5e                   	pop    esi
100104d1:	33 c0                	xor    eax,eax
100104d3:	5b                   	pop    ebx
100104d4:	8b e5                	mov    esp,ebp
100104d6:	5d                   	pop    ebp
100104d7:	c2 0c 00             	ret    0xc
100104da:	5f                   	pop    edi
100104db:	5e                   	pop    esi
100104dc:	b8 01 00 00 00       	mov    eax,0x1
100104e1:	5b                   	pop    ebx
100104e2:	8b e5                	mov    esp,ebp
100104e4:	5d                   	pop    ebp
100104e5:	c2 0c 00             	ret    0xc
