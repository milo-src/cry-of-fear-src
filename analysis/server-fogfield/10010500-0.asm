
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10010500 <.text+0xf500>:
10010500:	55                   	push   ebp
10010501:	8b ec                	mov    ebp,esp
10010503:	56                   	push   esi
10010504:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10010507:	ba 54 45 1a 10       	mov    edx,0x101a4554
1001050c:	57                   	push   edi
1001050d:	8b f9                	mov    edi,ecx
1001050f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10010512:	8a 08                	mov    cl,BYTE PTR [eax]
10010514:	3a 0a                	cmp    cl,BYTE PTR [edx]
10010516:	75 1a                	jne    0x10010532
10010518:	84 c9                	test   cl,cl
1001051a:	74 12                	je     0x1001052e
1001051c:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
1001051f:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
10010522:	75 0e                	jne    0x10010532
10010524:	83 c0 02             	add    eax,0x2
10010527:	83 c2 02             	add    edx,0x2
1001052a:	84 c9                	test   cl,cl
1001052c:	75 e4                	jne    0x10010512
1001052e:	33 c0                	xor    eax,eax
10010530:	eb 05                	jmp    0x10010537
10010532:	1b c0                	sbb    eax,eax
10010534:	83 c8 01             	or     eax,0x1
10010537:	85 c0                	test   eax,eax
10010539:	75 21                	jne    0x1001055c
1001053b:	ff 76 08             	push   DWORD PTR [esi+0x8]
1001053e:	e8 1b b0 15 00       	call   0x1016b55e
10010543:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
10010546:	83 c4 04             	add    esp,0x4
10010549:	89 81 48 02 00 00    	mov    DWORD PTR [ecx+0x248],eax
1001054f:	5f                   	pop    edi
10010550:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10010557:	5e                   	pop    esi
10010558:	5d                   	pop    ebp
10010559:	c2 04 00             	ret    0x4
1001055c:	56                   	push   esi
1001055d:	8b cf                	mov    ecx,edi
1001055f:	e8 1c 1f 0f 00       	call   0x10102480
10010564:	5f                   	pop    edi
10010565:	5e                   	pop    esi
10010566:	5d                   	pop    ebp
10010567:	c2 04 00             	ret    0x4
