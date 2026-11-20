
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f0ba0 <.text+0xefba0>:
100f0ba0:	55                   	push   ebp
100f0ba1:	8b ec                	mov    ebp,esp
100f0ba3:	83 ec 0c             	sub    esp,0xc
100f0ba6:	53                   	push   ebx
100f0ba7:	8b d9                	mov    ebx,ecx
100f0ba9:	56                   	push   esi
100f0baa:	57                   	push   edi
100f0bab:	83 bb 2c 25 00 00 00 	cmp    DWORD PTR [ebx+0x252c],0x0
100f0bb2:	74 1d                	je     0x100f0bd1
100f0bb4:	e8 87 08 00 00       	call   0x100f1440
100f0bb9:	8b 8b 2c 25 00 00    	mov    ecx,DWORD PTR [ebx+0x252c]
100f0bbf:	8b 01                	mov    eax,DWORD PTR [ecx]
100f0bc1:	ff 90 4c 01 00 00    	call   DWORD PTR [eax+0x14c]
100f0bc7:	c7 83 2c 25 00 00 00 	mov    DWORD PTR [ebx+0x252c],0x0
100f0bce:	00 00 00 
100f0bd1:	8d 83 14 25 00 00    	lea    eax,[ebx+0x2514]
100f0bd7:	c7 83 34 25 00 00 00 	mov    DWORD PTR [ebx+0x2534],0x0
100f0bde:	00 00 00 
100f0be1:	b9 06 00 00 00       	mov    ecx,0x6
100f0be6:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
100f0be9:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100f0bec:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100f0bef:	90                   	nop
100f0bf0:	8b 30                	mov    esi,DWORD PTR [eax]
100f0bf2:	89 b3 2c 25 00 00    	mov    DWORD PTR [ebx+0x252c],esi
100f0bf8:	85 f6                	test   esi,esi
100f0bfa:	0f 84 d5 01 00 00    	je     0x100f0dd5
100f0c00:	8d 8b 4c 20 00 00    	lea    ecx,[ebx+0x204c]
100f0c06:	8b fe                	mov    edi,esi
100f0c08:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
100f0c0f:	00 
100f0c10:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f0c13:	8b 35 88 31 22 10    	mov    esi,DWORD PTR ds:0x10223188
100f0c19:	8b 00                	mov    eax,DWORD PTR [eax]
100f0c1b:	03 86 98 00 00 00    	add    eax,DWORD PTR [esi+0x98]
100f0c21:	8a 11                	mov    dl,BYTE PTR [ecx]
100f0c23:	3a 10                	cmp    dl,BYTE PTR [eax]
100f0c25:	75 1a                	jne    0x100f0c41
100f0c27:	84 d2                	test   dl,dl
100f0c29:	74 12                	je     0x100f0c3d
100f0c2b:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100f0c2e:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100f0c31:	75 0e                	jne    0x100f0c41
100f0c33:	83 c1 02             	add    ecx,0x2
100f0c36:	83 c0 02             	add    eax,0x2
100f0c39:	84 d2                	test   dl,dl
100f0c3b:	75 e4                	jne    0x100f0c21
100f0c3d:	33 c0                	xor    eax,eax
100f0c3f:	eb 05                	jmp    0x100f0c46
100f0c41:	1b c0                	sbb    eax,eax
100f0c43:	83 c8 01             	or     eax,0x1
100f0c46:	85 c0                	test   eax,eax
100f0c48:	75 4e                	jne    0x100f0c98
100f0c4a:	88 83 4c 20 00 00    	mov    BYTE PTR [ebx+0x204c],al
100f0c50:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f0c53:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f0c59:	6a 00                	push   0x0
100f0c5b:	ff 35 34 66 22 10    	push   DWORD PTR ds:0x10226634
100f0c61:	6a 01                	push   0x1
100f0c63:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f0c69:	6a 01                	push   0x1
100f0c6b:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f0c71:	6a 00                	push   0x0
100f0c73:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f0c79:	83 c4 18             	add    esp,0x18
100f0c7c:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f0c82:	c7 83 dc 03 00 00 00 	mov    DWORD PTR [ebx+0x3dc],0x0
100f0c89:	00 00 00 
100f0c8c:	8b bb 2c 25 00 00    	mov    edi,DWORD PTR [ebx+0x252c]
100f0c92:	8b 35 88 31 22 10    	mov    esi,DWORD PTR ds:0x10223188
100f0c98:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f0c9b:	8d 8b cc 20 00 00    	lea    ecx,[ebx+0x20cc]
100f0ca1:	8b 00                	mov    eax,DWORD PTR [eax]
100f0ca3:	03 86 98 00 00 00    	add    eax,DWORD PTR [esi+0x98]
100f0ca9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100f0cb0:	8a 11                	mov    dl,BYTE PTR [ecx]
100f0cb2:	3a 10                	cmp    dl,BYTE PTR [eax]
100f0cb4:	75 1a                	jne    0x100f0cd0
100f0cb6:	84 d2                	test   dl,dl
100f0cb8:	74 12                	je     0x100f0ccc
100f0cba:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100f0cbd:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100f0cc0:	75 0e                	jne    0x100f0cd0
100f0cc2:	83 c1 02             	add    ecx,0x2
100f0cc5:	83 c0 02             	add    eax,0x2
100f0cc8:	84 d2                	test   dl,dl
100f0cca:	75 e4                	jne    0x100f0cb0
100f0ccc:	33 c0                	xor    eax,eax
100f0cce:	eb 05                	jmp    0x100f0cd5
100f0cd0:	1b c0                	sbb    eax,eax
100f0cd2:	83 c8 01             	or     eax,0x1
100f0cd5:	85 c0                	test   eax,eax
100f0cd7:	75 4e                	jne    0x100f0d27
100f0cd9:	88 83 cc 20 00 00    	mov    BYTE PTR [ebx+0x20cc],al
100f0cdf:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f0ce2:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f0ce8:	6a 00                	push   0x0
100f0cea:	ff 35 34 66 22 10    	push   DWORD PTR ds:0x10226634
100f0cf0:	6a 01                	push   0x1
100f0cf2:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f0cf8:	6a 02                	push   0x2
100f0cfa:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f0d00:	6a 00                	push   0x0
100f0d02:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f0d08:	83 c4 18             	add    esp,0x18
100f0d0b:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f0d11:	c7 83 e0 03 00 00 00 	mov    DWORD PTR [ebx+0x3e0],0x0
100f0d18:	00 00 00 
100f0d1b:	8b bb 2c 25 00 00    	mov    edi,DWORD PTR [ebx+0x252c]
100f0d21:	8b 35 88 31 22 10    	mov    esi,DWORD PTR ds:0x10223188
100f0d27:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f0d2a:	8d 8b 4c 21 00 00    	lea    ecx,[ebx+0x214c]
100f0d30:	8b 00                	mov    eax,DWORD PTR [eax]
100f0d32:	03 86 98 00 00 00    	add    eax,DWORD PTR [esi+0x98]
100f0d38:	8a 11                	mov    dl,BYTE PTR [ecx]
100f0d3a:	3a 10                	cmp    dl,BYTE PTR [eax]
100f0d3c:	75 1a                	jne    0x100f0d58
100f0d3e:	84 d2                	test   dl,dl
100f0d40:	74 12                	je     0x100f0d54
100f0d42:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100f0d45:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100f0d48:	75 0e                	jne    0x100f0d58
100f0d4a:	83 c1 02             	add    ecx,0x2
100f0d4d:	83 c0 02             	add    eax,0x2
100f0d50:	84 d2                	test   dl,dl
100f0d52:	75 e4                	jne    0x100f0d38
100f0d54:	33 c0                	xor    eax,eax
100f0d56:	eb 05                	jmp    0x100f0d5d
100f0d58:	1b c0                	sbb    eax,eax
100f0d5a:	83 c8 01             	or     eax,0x1
100f0d5d:	85 c0                	test   eax,eax
100f0d5f:	75 48                	jne    0x100f0da9
100f0d61:	88 83 4c 21 00 00    	mov    BYTE PTR [ebx+0x214c],al
100f0d67:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f0d6a:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f0d70:	6a 00                	push   0x0
100f0d72:	ff 35 34 66 22 10    	push   DWORD PTR ds:0x10226634
100f0d78:	6a 01                	push   0x1
100f0d7a:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f0d80:	6a 03                	push   0x3
100f0d82:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f0d88:	6a 00                	push   0x0
100f0d8a:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f0d90:	83 c4 18             	add    esp,0x18
100f0d93:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f0d99:	c7 83 e4 03 00 00 00 	mov    DWORD PTR [ebx+0x3e4],0x0
100f0da0:	00 00 00 
100f0da3:	8b bb 2c 25 00 00    	mov    edi,DWORD PTR [ebx+0x252c]
100f0da9:	8b 07                	mov    eax,DWORD PTR [edi]
100f0dab:	8b cf                	mov    ecx,edi
100f0dad:	8b b7 64 01 00 00    	mov    esi,DWORD PTR [edi+0x164]
100f0db3:	ff 90 5c 01 00 00    	call   DWORD PTR [eax+0x15c]
100f0db9:	89 b3 2c 25 00 00    	mov    DWORD PTR [ebx+0x252c],esi
100f0dbf:	8b fe                	mov    edi,esi
100f0dc1:	8d 8b 4c 20 00 00    	lea    ecx,[ebx+0x204c]
100f0dc7:	85 f6                	test   esi,esi
100f0dc9:	0f 85 41 fe ff ff    	jne    0x100f0c10
100f0dcf:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100f0dd2:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
100f0dd5:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
100f0ddb:	83 c0 04             	add    eax,0x4
100f0dde:	83 e9 01             	sub    ecx,0x1
100f0de1:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100f0de4:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100f0de7:	0f 85 03 fe ff ff    	jne    0x100f0bf0
100f0ded:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
100f0df1:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f0df4:	c7 83 2c 25 00 00 00 	mov    DWORD PTR [ebx+0x252c],0x0
100f0dfb:	00 00 00 
100f0dfe:	c7 80 bc 00 00 00 00 	mov    DWORD PTR [eax+0xbc],0x0
100f0e05:	00 00 00 
100f0e08:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f0e0b:	c7 80 c0 00 00 00 00 	mov    DWORD PTR [eax+0xc0],0x0
100f0e12:	00 00 00 
100f0e15:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f0e18:	74 0c                	je     0x100f0e26
100f0e1a:	c7 80 6c 01 00 00 00 	mov    DWORD PTR [eax+0x16c],0x0
100f0e21:	00 00 00 
100f0e24:	eb 0a                	jmp    0x100f0e30
100f0e26:	81 a0 6c 01 00 00 00 	and    DWORD PTR [eax+0x16c],0x80000000
100f0e2d:	00 00 80 
100f0e30:	33 f6                	xor    esi,esi
100f0e32:	8d bb 40 25 00 00    	lea    edi,[ebx+0x2540]
100f0e38:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
100f0e3f:	00 
100f0e40:	c7 07 00 00 00 00    	mov    DWORD PTR [edi],0x0
100f0e46:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f0e49:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f0e4f:	6a 00                	push   0x0
100f0e51:	ff 35 e8 64 22 10    	push   DWORD PTR ds:0x102264e8
100f0e57:	6a 01                	push   0x1
100f0e59:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f0e5f:	56                   	push   esi
100f0e60:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f0e66:	ff 37                	push   DWORD PTR [edi]
100f0e68:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100f0e6e:	83 c4 18             	add    esp,0x18
100f0e71:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f0e77:	46                   	inc    esi
100f0e78:	8d 7f 04             	lea    edi,[edi+0x4]
100f0e7b:	83 fe 20             	cmp    esi,0x20
100f0e7e:	7c c0                	jl     0x100f0e40
100f0e80:	bf 06 00 00 00       	mov    edi,0x6
100f0e85:	8d 83 14 25 00 00    	lea    eax,[ebx+0x2514]
100f0e8b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100f0e90:	8b 30                	mov    esi,DWORD PTR [eax]
100f0e92:	85 f6                	test   esi,esi
100f0e94:	74 6b                	je     0x100f0f01
100f0e96:	66 66 0f 1f 84 00 00 	data16 nop WORD PTR [eax+eax*1+0x0]
100f0e9d:	00 00 00 
100f0ea0:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f0ea3:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f0ea9:	6a 00                	push   0x0
100f0eab:	ff 35 b8 65 22 10    	push   DWORD PTR ds:0x102265b8
100f0eb1:	6a 01                	push   0x1
100f0eb3:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f0eb9:	ff b6 68 01 00 00    	push   DWORD PTR [esi+0x168]
100f0ebf:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f0ec5:	6b 86 68 01 00 00 2c 	imul   eax,DWORD PTR [esi+0x168],0x2c
100f0ecc:	ff b0 a4 18 23 10    	push   DWORD PTR [eax+0x102318a4]
100f0ed2:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f0ed8:	8b 86 dc 01 00 00    	mov    eax,DWORD PTR [esi+0x1dc]
100f0ede:	ff b4 83 40 25 00 00 	push   DWORD PTR [ebx+eax*4+0x2540]
100f0ee5:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100f0eeb:	83 c4 1c             	add    esp,0x1c
100f0eee:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f0ef4:	8b b6 64 01 00 00    	mov    esi,DWORD PTR [esi+0x164]
100f0efa:	85 f6                	test   esi,esi
100f0efc:	75 a2                	jne    0x100f0ea0
100f0efe:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
100f0f01:	83 c0 04             	add    eax,0x4
100f0f04:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
100f0f07:	83 ef 01             	sub    edi,0x1
100f0f0a:	75 84                	jne    0x100f0e90
100f0f0c:	8b 03                	mov    eax,DWORD PTR [ebx]
100f0f0e:	8b cb                	mov    ecx,ebx
100f0f10:	ff 90 58 02 00 00    	call   DWORD PTR [eax+0x258]
100f0f16:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f0f19:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f0f1f:	57                   	push   edi
100f0f20:	ff 35 cc 64 22 10    	push   DWORD PTR ds:0x102264cc
100f0f26:	6a 01                	push   0x1
100f0f28:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f0f2e:	57                   	push   edi
100f0f2f:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f0f35:	57                   	push   edi
100f0f36:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f0f3c:	57                   	push   edi
100f0f3d:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f0f43:	83 c4 1c             	add    esp,0x1c
100f0f46:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f0f4c:	5f                   	pop    edi
100f0f4d:	5e                   	pop    esi
100f0f4e:	5b                   	pop    ebx
100f0f4f:	8b e5                	mov    esp,ebp
100f0f51:	5d                   	pop    ebp
100f0f52:	c2 04 00             	ret    0x4
