
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10102350 <.text+0x101350>:
10102350:	55                   	push   ebp
10102351:	8b ec                	mov    ebp,esp
10102353:	56                   	push   esi
10102354:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10102357:	ba a0 52 1a 10       	mov    edx,0x101a52a0
1010235c:	57                   	push   edi
1010235d:	8b f9                	mov    edi,ecx
1010235f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10102362:	8a 08                	mov    cl,BYTE PTR [eax]
10102364:	3a 0a                	cmp    cl,BYTE PTR [edx]
10102366:	75 1a                	jne    0x10102382
10102368:	84 c9                	test   cl,cl
1010236a:	74 12                	je     0x1010237e
1010236c:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
1010236f:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
10102372:	75 0e                	jne    0x10102382
10102374:	83 c0 02             	add    eax,0x2
10102377:	83 c2 02             	add    edx,0x2
1010237a:	84 c9                	test   cl,cl
1010237c:	75 e4                	jne    0x10102362
1010237e:	33 c0                	xor    eax,eax
10102380:	eb 05                	jmp    0x10102387
10102382:	1b c0                	sbb    eax,eax
10102384:	83 c8 01             	or     eax,0x1
10102387:	85 c0                	test   eax,eax
10102389:	75 22                	jne    0x101023ad
1010238b:	ff 76 08             	push   DWORD PTR [esi+0x8]
1010238e:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10102394:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
10102397:	83 c4 04             	add    esp,0x4
1010239a:	89 81 d4 01 00 00    	mov    DWORD PTR [ecx+0x1d4],eax
101023a0:	5f                   	pop    edi
101023a1:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
101023a8:	5e                   	pop    esi
101023a9:	5d                   	pop    ebp
101023aa:	c2 04 00             	ret    0x4
101023ad:	56                   	push   esi
101023ae:	8b cf                	mov    ecx,edi
101023b0:	e8 eb b7 f0 ff       	call   0x1000dba0
101023b5:	5f                   	pop    edi
101023b6:	5e                   	pop    esi
101023b7:	5d                   	pop    ebp
101023b8:	c2 04 00             	ret    0x4
