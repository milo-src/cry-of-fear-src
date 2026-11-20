
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100d1c10 <.text+0xd0c10>:
100d1c10:	55                   	push   ebp
100d1c11:	8b ec                	mov    ebp,esp
100d1c13:	51                   	push   ecx
100d1c14:	8b c1                	mov    eax,ecx
100d1c16:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100d1c19:	53                   	push   ebx
100d1c1a:	56                   	push   esi
100d1c1b:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100d1c1e:	33 f6                	xor    esi,esi
100d1c20:	57                   	push   edi
100d1c21:	8b 18                	mov    ebx,DWORD PTR [eax]
100d1c23:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100d1c28:	03 98 98 00 00 00    	add    ebx,DWORD PTR [eax+0x98]
100d1c2e:	39 35 80 59 22 10    	cmp    DWORD PTR ds:0x10225980,esi
100d1c34:	7e 61                	jle    0x100d1c97
100d1c36:	bf 30 5a 22 10       	mov    edi,0x10225a30
100d1c3b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100d1c40:	8b c7                	mov    eax,edi
100d1c42:	8b cb                	mov    ecx,ebx
100d1c44:	8a 11                	mov    dl,BYTE PTR [ecx]
100d1c46:	3a 10                	cmp    dl,BYTE PTR [eax]
100d1c48:	75 1a                	jne    0x100d1c64
100d1c4a:	84 d2                	test   dl,dl
100d1c4c:	74 12                	je     0x100d1c60
100d1c4e:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100d1c51:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100d1c54:	75 0e                	jne    0x100d1c64
100d1c56:	83 c1 02             	add    ecx,0x2
100d1c59:	83 c0 02             	add    eax,0x2
100d1c5c:	84 d2                	test   dl,dl
100d1c5e:	75 e4                	jne    0x100d1c44
100d1c60:	33 c0                	xor    eax,eax
100d1c62:	eb 05                	jmp    0x100d1c69
100d1c64:	1b c0                	sbb    eax,eax
100d1c66:	83 c8 01             	or     eax,0x1
100d1c69:	85 c0                	test   eax,eax
100d1c6b:	74 14                	je     0x100d1c81
100d1c6d:	46                   	inc    esi
100d1c6e:	81 c7 a4 00 00 00    	add    edi,0xa4
100d1c74:	3b 35 80 59 22 10    	cmp    esi,DWORD PTR ds:0x10225980
100d1c7a:	7c c4                	jl     0x100d1c40
100d1c7c:	8b 75 fc             	mov    esi,DWORD PTR [ebp-0x4]
100d1c7f:	eb 18                	jmp    0x100d1c99
100d1c81:	69 c6 a4 00 00 00    	imul   eax,esi,0xa4
100d1c87:	8b 75 fc             	mov    esi,DWORD PTR [ebp-0x4]
100d1c8a:	05 30 5a 22 10       	add    eax,0x10225a30
100d1c8f:	89 86 f8 01 00 00    	mov    DWORD PTR [esi+0x1f8],eax
100d1c95:	eb 02                	jmp    0x100d1c99
100d1c97:	8b f1                	mov    esi,ecx
100d1c99:	83 be f8 01 00 00 00 	cmp    DWORD PTR [esi+0x1f8],0x0
100d1ca0:	75 35                	jne    0x100d1cd7
100d1ca2:	68 74 17 1b 10       	push   0x101b1774
100d1ca7:	6a 01                	push   0x1
100d1ca9:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100d1caf:	53                   	push   ebx
100d1cb0:	68 20 7b 1d 10       	push   0x101d7b20
100d1cb5:	6a 01                	push   0x1
100d1cb7:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100d1cbd:	68 74 17 1b 10       	push   0x101b1774
100d1cc2:	6a 01                	push   0x1
100d1cc4:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100d1cca:	83 c4 1c             	add    esp,0x1c
100d1ccd:	c7 86 f8 01 00 00 88 	mov    DWORD PTR [esi+0x1f8],0x10225988
100d1cd4:	59 22 10 
100d1cd7:	5f                   	pop    edi
100d1cd8:	5e                   	pop    esi
100d1cd9:	5b                   	pop    ebx
100d1cda:	8b e5                	mov    esp,ebp
100d1cdc:	5d                   	pop    ebp
100d1cdd:	c3                   	ret
