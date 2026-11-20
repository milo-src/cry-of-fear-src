
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e4c30 <.text+0xe3c30>:
100e4c30:	56                   	push   esi
100e4c31:	57                   	push   edi
100e4c32:	8b f9                	mov    edi,ecx
100e4c34:	83 bf c4 00 00 00 04 	cmp    DWORD PTR [edi+0xc4],0x4
100e4c3b:	0f 84 11 01 00 00    	je     0x100e4d52
100e4c41:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e4c44:	be 74 cb 1d 10       	mov    esi,0x101dcb74
100e4c49:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e4c4f:	ff 15 84 31 22 10    	call   DWORD PTR ds:0x10223184
100e4c55:	83 c4 04             	add    esp,0x4
100e4c58:	8a 08                	mov    cl,BYTE PTR [eax]
100e4c5a:	3a 0e                	cmp    cl,BYTE PTR [esi]
100e4c5c:	75 1a                	jne    0x100e4c78
100e4c5e:	84 c9                	test   cl,cl
100e4c60:	74 12                	je     0x100e4c74
100e4c62:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100e4c65:	3a 4e 01             	cmp    cl,BYTE PTR [esi+0x1]
100e4c68:	75 0e                	jne    0x100e4c78
100e4c6a:	83 c0 02             	add    eax,0x2
100e4c6d:	83 c6 02             	add    esi,0x2
100e4c70:	84 c9                	test   cl,cl
100e4c72:	75 e4                	jne    0x100e4c58
100e4c74:	33 c0                	xor    eax,eax
100e4c76:	eb 05                	jmp    0x100e4c7d
100e4c78:	1b c0                	sbb    eax,eax
100e4c7a:	83 c8 01             	or     eax,0x1
100e4c7d:	85 c0                	test   eax,eax
100e4c7f:	0f 84 cd 00 00 00    	je     0x100e4d52
100e4c85:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e4c88:	be 88 cb 1d 10       	mov    esi,0x101dcb88
100e4c8d:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e4c93:	ff 15 84 31 22 10    	call   DWORD PTR ds:0x10223184
100e4c99:	83 c4 04             	add    esp,0x4
100e4c9c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100e4ca0:	8a 08                	mov    cl,BYTE PTR [eax]
100e4ca2:	3a 0e                	cmp    cl,BYTE PTR [esi]
100e4ca4:	75 1a                	jne    0x100e4cc0
100e4ca6:	84 c9                	test   cl,cl
100e4ca8:	74 12                	je     0x100e4cbc
100e4caa:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100e4cad:	3a 4e 01             	cmp    cl,BYTE PTR [esi+0x1]
100e4cb0:	75 0e                	jne    0x100e4cc0
100e4cb2:	83 c0 02             	add    eax,0x2
100e4cb5:	83 c6 02             	add    esi,0x2
100e4cb8:	84 c9                	test   cl,cl
100e4cba:	75 e4                	jne    0x100e4ca0
100e4cbc:	33 c0                	xor    eax,eax
100e4cbe:	eb 05                	jmp    0x100e4cc5
100e4cc0:	1b c0                	sbb    eax,eax
100e4cc2:	83 c8 01             	or     eax,0x1
100e4cc5:	85 c0                	test   eax,eax
100e4cc7:	0f 84 85 00 00 00    	je     0x100e4d52
100e4ccd:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e4cd0:	be 9c cb 1d 10       	mov    esi,0x101dcb9c
100e4cd5:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e4cdb:	ff 15 84 31 22 10    	call   DWORD PTR ds:0x10223184
100e4ce1:	83 c4 04             	add    esp,0x4
100e4ce4:	8a 08                	mov    cl,BYTE PTR [eax]
100e4ce6:	3a 0e                	cmp    cl,BYTE PTR [esi]
100e4ce8:	75 1a                	jne    0x100e4d04
100e4cea:	84 c9                	test   cl,cl
100e4cec:	74 12                	je     0x100e4d00
100e4cee:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100e4cf1:	3a 4e 01             	cmp    cl,BYTE PTR [esi+0x1]
100e4cf4:	75 0e                	jne    0x100e4d04
100e4cf6:	83 c0 02             	add    eax,0x2
100e4cf9:	83 c6 02             	add    esi,0x2
100e4cfc:	84 c9                	test   cl,cl
100e4cfe:	75 e4                	jne    0x100e4ce4
100e4d00:	33 c0                	xor    eax,eax
100e4d02:	eb 05                	jmp    0x100e4d09
100e4d04:	1b c0                	sbb    eax,eax
100e4d06:	83 c8 01             	or     eax,0x1
100e4d09:	85 c0                	test   eax,eax
100e4d0b:	74 45                	je     0x100e4d52
100e4d0d:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e4d10:	be b0 cb 1d 10       	mov    esi,0x101dcbb0
100e4d15:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e4d1b:	ff 15 84 31 22 10    	call   DWORD PTR ds:0x10223184
100e4d21:	83 c4 04             	add    esp,0x4
100e4d24:	8a 08                	mov    cl,BYTE PTR [eax]
100e4d26:	3a 0e                	cmp    cl,BYTE PTR [esi]
100e4d28:	75 1a                	jne    0x100e4d44
100e4d2a:	84 c9                	test   cl,cl
100e4d2c:	74 12                	je     0x100e4d40
100e4d2e:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100e4d31:	3a 4e 01             	cmp    cl,BYTE PTR [esi+0x1]
100e4d34:	75 0e                	jne    0x100e4d44
100e4d36:	83 c0 02             	add    eax,0x2
100e4d39:	83 c6 02             	add    esi,0x2
100e4d3c:	84 c9                	test   cl,cl
100e4d3e:	75 e4                	jne    0x100e4d24
100e4d40:	33 c0                	xor    eax,eax
100e4d42:	eb 05                	jmp    0x100e4d49
100e4d44:	1b c0                	sbb    eax,eax
100e4d46:	83 c8 01             	or     eax,0x1
100e4d49:	85 c0                	test   eax,eax
100e4d4b:	74 05                	je     0x100e4d52
100e4d4d:	5f                   	pop    edi
100e4d4e:	33 c0                	xor    eax,eax
100e4d50:	5e                   	pop    esi
100e4d51:	c3                   	ret
100e4d52:	5f                   	pop    edi
100e4d53:	b8 01 00 00 00       	mov    eax,0x1
100e4d58:	5e                   	pop    esi
100e4d59:	c3                   	ret
