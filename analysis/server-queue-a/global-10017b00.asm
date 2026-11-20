
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10017b00 <.text+0x16b00>:
10017b00:	55                   	push   ebp
10017b01:	8b ec                	mov    ebp,esp
10017b03:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10017b08:	56                   	push   esi
10017b09:	57                   	push   edi
10017b0a:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
10017b0d:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10017b13:	03 c7                	add    eax,edi
10017b15:	50                   	push   eax
10017b16:	68 f4 60 1a 10       	push   0x101a60f4
10017b1b:	6a 00                	push   0x0
10017b1d:	e8 5e 09 10 00       	call   0x10118480
10017b22:	8b f0                	mov    esi,eax
10017b24:	83 c4 0c             	add    esp,0xc
10017b27:	85 f6                	test   esi,esi
10017b29:	74 66                	je     0x10017b91
10017b2b:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
10017b31:	53                   	push   ebx
10017b32:	8b 99 98 00 00 00    	mov    ebx,DWORD PTR [ecx+0x98]
10017b38:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10017b3b:	8b 01                	mov    eax,DWORD PTR [ecx]
10017b3d:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10017b40:	03 c3                	add    eax,ebx
10017b42:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
10017b45:	03 cb                	add    ecx,ebx
10017b47:	8a 10                	mov    dl,BYTE PTR [eax]
10017b49:	3a 11                	cmp    dl,BYTE PTR [ecx]
10017b4b:	75 1a                	jne    0x10017b67
10017b4d:	84 d2                	test   dl,dl
10017b4f:	74 12                	je     0x10017b63
10017b51:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10017b54:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10017b57:	75 0e                	jne    0x10017b67
10017b59:	83 c0 02             	add    eax,0x2
10017b5c:	83 c1 02             	add    ecx,0x2
10017b5f:	84 d2                	test   dl,dl
10017b61:	75 e4                	jne    0x10017b47
10017b63:	33 c0                	xor    eax,eax
10017b65:	eb 05                	jmp    0x10017b6c
10017b67:	1b c0                	sbb    eax,eax
10017b69:	83 c8 01             	or     eax,0x1
10017b6c:	85 c0                	test   eax,eax
10017b6e:	74 1e                	je     0x10017b8e
10017b70:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10017b73:	8d 04 3b             	lea    eax,[ebx+edi*1]
10017b76:	50                   	push   eax
10017b77:	68 00 61 1a 10       	push   0x101a6100
10017b7c:	6a 01                	push   0x1
10017b7e:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10017b84:	83 c4 10             	add    esp,0x10
10017b87:	33 c0                	xor    eax,eax
10017b89:	5b                   	pop    ebx
10017b8a:	5f                   	pop    edi
10017b8b:	5e                   	pop    esi
10017b8c:	5d                   	pop    ebp
10017b8d:	c3                   	ret
10017b8e:	8b c6                	mov    eax,esi
10017b90:	5b                   	pop    ebx
10017b91:	5f                   	pop    edi
10017b92:	5e                   	pop    esi
10017b93:	5d                   	pop    ebp
10017b94:	c3                   	ret
