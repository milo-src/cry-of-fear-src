
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10049280 <.text+0x48280>:
10049280:	55                   	push   ebp
10049281:	8b ec                	mov    ebp,esp
10049283:	56                   	push   esi
10049284:	8b f1                	mov    esi,ecx
10049286:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10049289:	85 c9                	test   ecx,ecx
1004928b:	0f 84 d6 00 00 00    	je     0x10049367
10049291:	8b 01                	mov    eax,DWORD PTR [ecx]
10049293:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
10049299:	85 c0                	test   eax,eax
1004929b:	0f 84 c6 00 00 00    	je     0x10049367
100492a1:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100492a4:	8b 88 cc 01 00 00    	mov    ecx,DWORD PTR [eax+0x1cc]
100492aa:	85 c9                	test   ecx,ecx
100492ac:	0f 84 b5 00 00 00    	je     0x10049367
100492b2:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100492b7:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100492bd:	03 c1                	add    eax,ecx
100492bf:	50                   	push   eax
100492c0:	6a 00                	push   0x0
100492c2:	e8 c9 f2 0c 00       	call   0x10118590
100492c7:	83 c4 08             	add    esp,0x8
100492ca:	85 c0                	test   eax,eax
100492cc:	0f 84 95 00 00 00    	je     0x10049367
100492d2:	57                   	push   edi
100492d3:	8b 78 04             	mov    edi,DWORD PTR [eax+0x4]
100492d6:	ba 84 0c 1b 10       	mov    edx,0x101b0c84
100492db:	8b 8f 0c 02 00 00    	mov    ecx,DWORD PTR [edi+0x20c]
100492e1:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
100492e7:	f7 d9                	neg    ecx
100492e9:	1b c9                	sbb    ecx,ecx
100492eb:	23 c8                	and    ecx,eax
100492ed:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100492f2:	8b 09                	mov    ecx,DWORD PTR [ecx]
100492f4:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100492fa:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
10049300:	8a 01                	mov    al,BYTE PTR [ecx]
10049302:	3a 02                	cmp    al,BYTE PTR [edx]
10049304:	75 1a                	jne    0x10049320
10049306:	84 c0                	test   al,al
10049308:	74 12                	je     0x1004931c
1004930a:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
1004930d:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
10049310:	75 0e                	jne    0x10049320
10049312:	83 c1 02             	add    ecx,0x2
10049315:	83 c2 02             	add    edx,0x2
10049318:	84 c0                	test   al,al
1004931a:	75 e4                	jne    0x10049300
1004931c:	33 c0                	xor    eax,eax
1004931e:	eb 05                	jmp    0x10049325
10049320:	1b c0                	sbb    eax,eax
10049322:	83 c8 01             	or     eax,0x1
10049325:	85 c0                	test   eax,eax
10049327:	75 3d                	jne    0x10049366
10049329:	57                   	push   edi
1004932a:	e8 e1 eb ff ff       	call   0x10047f10
1004932f:	8b d0                	mov    edx,eax
10049331:	83 c4 04             	add    esp,0x4
10049334:	85 d2                	test   edx,edx
10049336:	74 2e                	je     0x10049366
10049338:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1004933b:	f3 0f 10 81 68 01 00 	movss  xmm0,DWORD PTR [ecx+0x168]
10049342:	00 
10049343:	8b ca                	mov    ecx,edx
10049345:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
1004934c:	9f                   	lahf
1004934d:	f6 c4 44             	test   ah,0x44
10049350:	7b 0d                	jnp    0x1004935f
10049352:	6a 00                	push   0x0
10049354:	e8 d7 ec ff ff       	call   0x10048030
10049359:	5f                   	pop    edi
1004935a:	5e                   	pop    esi
1004935b:	5d                   	pop    ebp
1004935c:	c2 10 00             	ret    0x10
1004935f:	6a 01                	push   0x1
10049361:	e8 ca ec ff ff       	call   0x10048030
10049366:	5f                   	pop    edi
10049367:	5e                   	pop    esi
10049368:	5d                   	pop    ebp
10049369:	c2 10 00             	ret    0x10
