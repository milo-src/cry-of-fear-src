
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e4d60 <.text+0xe3d60>:
100e4d60:	55                   	push   ebp
100e4d61:	8b ec                	mov    ebp,esp
100e4d63:	83 ec 08             	sub    esp,0x8
100e4d66:	53                   	push   ebx
100e4d67:	56                   	push   esi
100e4d68:	8b f1                	mov    esi,ecx
100e4d6a:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100e4d70:	57                   	push   edi
100e4d71:	85 c9                	test   ecx,ecx
100e4d73:	74 29                	je     0x100e4d9e
100e4d75:	8b 01                	mov    eax,DWORD PTR [ecx]
100e4d77:	ff 50 20             	call   DWORD PTR [eax+0x20]
100e4d7a:	85 c0                	test   eax,eax
100e4d7c:	74 20                	je     0x100e4d9e
100e4d7e:	8b 86 c4 00 00 00    	mov    eax,DWORD PTR [esi+0xc4]
100e4d84:	85 c0                	test   eax,eax
100e4d86:	74 6b                	je     0x100e4df3
100e4d88:	83 f8 03             	cmp    eax,0x3
100e4d8b:	74 66                	je     0x100e4df3
100e4d8d:	83 f8 04             	cmp    eax,0x4
100e4d90:	74 61                	je     0x100e4df3
100e4d92:	5f                   	pop    edi
100e4d93:	5e                   	pop    esi
100e4d94:	b8 01 00 00 00       	mov    eax,0x1
100e4d99:	5b                   	pop    ebx
100e4d9a:	8b e5                	mov    esp,ebp
100e4d9c:	5d                   	pop    ebp
100e4d9d:	c3                   	ret
100e4d9e:	8b 1d ac 11 1a 10    	mov    ebx,DWORD PTR ds:0x101a11ac
100e4da4:	ff d3                	call   ebx
100e4da6:	85 c0                	test   eax,eax
100e4da8:	74 49                	je     0x100e4df3
100e4daa:	ff d3                	call   ebx
100e4dac:	8b c8                	mov    ecx,eax
100e4dae:	8b 10                	mov    edx,DWORD PTR [eax]
100e4db0:	ff 52 2c             	call   DWORD PTR [edx+0x2c]
100e4db3:	8b f8                	mov    edi,eax
100e4db5:	ff d3                	call   ebx
100e4db7:	8b c8                	mov    ecx,eax
100e4db9:	8b 10                	mov    edx,DWORD PTR [eax]
100e4dbb:	ff 52 2c             	call   DWORD PTR [edx+0x2c]
100e4dbe:	85 c0                	test   eax,eax
100e4dc0:	7e 31                	jle    0x100e4df3
100e4dc2:	33 f6                	xor    esi,esi
100e4dc4:	85 ff                	test   edi,edi
100e4dc6:	7e 2b                	jle    0x100e4df3
100e4dc8:	ff d3                	call   ebx
100e4dca:	56                   	push   esi
100e4dcb:	8d 4d f8             	lea    ecx,[ebp-0x8]
100e4dce:	51                   	push   ecx
100e4dcf:	8b 10                	mov    edx,DWORD PTR [eax]
100e4dd1:	8b c8                	mov    ecx,eax
100e4dd3:	ff 52 30             	call   DWORD PTR [edx+0x30]
100e4dd6:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100e4dd9:	25 00 00 f0 00       	and    eax,0xf00000
100e4dde:	3d 00 00 70 00       	cmp    eax,0x700000
100e4de3:	75 09                	jne    0x100e4dee
100e4de5:	81 7d f8 ca d6 29 00 	cmp    DWORD PTR [ebp-0x8],0x29d6ca
100e4dec:	74 a4                	je     0x100e4d92
100e4dee:	46                   	inc    esi
100e4def:	3b f7                	cmp    esi,edi
100e4df1:	7c d5                	jl     0x100e4dc8
100e4df3:	5f                   	pop    edi
100e4df4:	5e                   	pop    esi
100e4df5:	33 c0                	xor    eax,eax
100e4df7:	5b                   	pop    ebx
100e4df8:	8b e5                	mov    esp,ebp
100e4dfa:	5d                   	pop    ebp
100e4dfb:	c3                   	ret
