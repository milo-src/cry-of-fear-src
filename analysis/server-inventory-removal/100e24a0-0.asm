
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e24a0 <.text+0xe14a0>:
100e24a0:	55                   	push   ebp
100e24a1:	8b ec                	mov    ebp,esp
100e24a3:	51                   	push   ecx
100e24a4:	53                   	push   ebx
100e24a5:	56                   	push   esi
100e24a6:	8d 81 14 25 00 00    	lea    eax,[ecx+0x2514]
100e24ac:	33 db                	xor    ebx,ebx
100e24ae:	57                   	push   edi
100e24af:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100e24b2:	8b 30                	mov    esi,DWORD PTR [eax]
100e24b4:	85 f6                	test   esi,esi
100e24b6:	74 56                	je     0x100e250e
100e24b8:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e24bd:	8b b8 98 00 00 00    	mov    edi,DWORD PTR [eax+0x98]
100e24c3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e24c6:	b9 fc 06 1b 10       	mov    ecx,0x101b06fc
100e24cb:	8b 00                	mov    eax,DWORD PTR [eax]
100e24cd:	03 c7                	add    eax,edi
100e24cf:	90                   	nop
100e24d0:	8a 10                	mov    dl,BYTE PTR [eax]
100e24d2:	3a 11                	cmp    dl,BYTE PTR [ecx]
100e24d4:	75 1a                	jne    0x100e24f0
100e24d6:	84 d2                	test   dl,dl
100e24d8:	74 12                	je     0x100e24ec
100e24da:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100e24dd:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100e24e0:	75 0e                	jne    0x100e24f0
100e24e2:	83 c0 02             	add    eax,0x2
100e24e5:	83 c1 02             	add    ecx,0x2
100e24e8:	84 d2                	test   dl,dl
100e24ea:	75 e4                	jne    0x100e24d0
100e24ec:	33 c0                	xor    eax,eax
100e24ee:	eb 05                	jmp    0x100e24f5
100e24f0:	1b c0                	sbb    eax,eax
100e24f2:	83 c8 01             	or     eax,0x1
100e24f5:	85 c0                	test   eax,eax
100e24f7:	75 08                	jne    0x100e2501
100e24f9:	38 86 00 02 00 00    	cmp    BYTE PTR [esi+0x200],al
100e24ff:	75 22                	jne    0x100e2523
100e2501:	8b b6 64 01 00 00    	mov    esi,DWORD PTR [esi+0x164]
100e2507:	85 f6                	test   esi,esi
100e2509:	75 b8                	jne    0x100e24c3
100e250b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100e250e:	43                   	inc    ebx
100e250f:	83 c0 04             	add    eax,0x4
100e2512:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100e2515:	83 fb 06             	cmp    ebx,0x6
100e2518:	7c 98                	jl     0x100e24b2
100e251a:	5f                   	pop    edi
100e251b:	5e                   	pop    esi
100e251c:	32 c0                	xor    al,al
100e251e:	5b                   	pop    ebx
100e251f:	8b e5                	mov    esp,ebp
100e2521:	5d                   	pop    ebp
100e2522:	c3                   	ret
100e2523:	5f                   	pop    edi
100e2524:	5e                   	pop    esi
100e2525:	b0 01                	mov    al,0x1
100e2527:	5b                   	pop    ebx
100e2528:	8b e5                	mov    esp,ebp
100e252a:	5d                   	pop    ebp
100e252b:	c3                   	ret
