
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e2410 <.text+0xe1410>:
100e2410:	55                   	push   ebp
100e2411:	8b ec                	mov    ebp,esp
100e2413:	53                   	push   ebx
100e2414:	56                   	push   esi
100e2415:	57                   	push   edi
100e2416:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100e2419:	8b f1                	mov    esi,ecx
100e241b:	8b cf                	mov    ecx,edi
100e241d:	8b 07                	mov    eax,DWORD PTR [edi]
100e241f:	ff 90 80 01 00 00    	call   DWORD PTR [eax+0x180]
100e2425:	8b b4 86 14 25 00 00 	mov    esi,DWORD PTR [esi+eax*4+0x2514]
100e242c:	85 f6                	test   esi,esi
100e242e:	74 53                	je     0x100e2483
100e2430:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e2435:	8b 98 98 00 00 00    	mov    ebx,DWORD PTR [eax+0x98]
100e243b:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e243e:	8b 38                	mov    edi,DWORD PTR [eax]
100e2440:	03 fb                	add    edi,ebx
100e2442:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e2445:	8b cf                	mov    ecx,edi
100e2447:	8b 00                	mov    eax,DWORD PTR [eax]
100e2449:	03 c3                	add    eax,ebx
100e244b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100e2450:	8a 10                	mov    dl,BYTE PTR [eax]
100e2452:	3a 11                	cmp    dl,BYTE PTR [ecx]
100e2454:	75 1a                	jne    0x100e2470
100e2456:	84 d2                	test   dl,dl
100e2458:	74 12                	je     0x100e246c
100e245a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100e245d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100e2460:	75 0e                	jne    0x100e2470
100e2462:	83 c0 02             	add    eax,0x2
100e2465:	83 c1 02             	add    ecx,0x2
100e2468:	84 d2                	test   dl,dl
100e246a:	75 e4                	jne    0x100e2450
100e246c:	33 c0                	xor    eax,eax
100e246e:	eb 05                	jmp    0x100e2475
100e2470:	1b c0                	sbb    eax,eax
100e2472:	83 c8 01             	or     eax,0x1
100e2475:	85 c0                	test   eax,eax
100e2477:	74 13                	je     0x100e248c
100e2479:	8b b6 64 01 00 00    	mov    esi,DWORD PTR [esi+0x164]
100e247f:	85 f6                	test   esi,esi
100e2481:	75 bf                	jne    0x100e2442
100e2483:	5f                   	pop    edi
100e2484:	5e                   	pop    esi
100e2485:	33 c0                	xor    eax,eax
100e2487:	5b                   	pop    ebx
100e2488:	5d                   	pop    ebp
100e2489:	c2 04 00             	ret    0x4
100e248c:	5f                   	pop    edi
100e248d:	5e                   	pop    esi
100e248e:	b8 01 00 00 00       	mov    eax,0x1
100e2493:	5b                   	pop    ebx
100e2494:	5d                   	pop    ebp
100e2495:	c2 04 00             	ret    0x4
