
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100b22e0 <.text+0xb12e0>:
100b22e0:	55                   	push   ebp
100b22e1:	8b ec                	mov    ebp,esp
100b22e3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100b22e6:	85 c0                	test   eax,eax
100b22e8:	0f 84 96 00 00 00    	je     0x100b2384
100b22ee:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
100b22f4:	57                   	push   edi
100b22f5:	85 c0                	test   eax,eax
100b22f7:	75 12                	jne    0x100b230b
100b22f9:	50                   	push   eax
100b22fa:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
100b2300:	83 c4 04             	add    esp,0x4
100b2303:	85 c0                	test   eax,eax
100b2305:	75 04                	jne    0x100b230b
100b2307:	33 ff                	xor    edi,edi
100b2309:	eb 03                	jmp    0x100b230e
100b230b:	8b 78 7c             	mov    edi,DWORD PTR [eax+0x7c]
100b230e:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100b2311:	56                   	push   esi
100b2312:	68 64 eb 1c 10       	push   0x101ceb64
100b2317:	6a 00                	push   0x0
100b2319:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
100b231f:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
100b2322:	e8 39 61 06 00       	call   0x10118460
100b2327:	8b f0                	mov    esi,eax
100b2329:	83 c4 08             	add    esp,0x8
100b232c:	85 f6                	test   esi,esi
100b232e:	74 52                	je     0x100b2382
100b2330:	53                   	push   ebx
100b2331:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
100b2334:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b2337:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
100b233e:	74 2d                	je     0x100b236d
100b2340:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100b2343:	39 88 9c 01 00 00    	cmp    DWORD PTR [eax+0x19c],ecx
100b2349:	75 22                	jne    0x100b236d
100b234b:	85 db                	test   ebx,ebx
100b234d:	75 14                	jne    0x100b2363
100b234f:	8b 06                	mov    eax,DWORD PTR [esi]
100b2351:	51                   	push   ecx
100b2352:	89 1c 24             	mov    DWORD PTR [esp],ebx
100b2355:	8b ce                	mov    ecx,esi
100b2357:	6a 01                	push   0x1
100b2359:	57                   	push   edi
100b235a:	57                   	push   edi
100b235b:	ff 90 e8 00 00 00    	call   DWORD PTR [eax+0xe8]
100b2361:	eb 0a                	jmp    0x100b236d
100b2363:	c7 80 9c 01 00 00 00 	mov    DWORD PTR [eax+0x19c],0x0
100b236a:	00 00 00 
100b236d:	68 64 eb 1c 10       	push   0x101ceb64
100b2372:	56                   	push   esi
100b2373:	e8 e8 60 06 00       	call   0x10118460
100b2378:	8b f0                	mov    esi,eax
100b237a:	83 c4 08             	add    esp,0x8
100b237d:	85 f6                	test   esi,esi
100b237f:	75 b3                	jne    0x100b2334
100b2381:	5b                   	pop    ebx
100b2382:	5e                   	pop    esi
100b2383:	5f                   	pop    edi
100b2384:	5d                   	pop    ebp
100b2385:	c3                   	ret
