
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10118480 <.text+0x117480>:
10118480:	55                   	push   ebp
10118481:	8b ec                	mov    ebp,esp
10118483:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10118486:	53                   	push   ebx
10118487:	56                   	push   esi
10118488:	57                   	push   edi
10118489:	85 c0                	test   eax,eax
1011848b:	74 0b                	je     0x10118498
1011848d:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10118490:	8b b0 0c 02 00 00    	mov    esi,DWORD PTR [eax+0x20c]
10118496:	eb 02                	jmp    0x1011849a
10118498:	33 f6                	xor    esi,esi
1011849a:	8b 7d 10             	mov    edi,DWORD PTR [ebp+0x10]
1011849d:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
101184a0:	57                   	push   edi
101184a1:	53                   	push   ebx
101184a2:	56                   	push   esi
101184a3:	ff 15 80 2f 22 10    	call   DWORD PTR ds:0x10222f80
101184a9:	8b f0                	mov    esi,eax
101184ab:	83 c4 0c             	add    esp,0xc
101184ae:	85 f6                	test   esi,esi
101184b0:	74 1a                	je     0x101184cc
101184b2:	56                   	push   esi
101184b3:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
101184b9:	83 c4 04             	add    esp,0x4
101184bc:	85 c0                	test   eax,eax
101184be:	74 0c                	je     0x101184cc
101184c0:	8b 46 7c             	mov    eax,DWORD PTR [esi+0x7c]
101184c3:	85 c0                	test   eax,eax
101184c5:	74 d9                	je     0x101184a0
101184c7:	5f                   	pop    edi
101184c8:	5e                   	pop    esi
101184c9:	5b                   	pop    ebx
101184ca:	5d                   	pop    ebp
101184cb:	c3                   	ret
101184cc:	5f                   	pop    edi
101184cd:	5e                   	pop    esi
101184ce:	33 c0                	xor    eax,eax
101184d0:	5b                   	pop    ebx
101184d1:	5d                   	pop    ebp
101184d2:	c3                   	ret
