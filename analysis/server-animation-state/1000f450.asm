
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000f450 <.text+0xe450>:
1000f450:	55                   	push   ebp
1000f451:	8b ec                	mov    ebp,esp
1000f453:	51                   	push   ecx
1000f454:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000f457:	85 c0                	test   eax,eax
1000f459:	75 04                	jne    0x1000f45f
1000f45b:	8b e5                	mov    esp,ebp
1000f45d:	5d                   	pop    ebp
1000f45e:	c3                   	ret
1000f45f:	53                   	push   ebx
1000f460:	56                   	push   esi
1000f461:	8b b0 a8 00 00 00    	mov    esi,DWORD PTR [eax+0xa8]
1000f467:	33 db                	xor    ebx,ebx
1000f469:	57                   	push   edi
1000f46a:	83 c9 ff             	or     ecx,0xffffffff
1000f46d:	83 c6 2c             	add    esi,0x2c
1000f470:	33 ff                	xor    edi,edi
1000f472:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
1000f475:	39 98 a4 00 00 00    	cmp    DWORD PTR [eax+0xa4],ebx
1000f47b:	7e 3e                	jle    0x1000f4bb
1000f47d:	03 f0                	add    esi,eax
1000f47f:	90                   	nop
1000f480:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
1000f483:	39 56 fc             	cmp    DWORD PTR [esi-0x4],edx
1000f486:	75 24                	jne    0x1000f4ac
1000f488:	03 1e                	add    ebx,DWORD PTR [esi]
1000f48a:	74 16                	je     0x1000f4a2
1000f48c:	8d 43 ff             	lea    eax,[ebx-0x1]
1000f48f:	50                   	push   eax
1000f490:	6a 00                	push   0x0
1000f492:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
1000f498:	83 c4 08             	add    esp,0x8
1000f49b:	3b 06                	cmp    eax,DWORD PTR [esi]
1000f49d:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000f4a0:	7d 07                	jge    0x1000f4a9
1000f4a2:	8b cf                	mov    ecx,edi
1000f4a4:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
1000f4a7:	eb 03                	jmp    0x1000f4ac
1000f4a9:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1000f4ac:	47                   	inc    edi
1000f4ad:	81 c6 b0 00 00 00    	add    esi,0xb0
1000f4b3:	3b b8 a4 00 00 00    	cmp    edi,DWORD PTR [eax+0xa4]
1000f4b9:	7c c5                	jl     0x1000f480
1000f4bb:	5f                   	pop    edi
1000f4bc:	5e                   	pop    esi
1000f4bd:	8b c1                	mov    eax,ecx
1000f4bf:	5b                   	pop    ebx
1000f4c0:	8b e5                	mov    esp,ebp
1000f4c2:	5d                   	pop    ebp
1000f4c3:	c3                   	ret
