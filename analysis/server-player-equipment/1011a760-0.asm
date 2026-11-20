
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011a760 <.text+0x119760>:
1011a760:	55                   	push   ebp
1011a761:	8b ec                	mov    ebp,esp
1011a763:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1011a766:	33 d2                	xor    edx,edx
1011a768:	8a 01                	mov    al,BYTE PTR [ecx]
1011a76a:	84 c0                	test   al,al
1011a76c:	74 21                	je     0x1011a78f
1011a76e:	56                   	push   esi
1011a76f:	57                   	push   edi
1011a770:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
1011a773:	8b f7                	mov    esi,edi
1011a775:	2b f1                	sub    esi,ecx
1011a777:	3c 23                	cmp    al,0x23
1011a779:	74 0c                	je     0x1011a787
1011a77b:	88 04 0e             	mov    BYTE PTR [esi+ecx*1],al
1011a77e:	42                   	inc    edx
1011a77f:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
1011a782:	41                   	inc    ecx
1011a783:	84 c0                	test   al,al
1011a785:	75 f0                	jne    0x1011a777
1011a787:	c6 04 3a 00          	mov    BYTE PTR [edx+edi*1],0x0
1011a78b:	5f                   	pop    edi
1011a78c:	5e                   	pop    esi
1011a78d:	5d                   	pop    ebp
1011a78e:	c3                   	ret
1011a78f:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1011a792:	88 14 02             	mov    BYTE PTR [edx+eax*1],dl
1011a795:	5d                   	pop    ebp
1011a796:	c3                   	ret
