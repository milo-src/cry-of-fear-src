
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f1a50 <.text+0xf0a50>:
100f1a50:	55                   	push   ebp
100f1a51:	8b ec                	mov    ebp,esp
100f1a53:	83 ec 08             	sub    esp,0x8
100f1a56:	53                   	push   ebx
100f1a57:	8b d9                	mov    ebx,ecx
100f1a59:	80 bb e8 1e 00 00 00 	cmp    BYTE PTR [ebx+0x1ee8],0x0
100f1a60:	0f 85 ab 01 00 00    	jne    0x100f1c11
100f1a66:	e8 65 34 ff ff       	call   0x100e4ed0
100f1a6b:	85 c0                	test   eax,eax
100f1a6d:	0f 85 9e 01 00 00    	jne    0x100f1c11
100f1a73:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100f1a76:	85 c0                	test   eax,eax
100f1a78:	0f 84 93 01 00 00    	je     0x100f1c11
100f1a7e:	f3 0f 10 83 e4 1e 00 	movss  xmm0,DWORD PTR [ebx+0x1ee4]
100f1a85:	00 
100f1a86:	57                   	push   edi
100f1a87:	8b 3d 88 31 22 10    	mov    edi,DWORD PTR ds:0x10223188
100f1a8d:	f3 0f 10 0f          	movss  xmm1,DWORD PTR [edi]
100f1a91:	0f 2f c1             	comiss xmm0,xmm1
100f1a94:	0f 87 76 01 00 00    	ja     0x100f1c10
100f1a9a:	8b 8b 2c 25 00 00    	mov    ecx,DWORD PTR [ebx+0x252c]
100f1aa0:	85 c9                	test   ecx,ecx
100f1aa2:	74 33                	je     0x100f1ad7
100f1aa4:	f3 0f 10 81 cc 01 00 	movss  xmm0,DWORD PTR [ecx+0x1cc]
100f1aab:	00 
100f1aac:	0f 2f c1             	comiss xmm0,xmm1
100f1aaf:	0f 87 5b 01 00 00    	ja     0x100f1c10
100f1ab5:	f3 0f 10 81 d0 01 00 	movss  xmm0,DWORD PTR [ecx+0x1d0]
100f1abc:	00 
100f1abd:	0f 2f c1             	comiss xmm0,xmm1
100f1ac0:	0f 87 4a 01 00 00    	ja     0x100f1c10
100f1ac6:	f3 0f 10 81 d4 01 00 	movss  xmm0,DWORD PTR [ecx+0x1d4]
100f1acd:	00 
100f1ace:	0f 2f c1             	comiss xmm0,xmm1
100f1ad1:	0f 87 39 01 00 00    	ja     0x100f1c10
100f1ad7:	f3 0f 10 83 08 03 00 	movss  xmm0,DWORD PTR [ebx+0x308]
100f1ade:	00 
100f1adf:	0f 2f c1             	comiss xmm0,xmm1
100f1ae2:	0f 87 28 01 00 00    	ja     0x100f1c10
100f1ae8:	56                   	push   esi
100f1ae9:	8b 73 04             	mov    esi,DWORD PTR [ebx+0x4]
100f1aec:	83 be c4 01 00 00 03 	cmp    DWORD PTR [esi+0x1c4],0x3
100f1af3:	7c 38                	jl     0x100f1b2d
100f1af5:	b9 e4 9a 1a 10       	mov    ecx,0x101a9ae4
100f1afa:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100f1b00:	8a 10                	mov    dl,BYTE PTR [eax]
100f1b02:	3a 11                	cmp    dl,BYTE PTR [ecx]
100f1b04:	75 1a                	jne    0x100f1b20
100f1b06:	84 d2                	test   dl,dl
100f1b08:	74 12                	je     0x100f1b1c
100f1b0a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100f1b0d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100f1b10:	75 0e                	jne    0x100f1b20
100f1b12:	83 c0 02             	add    eax,0x2
100f1b15:	83 c1 02             	add    ecx,0x2
100f1b18:	84 d2                	test   dl,dl
100f1b1a:	75 e4                	jne    0x100f1b00
100f1b1c:	33 c0                	xor    eax,eax
100f1b1e:	eb 05                	jmp    0x100f1b25
100f1b20:	1b c0                	sbb    eax,eax
100f1b22:	83 c8 01             	or     eax,0x1
100f1b25:	85 c0                	test   eax,eax
100f1b27:	0f 85 e2 00 00 00    	jne    0x100f1c0f
100f1b2d:	f3 0f 10 86 60 02 00 	movss  xmm0,DWORD PTR [esi+0x260]
100f1b34:	00 
100f1b35:	0f 2e 05 e0 1e 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1ee0
100f1b3c:	9f                   	lahf
100f1b3d:	f6 c4 44             	test   ah,0x44
100f1b40:	0f 8b c9 00 00 00    	jnp    0x100f1c0f
100f1b46:	33 f6                	xor    esi,esi
100f1b48:	8d 93 14 25 00 00    	lea    edx,[ebx+0x2514]
100f1b4e:	33 c9                	xor    ecx,ecx
100f1b50:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
100f1b53:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
100f1b56:	8b c6                	mov    eax,esi
100f1b58:	8b 32                	mov    esi,DWORD PTR [edx]
100f1b5a:	85 f6                	test   esi,esi
100f1b5c:	74 53                	je     0x100f1bb1
100f1b5e:	8b bf 98 00 00 00    	mov    edi,DWORD PTR [edi+0x98]
100f1b64:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f1b67:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100f1b6a:	8b 00                	mov    eax,DWORD PTR [eax]
100f1b6c:	03 c7                	add    eax,edi
100f1b6e:	66 90                	xchg   ax,ax
100f1b70:	8a 10                	mov    dl,BYTE PTR [eax]
100f1b72:	3a 11                	cmp    dl,BYTE PTR [ecx]
100f1b74:	75 1a                	jne    0x100f1b90
100f1b76:	84 d2                	test   dl,dl
100f1b78:	74 12                	je     0x100f1b8c
100f1b7a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100f1b7d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100f1b80:	75 0e                	jne    0x100f1b90
100f1b82:	83 c0 02             	add    eax,0x2
100f1b85:	83 c1 02             	add    ecx,0x2
100f1b88:	84 d2                	test   dl,dl
100f1b8a:	75 e4                	jne    0x100f1b70
100f1b8c:	33 c0                	xor    eax,eax
100f1b8e:	eb 05                	jmp    0x100f1b95
100f1b90:	1b c0                	sbb    eax,eax
100f1b92:	83 c8 01             	or     eax,0x1
100f1b95:	85 c0                	test   eax,eax
100f1b97:	74 31                	je     0x100f1bca
100f1b99:	8b b6 64 01 00 00    	mov    esi,DWORD PTR [esi+0x164]
100f1b9f:	85 f6                	test   esi,esi
100f1ba1:	75 c1                	jne    0x100f1b64
100f1ba3:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100f1ba6:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
100f1ba9:	8b 3d 88 31 22 10    	mov    edi,DWORD PTR ds:0x10223188
100f1baf:	eb 06                	jmp    0x100f1bb7
100f1bb1:	8b f0                	mov    esi,eax
100f1bb3:	85 c0                	test   eax,eax
100f1bb5:	75 13                	jne    0x100f1bca
100f1bb7:	41                   	inc    ecx
100f1bb8:	83 c2 04             	add    edx,0x4
100f1bbb:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
100f1bbe:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
100f1bc1:	83 f9 06             	cmp    ecx,0x6
100f1bc4:	7c 90                	jl     0x100f1b56
100f1bc6:	85 f6                	test   esi,esi
100f1bc8:	74 45                	je     0x100f1c0f
100f1bca:	3b b3 2c 25 00 00    	cmp    esi,DWORD PTR [ebx+0x252c]
100f1bd0:	74 3d                	je     0x100f1c0f
100f1bd2:	8b cb                	mov    ecx,ebx
100f1bd4:	e8 67 f8 ff ff       	call   0x100f1440
100f1bd9:	8b 8b 2c 25 00 00    	mov    ecx,DWORD PTR [ebx+0x252c]
100f1bdf:	85 c9                	test   ecx,ecx
100f1be1:	74 1f                	je     0x100f1c02
100f1be3:	80 b9 78 01 00 00 00 	cmp    BYTE PTR [ecx+0x178],0x0
100f1bea:	74 0e                	je     0x100f1bfa
100f1bec:	8b 01                	mov    eax,DWORD PTR [ecx]
100f1bee:	ff 90 30 01 00 00    	call   DWORD PTR [eax+0x130]
100f1bf4:	8b 8b 2c 25 00 00    	mov    ecx,DWORD PTR [ebx+0x252c]
100f1bfa:	8b 01                	mov    eax,DWORD PTR [ecx]
100f1bfc:	ff 90 4c 01 00 00    	call   DWORD PTR [eax+0x14c]
100f1c02:	c6 83 f9 1e 00 00 01 	mov    BYTE PTR [ebx+0x1ef9],0x1
100f1c09:	89 b3 38 25 00 00    	mov    DWORD PTR [ebx+0x2538],esi
100f1c0f:	5e                   	pop    esi
100f1c10:	5f                   	pop    edi
100f1c11:	5b                   	pop    ebx
100f1c12:	8b e5                	mov    esp,ebp
100f1c14:	5d                   	pop    ebp
100f1c15:	c2 04 00             	ret    0x4
