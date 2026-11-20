
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100953d0 <.text+0x943d0>:
100953d0:	55                   	push   ebp
100953d1:	8b ec                	mov    ebp,esp
100953d3:	53                   	push   ebx
100953d4:	56                   	push   esi
100953d5:	57                   	push   edi
100953d6:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100953d9:	8b d9                	mov    ebx,ecx
100953db:	be 84 91 1c 10       	mov    esi,0x101c9184
100953e0:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
100953e3:	8b c2                	mov    eax,edx
100953e5:	8a 08                	mov    cl,BYTE PTR [eax]
100953e7:	3a 0e                	cmp    cl,BYTE PTR [esi]
100953e9:	75 1a                	jne    0x10095405
100953eb:	84 c9                	test   cl,cl
100953ed:	74 12                	je     0x10095401
100953ef:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100953f2:	3a 4e 01             	cmp    cl,BYTE PTR [esi+0x1]
100953f5:	75 0e                	jne    0x10095405
100953f7:	83 c0 02             	add    eax,0x2
100953fa:	83 c6 02             	add    esi,0x2
100953fd:	84 c9                	test   cl,cl
100953ff:	75 e4                	jne    0x100953e5
10095401:	33 c0                	xor    eax,eax
10095403:	eb 05                	jmp    0x1009540a
10095405:	1b c0                	sbb    eax,eax
10095407:	83 c8 01             	or     eax,0x1
1009540a:	85 c0                	test   eax,eax
1009540c:	75 20                	jne    0x1009542e
1009540e:	ff 77 08             	push   DWORD PTR [edi+0x8]
10095411:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10095417:	83 c4 04             	add    esp,0x4
1009541a:	89 83 dc 00 00 00    	mov    DWORD PTR [ebx+0xdc],eax
10095420:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
10095427:	5f                   	pop    edi
10095428:	5e                   	pop    esi
10095429:	5b                   	pop    ebx
1009542a:	5d                   	pop    ebp
1009542b:	c2 04 00             	ret    0x4
1009542e:	b8 90 91 1c 10       	mov    eax,0x101c9190
10095433:	8a 0a                	mov    cl,BYTE PTR [edx]
10095435:	3a 08                	cmp    cl,BYTE PTR [eax]
10095437:	75 1a                	jne    0x10095453
10095439:	84 c9                	test   cl,cl
1009543b:	74 12                	je     0x1009544f
1009543d:	8a 4a 01             	mov    cl,BYTE PTR [edx+0x1]
10095440:	3a 48 01             	cmp    cl,BYTE PTR [eax+0x1]
10095443:	75 0e                	jne    0x10095453
10095445:	83 c2 02             	add    edx,0x2
10095448:	83 c0 02             	add    eax,0x2
1009544b:	84 c9                	test   cl,cl
1009544d:	75 e4                	jne    0x10095433
1009544f:	33 c0                	xor    eax,eax
10095451:	eb 05                	jmp    0x10095458
10095453:	1b c0                	sbb    eax,eax
10095455:	83 c8 01             	or     eax,0x1
10095458:	85 c0                	test   eax,eax
1009545a:	75 20                	jne    0x1009547c
1009545c:	ff 77 08             	push   DWORD PTR [edi+0x8]
1009545f:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10095465:	83 c4 04             	add    esp,0x4
10095468:	89 83 e0 00 00 00    	mov    DWORD PTR [ebx+0xe0],eax
1009546e:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
10095475:	5f                   	pop    edi
10095476:	5e                   	pop    esi
10095477:	5b                   	pop    ebx
10095478:	5d                   	pop    ebp
10095479:	c2 04 00             	ret    0x4
1009547c:	57                   	push   edi
1009547d:	8b cb                	mov    ecx,ebx
1009547f:	e8 1c 87 f7 ff       	call   0x1000dba0
10095484:	5f                   	pop    edi
10095485:	5e                   	pop    esi
10095486:	5b                   	pop    ebx
10095487:	5d                   	pop    ebp
10095488:	c2 04 00             	ret    0x4
