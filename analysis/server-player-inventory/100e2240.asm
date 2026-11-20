
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e2240 <.text+0xe1240>:
100e2240:	55                   	push   ebp
100e2241:	8b ec                	mov    ebp,esp
100e2243:	51                   	push   ecx
100e2244:	8b c1                	mov    eax,ecx
100e2246:	53                   	push   ebx
100e2247:	56                   	push   esi
100e2248:	57                   	push   edi
100e2249:	80 b8 9c 1e 00 00 00 	cmp    BYTE PTR [eax+0x1e9c],0x0
100e2250:	8d b8 00 22 00 00    	lea    edi,[eax+0x2200]
100e2256:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100e2259:	be 01 00 00 00       	mov    esi,0x1
100e225e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e2263:	8b 98 98 00 00 00    	mov    ebx,DWORD PTR [eax+0x98]
100e2269:	74 49                	je     0x100e22b4
100e226b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100e2270:	8b 07                	mov    eax,DWORD PTR [edi]
100e2272:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100e2275:	03 c3                	add    eax,ebx
100e2277:	8a 10                	mov    dl,BYTE PTR [eax]
100e2279:	3a 11                	cmp    dl,BYTE PTR [ecx]
100e227b:	75 1a                	jne    0x100e2297
100e227d:	84 d2                	test   dl,dl
100e227f:	74 12                	je     0x100e2293
100e2281:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100e2284:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100e2287:	75 0e                	jne    0x100e2297
100e2289:	83 c0 02             	add    eax,0x2
100e228c:	83 c1 02             	add    ecx,0x2
100e228f:	84 d2                	test   dl,dl
100e2291:	75 e4                	jne    0x100e2277
100e2293:	33 c0                	xor    eax,eax
100e2295:	eb 05                	jmp    0x100e229c
100e2297:	1b c0                	sbb    eax,eax
100e2299:	83 c8 01             	or     eax,0x1
100e229c:	85 c0                	test   eax,eax
100e229e:	74 5d                	je     0x100e22fd
100e22a0:	46                   	inc    esi
100e22a1:	83 c7 04             	add    edi,0x4
100e22a4:	83 fe 03             	cmp    esi,0x3
100e22a7:	7e c7                	jle    0x100e2270
100e22a9:	5f                   	pop    edi
100e22aa:	5e                   	pop    esi
100e22ab:	33 c0                	xor    eax,eax
100e22ad:	5b                   	pop    ebx
100e22ae:	8b e5                	mov    esp,ebp
100e22b0:	5d                   	pop    ebp
100e22b1:	c2 08 00             	ret    0x8
100e22b4:	8b 07                	mov    eax,DWORD PTR [edi]
100e22b6:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100e22b9:	03 c3                	add    eax,ebx
100e22bb:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100e22c0:	8a 10                	mov    dl,BYTE PTR [eax]
100e22c2:	3a 11                	cmp    dl,BYTE PTR [ecx]
100e22c4:	75 1a                	jne    0x100e22e0
100e22c6:	84 d2                	test   dl,dl
100e22c8:	74 12                	je     0x100e22dc
100e22ca:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100e22cd:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100e22d0:	75 0e                	jne    0x100e22e0
100e22d2:	83 c0 02             	add    eax,0x2
100e22d5:	83 c1 02             	add    ecx,0x2
100e22d8:	84 d2                	test   dl,dl
100e22da:	75 e4                	jne    0x100e22c0
100e22dc:	33 c0                	xor    eax,eax
100e22de:	eb 05                	jmp    0x100e22e5
100e22e0:	1b c0                	sbb    eax,eax
100e22e2:	83 c8 01             	or     eax,0x1
100e22e5:	85 c0                	test   eax,eax
100e22e7:	74 14                	je     0x100e22fd
100e22e9:	46                   	inc    esi
100e22ea:	83 c7 04             	add    edi,0x4
100e22ed:	83 fe 06             	cmp    esi,0x6
100e22f0:	7e c2                	jle    0x100e22b4
100e22f2:	5f                   	pop    edi
100e22f3:	5e                   	pop    esi
100e22f4:	33 c0                	xor    eax,eax
100e22f6:	5b                   	pop    ebx
100e22f7:	8b e5                	mov    esp,ebp
100e22f9:	5d                   	pop    ebp
100e22fa:	c2 08 00             	ret    0x8
100e22fd:	80 7d 0c 00          	cmp    BYTE PTR [ebp+0xc],0x0
100e2301:	74 0b                	je     0x100e230e
100e2303:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100e2306:	6a 00                	push   0x0
100e2308:	56                   	push   esi
100e2309:	e8 82 b6 ff ff       	call   0x100dd990
100e230e:	5f                   	pop    edi
100e230f:	5e                   	pop    esi
100e2310:	b8 01 00 00 00       	mov    eax,0x1
100e2315:	5b                   	pop    ebx
100e2316:	8b e5                	mov    esp,ebp
100e2318:	5d                   	pop    ebp
100e2319:	c2 08 00             	ret    0x8
