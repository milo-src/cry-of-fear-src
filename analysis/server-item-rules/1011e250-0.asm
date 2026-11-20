
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011e250 <.text+0x11d250>:
1011e250:	55                   	push   ebp
1011e251:	8b ec                	mov    ebp,esp
1011e253:	53                   	push   ebx
1011e254:	8b 1d 88 31 22 10    	mov    ebx,DWORD PTR ds:0x10223188
1011e25a:	56                   	push   esi
1011e25b:	57                   	push   edi
1011e25c:	33 ff                	xor    edi,edi
1011e25e:	be 98 18 23 10       	mov    esi,0x10231898
1011e263:	8b 4e f8             	mov    ecx,DWORD PTR [esi-0x8]
1011e266:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
1011e269:	85 c9                	test   ecx,ecx
1011e26b:	74 34                	je     0x1011e2a1
1011e26d:	8b 83 98 00 00 00    	mov    eax,DWORD PTR [ebx+0x98]
1011e273:	03 c2                	add    eax,edx
1011e275:	8a 10                	mov    dl,BYTE PTR [eax]
1011e277:	3a 11                	cmp    dl,BYTE PTR [ecx]
1011e279:	75 1a                	jne    0x1011e295
1011e27b:	84 d2                	test   dl,dl
1011e27d:	74 12                	je     0x1011e291
1011e27f:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1011e282:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1011e285:	75 0e                	jne    0x1011e295
1011e287:	83 c0 02             	add    eax,0x2
1011e28a:	83 c1 02             	add    ecx,0x2
1011e28d:	84 d2                	test   dl,dl
1011e28f:	75 e4                	jne    0x1011e275
1011e291:	33 c0                	xor    eax,eax
1011e293:	eb 05                	jmp    0x1011e29a
1011e295:	1b c0                	sbb    eax,eax
1011e297:	83 c8 01             	or     eax,0x1
1011e29a:	85 c0                	test   eax,eax
1011e29c:	74 6d                	je     0x1011e30b
1011e29e:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
1011e2a1:	8b 06                	mov    eax,DWORD PTR [esi]
1011e2a3:	85 c0                	test   eax,eax
1011e2a5:	74 32                	je     0x1011e2d9
1011e2a7:	8b 8b 98 00 00 00    	mov    ecx,DWORD PTR [ebx+0x98]
1011e2ad:	03 ca                	add    ecx,edx
1011e2af:	90                   	nop
1011e2b0:	8a 11                	mov    dl,BYTE PTR [ecx]
1011e2b2:	3a 10                	cmp    dl,BYTE PTR [eax]
1011e2b4:	75 1a                	jne    0x1011e2d0
1011e2b6:	84 d2                	test   dl,dl
1011e2b8:	74 12                	je     0x1011e2cc
1011e2ba:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
1011e2bd:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
1011e2c0:	75 0e                	jne    0x1011e2d0
1011e2c2:	83 c1 02             	add    ecx,0x2
1011e2c5:	83 c0 02             	add    eax,0x2
1011e2c8:	84 d2                	test   dl,dl
1011e2ca:	75 e4                	jne    0x1011e2b0
1011e2cc:	33 c0                	xor    eax,eax
1011e2ce:	eb 05                	jmp    0x1011e2d5
1011e2d0:	1b c0                	sbb    eax,eax
1011e2d2:	83 c8 01             	or     eax,0x1
1011e2d5:	85 c0                	test   eax,eax
1011e2d7:	74 40                	je     0x1011e319
1011e2d9:	83 c6 2c             	add    esi,0x2c
1011e2dc:	47                   	inc    edi
1011e2dd:	81 fe 18 1e 23 10    	cmp    esi,0x10231e18
1011e2e3:	0f 8c 7a ff ff ff    	jl     0x1011e263
1011e2e9:	8b 83 98 00 00 00    	mov    eax,DWORD PTR [ebx+0x98]
1011e2ef:	03 45 08             	add    eax,DWORD PTR [ebp+0x8]
1011e2f2:	50                   	push   eax
1011e2f3:	68 68 62 1e 10       	push   0x101e6268
1011e2f8:	6a 01                	push   0x1
1011e2fa:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1011e300:	83 c4 0c             	add    esp,0xc
1011e303:	83 c8 ff             	or     eax,0xffffffff
1011e306:	5f                   	pop    edi
1011e307:	5e                   	pop    esi
1011e308:	5b                   	pop    ebx
1011e309:	5d                   	pop    ebp
1011e30a:	c3                   	ret
1011e30b:	6b c7 2c             	imul   eax,edi,0x2c
1011e30e:	5f                   	pop    edi
1011e30f:	5e                   	pop    esi
1011e310:	5b                   	pop    ebx
1011e311:	8b 80 94 18 23 10    	mov    eax,DWORD PTR [eax+0x10231894]
1011e317:	5d                   	pop    ebp
1011e318:	c3                   	ret
1011e319:	6b c7 2c             	imul   eax,edi,0x2c
1011e31c:	5f                   	pop    edi
1011e31d:	5e                   	pop    esi
1011e31e:	5b                   	pop    ebx
1011e31f:	8b 80 9c 18 23 10    	mov    eax,DWORD PTR [eax+0x1023189c]
1011e325:	5d                   	pop    ebp
1011e326:	c3                   	ret
