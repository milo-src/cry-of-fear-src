
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e2380 <.text+0xe1380>:
100e2380:	55                   	push   ebp
100e2381:	8b ec                	mov    ebp,esp
100e2383:	51                   	push   ecx
100e2384:	53                   	push   ebx
100e2385:	56                   	push   esi
100e2386:	8d 81 14 25 00 00    	lea    eax,[ecx+0x2514]
100e238c:	33 db                	xor    ebx,ebx
100e238e:	57                   	push   edi
100e238f:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100e2392:	8b 30                	mov    esi,DWORD PTR [eax]
100e2394:	85 f6                	test   esi,esi
100e2396:	74 4e                	je     0x100e23e6
100e2398:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e239d:	8b b8 98 00 00 00    	mov    edi,DWORD PTR [eax+0x98]
100e23a3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e23a6:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100e23a9:	8b 00                	mov    eax,DWORD PTR [eax]
100e23ab:	03 c7                	add    eax,edi
100e23ad:	0f 1f 00             	nop    DWORD PTR [eax]
100e23b0:	8a 11                	mov    dl,BYTE PTR [ecx]
100e23b2:	3a 10                	cmp    dl,BYTE PTR [eax]
100e23b4:	75 1a                	jne    0x100e23d0
100e23b6:	84 d2                	test   dl,dl
100e23b8:	74 12                	je     0x100e23cc
100e23ba:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100e23bd:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100e23c0:	75 0e                	jne    0x100e23d0
100e23c2:	83 c1 02             	add    ecx,0x2
100e23c5:	83 c0 02             	add    eax,0x2
100e23c8:	84 d2                	test   dl,dl
100e23ca:	75 e4                	jne    0x100e23b0
100e23cc:	33 c0                	xor    eax,eax
100e23ce:	eb 05                	jmp    0x100e23d5
100e23d0:	1b c0                	sbb    eax,eax
100e23d2:	83 c8 01             	or     eax,0x1
100e23d5:	85 c0                	test   eax,eax
100e23d7:	74 24                	je     0x100e23fd
100e23d9:	8b b6 64 01 00 00    	mov    esi,DWORD PTR [esi+0x164]
100e23df:	85 f6                	test   esi,esi
100e23e1:	75 c0                	jne    0x100e23a3
100e23e3:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100e23e6:	43                   	inc    ebx
100e23e7:	83 c0 04             	add    eax,0x4
100e23ea:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100e23ed:	83 fb 06             	cmp    ebx,0x6
100e23f0:	7c a0                	jl     0x100e2392
100e23f2:	5f                   	pop    edi
100e23f3:	5e                   	pop    esi
100e23f4:	33 c0                	xor    eax,eax
100e23f6:	5b                   	pop    ebx
100e23f7:	8b e5                	mov    esp,ebp
100e23f9:	5d                   	pop    ebp
100e23fa:	c2 04 00             	ret    0x4
100e23fd:	5f                   	pop    edi
100e23fe:	5e                   	pop    esi
100e23ff:	b8 01 00 00 00       	mov    eax,0x1
100e2404:	5b                   	pop    ebx
100e2405:	8b e5                	mov    esp,ebp
100e2407:	5d                   	pop    ebp
100e2408:	c2 04 00             	ret    0x4
