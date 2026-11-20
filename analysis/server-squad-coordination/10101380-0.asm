
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10101380 <.text+0x100380>:
10101380:	55                   	push   ebp
10101381:	8b ec                	mov    ebp,esp
10101383:	83 ec 08             	sub    esp,0x8
10101386:	53                   	push   ebx
10101387:	8b d9                	mov    ebx,ecx
10101389:	56                   	push   esi
1010138a:	8d 8b 68 03 00 00    	lea    ecx,[ebx+0x368]
10101390:	e8 eb 63 f1 ff       	call   0x10017780
10101395:	85 c0                	test   eax,eax
10101397:	0f 84 e9 00 00 00    	je     0x10101486
1010139d:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
101013a1:	75 18                	jne    0x101013bb
101013a3:	68 54 f0 1d 10       	push   0x101df054
101013a8:	6a 01                	push   0x1
101013aa:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
101013b0:	83 c4 08             	add    esp,0x8
101013b3:	5e                   	pop    esi
101013b4:	5b                   	pop    ebx
101013b5:	8b e5                	mov    esp,ebp
101013b7:	5d                   	pop    ebp
101013b8:	c2 04 00             	ret    0x4
101013bb:	57                   	push   edi
101013bc:	8d 8b 68 03 00 00    	lea    ecx,[ebx+0x368]
101013c2:	e8 c9 63 f1 ff       	call   0x10017790
101013c7:	85 c0                	test   eax,eax
101013c9:	0f 45 d8             	cmovne ebx,eax
101013cc:	33 ff                	xor    edi,edi
101013ce:	89 5d f8             	mov    DWORD PTR [ebp-0x8],ebx
101013d1:	8d 83 70 03 00 00    	lea    eax,[ebx+0x370]
101013d7:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
101013da:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
101013e0:	83 ff 04             	cmp    edi,0x4
101013e3:	72 04                	jb     0x101013e9
101013e5:	8b f3                	mov    esi,ebx
101013e7:	eb 0c                	jmp    0x101013f5
101013e9:	8b c8                	mov    ecx,eax
101013eb:	e8 a0 63 f1 ff       	call   0x10017790
101013f0:	8b f0                	mov    esi,eax
101013f2:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
101013f5:	85 f6                	test   esi,esi
101013f7:	74 7c                	je     0x10101475
101013f9:	8d 8e 84 01 00 00    	lea    ecx,[esi+0x184]
101013ff:	e8 8c 63 f1 ff       	call   0x10017790
10101404:	3b 45 08             	cmp    eax,DWORD PTR [ebp+0x8]
10101407:	74 66                	je     0x1010146f
10101409:	f6 86 80 01 00 00 10 	test   BYTE PTR [esi+0x180],0x10
10101410:	75 5d                	jne    0x1010146f
10101412:	8d 8e 84 01 00 00    	lea    ecx,[esi+0x184]
10101418:	e8 63 63 f1 ff       	call   0x10017780
1010141d:	85 c0                	test   eax,eax
1010141f:	74 1a                	je     0x1010143b
10101421:	8d 86 f4 02 00 00    	lea    eax,[esi+0x2f4]
10101427:	50                   	push   eax
10101428:	8d 8e 84 01 00 00    	lea    ecx,[esi+0x184]
1010142e:	e8 5d 63 f1 ff       	call   0x10017790
10101433:	50                   	push   eax
10101434:	8b ce                	mov    ecx,esi
10101436:	e8 35 02 fc ff       	call   0x100c1670
1010143b:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1010143e:	8d 8e 84 01 00 00    	lea    ecx,[esi+0x184]
10101444:	e8 f7 62 f1 ff       	call   0x10017740
10101449:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1010144c:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
1010144f:	f3 0f 7e 40 08       	movq   xmm0,QWORD PTR [eax+0x8]
10101454:	66 0f d6 86 f4 02 00 	movq   QWORD PTR [esi+0x2f4],xmm0
1010145b:	00 
1010145c:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
1010145f:	81 8e 80 01 00 00 00 	or     DWORD PTR [esi+0x180],0x10000
10101466:	00 01 00 
10101469:	89 86 fc 02 00 00    	mov    DWORD PTR [esi+0x2fc],eax
1010146f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
10101472:	8b 5d f8             	mov    ebx,DWORD PTR [ebp-0x8]
10101475:	47                   	inc    edi
10101476:	83 c0 08             	add    eax,0x8
10101479:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1010147c:	83 ff 05             	cmp    edi,0x5
1010147f:	0f 8c 5b ff ff ff    	jl     0x101013e0
10101485:	5f                   	pop    edi
10101486:	5e                   	pop    esi
10101487:	5b                   	pop    ebx
10101488:	8b e5                	mov    esp,ebp
1010148a:	5d                   	pop    ebp
1010148b:	c2 04 00             	ret    0x4
