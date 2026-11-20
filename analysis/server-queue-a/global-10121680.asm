
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10121680 <.text+0x120680>:
10121680:	55                   	push   ebp
10121681:	8b ec                	mov    ebp,esp
10121683:	53                   	push   ebx
10121684:	56                   	push   esi
10121685:	57                   	push   edi
10121686:	6a 01                	push   0x1
10121688:	68 30 b9 21 10       	push   0x1021b930
1012168d:	8b d9                	mov    ebx,ecx
1012168f:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10121692:	53                   	push   ebx
10121693:	68 ec 6d 1e 10       	push   0x101e6dec
10121698:	68 f4 6d 1e 10       	push   0x101e6df4
1012169d:	e8 1e 97 ff ff       	call   0x1011adc0
101216a2:	85 c0                	test   eax,eax
101216a4:	74 41                	je     0x101216e7
101216a6:	8b 33                	mov    esi,DWORD PTR [ebx]
101216a8:	33 ff                	xor    edi,edi
101216aa:	39 7b 04             	cmp    DWORD PTR [ebx+0x4],edi
101216ad:	7e 2c                	jle    0x101216db
101216af:	90                   	nop
101216b0:	85 f6                	test   esi,esi
101216b2:	74 27                	je     0x101216db
101216b4:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
101216b7:	6a 03                	push   0x3
101216b9:	68 a0 ba 21 10       	push   0x1021baa0
101216be:	56                   	push   esi
101216bf:	68 fc 6d 1e 10       	push   0x101e6dfc
101216c4:	68 04 6e 1e 10       	push   0x101e6e04
101216c9:	e8 f2 96 ff ff       	call   0x1011adc0
101216ce:	85 c0                	test   eax,eax
101216d0:	74 15                	je     0x101216e7
101216d2:	8b 76 64             	mov    esi,DWORD PTR [esi+0x64]
101216d5:	47                   	inc    edi
101216d6:	3b 7b 04             	cmp    edi,DWORD PTR [ebx+0x4]
101216d9:	7c d5                	jl     0x101216b0
101216db:	5f                   	pop    edi
101216dc:	5e                   	pop    esi
101216dd:	b8 01 00 00 00       	mov    eax,0x1
101216e2:	5b                   	pop    ebx
101216e3:	5d                   	pop    ebp
101216e4:	c2 04 00             	ret    0x4
101216e7:	5f                   	pop    edi
101216e8:	5e                   	pop    esi
101216e9:	33 c0                	xor    eax,eax
101216eb:	5b                   	pop    ebx
101216ec:	5d                   	pop    ebp
101216ed:	c2 04 00             	ret    0x4
