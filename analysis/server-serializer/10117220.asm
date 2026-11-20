
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10117220 <.text+0x116220>:
10117220:	55                   	push   ebp
10117221:	8b ec                	mov    ebp,esp
10117223:	83 ec 0c             	sub    esp,0xc
10117226:	53                   	push   ebx
10117227:	56                   	push   esi
10117228:	8b 31                	mov    esi,DWORD PTR [ecx]
1011722a:	57                   	push   edi
1011722b:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1011722e:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
10117231:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
10117234:	e8 d7 f6 ff ff       	call   0x10116910
10117239:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
1011723c:	33 d2                	xor    edx,edx
1011723e:	f7 f1                	div    ecx
10117240:	33 ff                	xor    edi,edi
10117242:	0f b7 c2             	movzx  eax,dx
10117245:	85 c9                	test   ecx,ecx
10117247:	7e 5f                	jle    0x101172a8
10117249:	8b 56 18             	mov    edx,DWORD PTR [esi+0x18]
1011724c:	8b f0                	mov    esi,eax
1011724e:	89 55 fc             	mov    DWORD PTR [ebp-0x4],edx
10117251:	2b f1                	sub    esi,ecx
10117253:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
10117256:	03 c7                	add    eax,edi
10117258:	8b de                	mov    ebx,esi
1011725a:	3b c1                	cmp    eax,ecx
1011725c:	0f 4c d8             	cmovl  ebx,eax
1011725f:	8b 04 9a             	mov    eax,DWORD PTR [edx+ebx*4]
10117262:	85 c0                	test   eax,eax
10117264:	74 5d                	je     0x101172c3
10117266:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10117269:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
10117270:	8a 11                	mov    dl,BYTE PTR [ecx]
10117272:	3a 10                	cmp    dl,BYTE PTR [eax]
10117274:	75 1a                	jne    0x10117290
10117276:	84 d2                	test   dl,dl
10117278:	74 12                	je     0x1011728c
1011727a:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
1011727d:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
10117280:	75 0e                	jne    0x10117290
10117282:	83 c1 02             	add    ecx,0x2
10117285:	83 c0 02             	add    eax,0x2
10117288:	84 d2                	test   dl,dl
1011728a:	75 e4                	jne    0x10117270
1011728c:	33 c0                	xor    eax,eax
1011728e:	eb 05                	jmp    0x10117295
10117290:	1b c0                	sbb    eax,eax
10117292:	83 c8 01             	or     eax,0x1
10117295:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
10117298:	85 c0                	test   eax,eax
1011729a:	74 27                	je     0x101172c3
1011729c:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
1011729f:	47                   	inc    edi
101172a0:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
101172a3:	46                   	inc    esi
101172a4:	3b f9                	cmp    edi,ecx
101172a6:	7c ae                	jl     0x10117256
101172a8:	68 d8 58 1e 10       	push   0x101e58d8
101172ad:	6a 04                	push   0x4
101172af:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
101172b5:	83 c4 08             	add    esp,0x8
101172b8:	33 c0                	xor    eax,eax
101172ba:	5f                   	pop    edi
101172bb:	5e                   	pop    esi
101172bc:	5b                   	pop    ebx
101172bd:	8b e5                	mov    esp,ebp
101172bf:	5d                   	pop    ebp
101172c0:	c2 04 00             	ret    0x4
101172c3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
101172c6:	5f                   	pop    edi
101172c7:	89 04 9a             	mov    DWORD PTR [edx+ebx*4],eax
101172ca:	66 8b c3             	mov    ax,bx
101172cd:	5e                   	pop    esi
101172ce:	5b                   	pop    ebx
101172cf:	8b e5                	mov    esp,ebp
101172d1:	5d                   	pop    ebp
101172d2:	c2 04 00             	ret    0x4
