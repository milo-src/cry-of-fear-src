
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100dad40 <.text+0xd9d40>:
100dad40:	55                   	push   ebp
100dad41:	8b ec                	mov    ebp,esp
100dad43:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
100dad47:	53                   	push   ebx
100dad48:	8b d9                	mov    ebx,ecx
100dad4a:	75 17                	jne    0x100dad63
100dad4c:	68 0c c6 1d 10       	push   0x101dc60c
100dad51:	6a 01                	push   0x1
100dad53:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100dad59:	83 c4 08             	add    esp,0x8
100dad5c:	33 c0                	xor    eax,eax
100dad5e:	5b                   	pop    ebx
100dad5f:	5d                   	pop    ebp
100dad60:	c2 0c 00             	ret    0xc
100dad63:	80 bb 9c 1e 00 00 00 	cmp    BYTE PTR [ebx+0x1e9c],0x0
100dad6a:	56                   	push   esi
100dad6b:	57                   	push   edi
100dad6c:	8d bb 00 22 00 00    	lea    edi,[ebx+0x2200]
100dad72:	be 01 00 00 00       	mov    esi,0x1
100dad77:	74 27                	je     0x100dada0
100dad79:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100dad80:	ff 37                	push   DWORD PTR [edi]
100dad82:	8b cb                	mov    ecx,ebx
100dad84:	e8 57 a1 00 00       	call   0x100e4ee0
100dad89:	85 c0                	test   eax,eax
100dad8b:	75 30                	jne    0x100dadbd
100dad8d:	46                   	inc    esi
100dad8e:	83 c7 04             	add    edi,0x4
100dad91:	83 fe 03             	cmp    esi,0x3
100dad94:	7e ea                	jle    0x100dad80
100dad96:	5f                   	pop    edi
100dad97:	5e                   	pop    esi
100dad98:	5b                   	pop    ebx
100dad99:	5d                   	pop    ebp
100dad9a:	c2 0c 00             	ret    0xc
