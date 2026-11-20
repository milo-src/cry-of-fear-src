
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fdef0 <.text+0xfcef0>:
100fdef0:	55                   	push   ebp
100fdef1:	8b ec                	mov    ebp,esp
100fdef3:	83 3d c4 c8 22 10 00 	cmp    DWORD PTR ds:0x1022c8c4,0x0
100fdefa:	56                   	push   esi
100fdefb:	57                   	push   edi
100fdefc:	74 58                	je     0x100fdf56
100fdefe:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100fdf01:	85 ff                	test   edi,edi
100fdf03:	74 51                	je     0x100fdf56
100fdf05:	33 f6                	xor    esi,esi
100fdf07:	39 35 d8 c8 22 10    	cmp    DWORD PTR ds:0x1022c8d8,esi
100fdf0d:	74 47                	je     0x100fdf56
100fdf0f:	33 c0                	xor    eax,eax
100fdf11:	8d 80 c8 c8 22 10    	lea    eax,[eax+0x1022c8c8]
100fdf17:	8b cf                	mov    ecx,edi
100fdf19:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100fdf20:	8a 11                	mov    dl,BYTE PTR [ecx]
100fdf22:	3a 10                	cmp    dl,BYTE PTR [eax]
100fdf24:	75 1a                	jne    0x100fdf40
100fdf26:	84 d2                	test   dl,dl
100fdf28:	74 12                	je     0x100fdf3c
100fdf2a:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100fdf2d:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100fdf30:	75 0e                	jne    0x100fdf40
100fdf32:	83 c1 02             	add    ecx,0x2
100fdf35:	83 c0 02             	add    eax,0x2
100fdf38:	84 d2                	test   dl,dl
100fdf3a:	75 e4                	jne    0x100fdf20
100fdf3c:	33 c0                	xor    eax,eax
100fdf3e:	eb 05                	jmp    0x100fdf45
100fdf40:	1b c0                	sbb    eax,eax
100fdf42:	83 c8 01             	or     eax,0x1
100fdf45:	85 c0                	test   eax,eax
100fdf47:	74 14                	je     0x100fdf5d
100fdf49:	46                   	inc    esi
100fdf4a:	6b c6 34             	imul   eax,esi,0x34
100fdf4d:	83 b8 d8 c8 22 10 00 	cmp    DWORD PTR [eax+0x1022c8d8],0x0
100fdf54:	75 bb                	jne    0x100fdf11
100fdf56:	5f                   	pop    edi
100fdf57:	83 c8 ff             	or     eax,0xffffffff
100fdf5a:	5e                   	pop    esi
100fdf5b:	5d                   	pop    ebp
100fdf5c:	c3                   	ret
100fdf5d:	5f                   	pop    edi
100fdf5e:	8b c6                	mov    eax,esi
100fdf60:	5e                   	pop    esi
100fdf61:	5d                   	pop    ebp
100fdf62:	c3                   	ret
