
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011b3c0 <.text+0x11a3c0>:
1011b3c0:	55                   	push   ebp
1011b3c1:	8b ec                	mov    ebp,esp
1011b3c3:	53                   	push   ebx
1011b3c4:	57                   	push   edi
1011b3c5:	8b 7d 10             	mov    edi,DWORD PTR [ebp+0x10]
1011b3c8:	8b d9                	mov    ebx,ecx
1011b3ca:	8d 04 bd 00 00 00 00 	lea    eax,[edi*4+0x0]
1011b3d1:	50                   	push   eax
1011b3d2:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1011b3d5:	e8 f6 ad ff ff       	call   0x101161d0
1011b3da:	85 ff                	test   edi,edi
1011b3dc:	7e 36                	jle    0x1011b414
1011b3de:	56                   	push   esi
1011b3df:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
1011b3e2:	f3 0f 10 06          	movss  xmm0,DWORD PTR [esi]
1011b3e6:	8b 03                	mov    eax,DWORD PTR [ebx]
1011b3e8:	f3 0f 11 45 10       	movss  DWORD PTR [ebp+0x10],xmm0
1011b3ed:	85 c0                	test   eax,eax
1011b3ef:	74 0d                	je     0x1011b3fe
1011b3f1:	f3 0f 5c 80 50 05 00 	subss  xmm0,DWORD PTR [eax+0x550]
1011b3f8:	00 
1011b3f9:	f3 0f 11 45 10       	movss  DWORD PTR [ebp+0x10],xmm0
1011b3fe:	6a 04                	push   0x4
1011b400:	8d 45 10             	lea    eax,[ebp+0x10]
1011b403:	8b cb                	mov    ecx,ebx
1011b405:	50                   	push   eax
1011b406:	e8 35 ad ff ff       	call   0x10116140
1011b40b:	83 c6 04             	add    esi,0x4
1011b40e:	83 ef 01             	sub    edi,0x1
1011b411:	75 cf                	jne    0x1011b3e2
1011b413:	5e                   	pop    esi
1011b414:	5f                   	pop    edi
1011b415:	5b                   	pop    ebx
1011b416:	5d                   	pop    ebp
1011b417:	c2 0c 00             	ret    0xc
