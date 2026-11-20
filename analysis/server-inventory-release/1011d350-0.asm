
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011d350 <.text+0x11c350>:
1011d350:	55                   	push   ebp
1011d351:	8b ec                	mov    ebp,esp
1011d353:	53                   	push   ebx
1011d354:	56                   	push   esi
1011d355:	57                   	push   edi
1011d356:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1011d359:	8b f1                	mov    esi,ecx
1011d35b:	8b cf                	mov    ecx,edi
1011d35d:	8b 07                	mov    eax,DWORD PTR [edi]
1011d35f:	ff 90 80 01 00 00    	call   DWORD PTR [eax+0x180]
1011d365:	8b b4 86 e0 00 00 00 	mov    esi,DWORD PTR [esi+eax*4+0xe0]
1011d36c:	85 f6                	test   esi,esi
1011d36e:	74 53                	je     0x1011d3c3
1011d370:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011d375:	8b 98 98 00 00 00    	mov    ebx,DWORD PTR [eax+0x98]
1011d37b:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1011d37e:	8b 38                	mov    edi,DWORD PTR [eax]
1011d380:	03 fb                	add    edi,ebx
1011d382:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011d385:	8b cf                	mov    ecx,edi
1011d387:	8b 00                	mov    eax,DWORD PTR [eax]
1011d389:	03 c3                	add    eax,ebx
1011d38b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
1011d390:	8a 10                	mov    dl,BYTE PTR [eax]
1011d392:	3a 11                	cmp    dl,BYTE PTR [ecx]
1011d394:	75 1a                	jne    0x1011d3b0
1011d396:	84 d2                	test   dl,dl
1011d398:	74 12                	je     0x1011d3ac
1011d39a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1011d39d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1011d3a0:	75 0e                	jne    0x1011d3b0
1011d3a2:	83 c0 02             	add    eax,0x2
1011d3a5:	83 c1 02             	add    ecx,0x2
1011d3a8:	84 d2                	test   dl,dl
1011d3aa:	75 e4                	jne    0x1011d390
1011d3ac:	33 c0                	xor    eax,eax
1011d3ae:	eb 05                	jmp    0x1011d3b5
1011d3b0:	1b c0                	sbb    eax,eax
1011d3b2:	83 c8 01             	or     eax,0x1
1011d3b5:	85 c0                	test   eax,eax
1011d3b7:	74 13                	je     0x1011d3cc
1011d3b9:	8b b6 64 01 00 00    	mov    esi,DWORD PTR [esi+0x164]
1011d3bf:	85 f6                	test   esi,esi
1011d3c1:	75 bf                	jne    0x1011d382
1011d3c3:	5f                   	pop    edi
1011d3c4:	5e                   	pop    esi
1011d3c5:	33 c0                	xor    eax,eax
1011d3c7:	5b                   	pop    ebx
1011d3c8:	5d                   	pop    ebp
1011d3c9:	c2 04 00             	ret    0x4
1011d3cc:	5f                   	pop    edi
1011d3cd:	5e                   	pop    esi
1011d3ce:	b8 01 00 00 00       	mov    eax,0x1
1011d3d3:	5b                   	pop    ebx
1011d3d4:	5d                   	pop    ebp
1011d3d5:	c2 04 00             	ret    0x4
