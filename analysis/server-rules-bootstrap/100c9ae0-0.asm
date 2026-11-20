
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c9ae0 <.text+0xc8ae0>:
100c9ae0:	55                   	push   ebp
100c9ae1:	8b ec                	mov    ebp,esp
100c9ae3:	81 ec 9c 00 00 00    	sub    esp,0x9c
100c9ae9:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100c9aee:	33 c5                	xor    eax,ebp
100c9af0:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100c9af3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c9af8:	53                   	push   ebx
100c9af9:	8b d9                	mov    ebx,ecx
100c9afb:	56                   	push   esi
100c9afc:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100c9b00:	57                   	push   edi
100c9b01:	0f 2f 83 a0 00 00 00 	comiss xmm0,DWORD PTR [ebx+0xa0]
100c9b08:	89 9d 70 ff ff ff    	mov    DWORD PTR [ebp-0x90],ebx
100c9b0e:	0f 86 d2 00 00 00    	jbe    0x100c9be6
100c9b14:	f3 0f 58 05 80 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1380
100c9b1b:	10 
100c9b1c:	bf 01 00 00 00       	mov    edi,0x1
100c9b21:	f3 0f 11 83 a0 00 00 	movss  DWORD PTR [ebx+0xa0],xmm0
100c9b28:	00 
100c9b29:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c9b2e:	39 b8 90 00 00 00    	cmp    DWORD PTR [eax+0x90],edi
100c9b34:	0f 8c ac 00 00 00    	jl     0x100c9be6
100c9b3a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100c9b40:	57                   	push   edi
100c9b41:	e8 3a fb 04 00       	call   0x10119680
100c9b46:	8b f0                	mov    esi,eax
100c9b48:	83 c4 04             	add    esp,0x4
100c9b4b:	85 f6                	test   esi,esi
100c9b4d:	0f 84 81 00 00 00    	je     0x100c9bd4
100c9b53:	8b ce                	mov    ecx,esi
100c9b55:	e8 d6 b0 01 00       	call   0x100e4c30
100c9b5a:	85 c0                	test   eax,eax
100c9b5c:	74 0f                	je     0x100c9b6d
100c9b5e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c9b61:	c7 80 6c 02 00 00 00 	mov    DWORD PTR [eax+0x26c],0x3f800000
100c9b68:	00 80 3f 
100c9b6b:	eb 24                	jmp    0x100c9b91
100c9b6d:	8b ce                	mov    ecx,esi
100c9b6f:	e8 ec b1 01 00       	call   0x100e4d60
100c9b74:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100c9b77:	85 c0                	test   eax,eax
100c9b79:	74 0c                	je     0x100c9b87
100c9b7b:	c7 81 6c 02 00 00 00 	mov    DWORD PTR [ecx+0x26c],0x40000000
100c9b82:	00 00 40 
100c9b85:	eb 0a                	jmp    0x100c9b91
100c9b87:	c7 81 6c 02 00 00 00 	mov    DWORD PTR [ecx+0x26c],0x0
100c9b8e:	00 00 00 
100c9b91:	6a 00                	push   0x0
100c9b93:	6a 00                	push   0x0
100c9b95:	ff 35 c8 66 22 10    	push   DWORD PTR ds:0x102266c8
100c9b9b:	6a 02                	push   0x2
100c9b9d:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100c9ba3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c9ba6:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100c9bac:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
100c9bb2:	50                   	push   eax
100c9bb3:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100c9bb9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c9bbc:	f3 0f 2c 80 6c 02 00 	cvttss2si eax,DWORD PTR [eax+0x26c]
100c9bc3:	00 
100c9bc4:	50                   	push   eax
100c9bc5:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100c9bcb:	83 c4 1c             	add    esp,0x1c
100c9bce:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100c9bd4:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c9bd9:	47                   	inc    edi
100c9bda:	3b b8 90 00 00 00    	cmp    edi,DWORD PTR [eax+0x90]
100c9be0:	0f 8e 5a ff ff ff    	jle    0x100c9b40
100c9be6:	80 bb a8 00 00 00 00 	cmp    BYTE PTR [ebx+0xa8],0x0
100c9bed:	0f 84 5a 05 00 00    	je     0x100ca14d
100c9bf3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c9bf8:	b9 01 00 00 00       	mov    ecx,0x1
100c9bfd:	32 d2                	xor    dl,dl
100c9bff:	89 8d 78 ff ff ff    	mov    DWORD PTR [ebp-0x88],ecx
100c9c05:	88 95 77 ff ff ff    	mov    BYTE PTR [ebp-0x89],dl
100c9c0b:	8b f9                	mov    edi,ecx
100c9c0d:	39 88 90 00 00 00    	cmp    DWORD PTR [eax+0x90],ecx
100c9c13:	0f 8c 94 01 00 00    	jl     0x100c9dad
100c9c19:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100c9c20:	57                   	push   edi
100c9c21:	e8 5a fa 04 00       	call   0x10119680
100c9c26:	8b f0                	mov    esi,eax
100c9c28:	83 c4 04             	add    esp,0x4
100c9c2b:	85 f6                	test   esi,esi
100c9c2d:	0f 84 5c 01 00 00    	je     0x100c9d8f
100c9c33:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100c9c39:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
100c9c3d:	0f 2f 83 a4 00 00 00 	comiss xmm0,DWORD PTR [ebx+0xa4]
100c9c44:	76 7c                	jbe    0x100c9cc2
100c9c46:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c9c49:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100c9c4f:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
100c9c55:	6a 00                	push   0x0
100c9c57:	6a 00                	push   0x0
100c9c59:	ff 35 b0 66 22 10    	push   DWORD PTR ds:0x102266b0
100c9c5f:	8a 9c 03 a9 00 00 00 	mov    bl,BYTE PTR [ebx+eax*1+0xa9]
100c9c66:	6a 02                	push   0x2
100c9c68:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100c9c6e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c9c71:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100c9c77:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
100c9c7d:	50                   	push   eax
100c9c7e:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100c9c84:	33 c0                	xor    eax,eax
100c9c86:	84 db                	test   bl,bl
100c9c88:	0f 95 c0             	setne  al
100c9c8b:	50                   	push   eax
100c9c8c:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100c9c92:	6a 00                	push   0x0
100c9c94:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100c9c9a:	83 c4 24             	add    esp,0x24
100c9c9d:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100c9ca3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c9ca8:	8b 9d 70 ff ff ff    	mov    ebx,DWORD PTR [ebp-0x90]
100c9cae:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100c9cb2:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
100c9cb9:	10 
100c9cba:	f3 0f 11 83 a4 00 00 	movss  DWORD PTR [ebx+0xa4],xmm0
100c9cc1:	00 
100c9cc2:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100c9cc5:	0f 57 c9             	xorps  xmm1,xmm1
100c9cc8:	f3 0f 10 81 64 02 00 	movss  xmm0,DWORD PTR [ecx+0x264]
100c9ccf:	00 
100c9cd0:	0f 2e c1             	ucomiss xmm0,xmm1
100c9cd3:	9f                   	lahf
100c9cd4:	f6 c4 44             	test   ah,0x44
100c9cd7:	0f 8a b2 00 00 00    	jp     0x100c9d8f
100c9cdd:	83 ff 20             	cmp    edi,0x20
100c9ce0:	0f 8f a9 00 00 00    	jg     0x100c9d8f
100c9ce6:	8b 86 00 25 00 00    	mov    eax,DWORD PTR [esi+0x2500]
100c9cec:	c6 85 77 ff ff ff 01 	mov    BYTE PTR [ebp-0x89],0x1
100c9cf3:	a8 08                	test   al,0x8
100c9cf5:	75 09                	jne    0x100c9d00
100c9cf7:	83 c8 08             	or     eax,0x8
100c9cfa:	89 86 00 25 00 00    	mov    DWORD PTR [esi+0x2500],eax
100c9d00:	a8 01                	test   al,0x1
100c9d02:	75 09                	jne    0x100c9d0d
100c9d04:	83 c8 01             	or     eax,0x1
100c9d07:	89 86 00 25 00 00    	mov    DWORD PTR [esi+0x2500],eax
100c9d0d:	8b 81 a8 01 00 00    	mov    eax,DWORD PTR [ecx+0x1a8]
100c9d13:	84 c0                	test   al,al
100c9d15:	78 0b                	js     0x100c9d22
100c9d17:	0d 80 00 00 00       	or     eax,0x80
100c9d1c:	89 81 a8 01 00 00    	mov    DWORD PTR [ecx+0x1a8],eax
100c9d22:	6a 00                	push   0x0
100c9d24:	8b ce                	mov    ecx,esi
100c9d26:	e8 c5 52 01 00       	call   0x100deff0
100c9d2b:	6a 05                	push   0x5
100c9d2d:	68 ff 00 00 00       	push   0xff
100c9d32:	83 ec 08             	sub    esp,0x8
100c9d35:	c7 85 64 ff ff ff 00 	mov    DWORD PTR [ebp-0x9c],0x0
100c9d3c:	00 00 00 
100c9d3f:	8d 85 64 ff ff ff    	lea    eax,[ebp-0x9c]
100c9d45:	c7 85 68 ff ff ff 00 	mov    DWORD PTR [ebp-0x98],0x0
100c9d4c:	00 00 00 
100c9d4f:	c7 85 6c ff ff ff 00 	mov    DWORD PTR [ebp-0x94],0x0
100c9d56:	00 00 00 
100c9d59:	c7 44 24 04 00 00 80 	mov    DWORD PTR [esp+0x4],0x3f800000
100c9d60:	3f 
100c9d61:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100c9d68:	50                   	push   eax
100c9d69:	56                   	push   esi
100c9d6a:	e8 91 fe 04 00       	call   0x10119c00
100c9d6f:	8b 8d 78 ff ff ff    	mov    ecx,DWORD PTR [ebp-0x88]
100c9d75:	33 c0                	xor    eax,eax
100c9d77:	83 c4 18             	add    esp,0x18
100c9d7a:	0f b6 c9             	movzx  ecx,cl
100c9d7d:	38 84 3b a9 00 00 00 	cmp    BYTE PTR [ebx+edi*1+0xa9],al
100c9d84:	0f 44 c8             	cmove  ecx,eax
100c9d87:	89 8d 78 ff ff ff    	mov    DWORD PTR [ebp-0x88],ecx
100c9d8d:	eb 06                	jmp    0x100c9d95
100c9d8f:	8b 8d 78 ff ff ff    	mov    ecx,DWORD PTR [ebp-0x88]
100c9d95:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c9d9a:	47                   	inc    edi
100c9d9b:	3b b8 90 00 00 00    	cmp    edi,DWORD PTR [eax+0x90]
100c9da1:	0f 8e 79 fe ff ff    	jle    0x100c9c20
100c9da7:	8a 95 77 ff ff ff    	mov    dl,BYTE PTR [ebp-0x89]
100c9dad:	f3 0f 10 8b d8 00 00 	movss  xmm1,DWORD PTR [ebx+0xd8]
100c9db4:	00 
100c9db5:	0f 57 c0             	xorps  xmm0,xmm0
100c9db8:	0f 2f c8             	comiss xmm1,xmm0
100c9dbb:	0f 86 50 01 00 00    	jbe    0x100c9f11
100c9dc1:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c9dc6:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100c9dca:	0f 2f c1             	comiss xmm0,xmm1
100c9dcd:	0f 86 3e 01 00 00    	jbe    0x100c9f11
100c9dd3:	6a 00                	push   0x0
100c9dd5:	6a 00                	push   0x0
100c9dd7:	c6 83 a8 00 00 00 00 	mov    BYTE PTR [ebx+0xa8],0x0
100c9dde:	ff 35 b0 66 22 10    	push   DWORD PTR ds:0x102266b0
100c9de4:	6a 02                	push   0x2
100c9de6:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100c9dec:	6a 00                	push   0x0
100c9dee:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100c9df4:	6a 00                	push   0x0
100c9df6:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100c9dfc:	6a 01                	push   0x1
100c9dfe:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100c9e04:	83 c4 1c             	add    esp,0x1c
100c9e07:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100c9e0d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c9e12:	bf 01 00 00 00       	mov    edi,0x1
100c9e17:	39 b8 90 00 00 00    	cmp    DWORD PTR [eax+0x90],edi
100c9e1d:	0f 8c 9c 00 00 00    	jl     0x100c9ebf
100c9e23:	57                   	push   edi
100c9e24:	e8 57 f8 04 00       	call   0x10119680
100c9e29:	8b f0                	mov    esi,eax
100c9e2b:	83 c4 04             	add    esp,0x4
100c9e2e:	85 f6                	test   esi,esi
100c9e30:	74 7b                	je     0x100c9ead
100c9e32:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100c9e35:	0f 57 c9             	xorps  xmm1,xmm1
100c9e38:	f3 0f 10 81 64 02 00 	movss  xmm0,DWORD PTR [ecx+0x264]
100c9e3f:	00 
100c9e40:	0f 2e c1             	ucomiss xmm0,xmm1
100c9e43:	9f                   	lahf
100c9e44:	f6 c4 44             	test   ah,0x44
100c9e47:	7a 64                	jp     0x100c9ead
100c9e49:	6a 01                	push   0x1
100c9e4b:	8b ce                	mov    ecx,esi
100c9e4d:	e8 9e 51 01 00       	call   0x100deff0
100c9e52:	6a 00                	push   0x0
100c9e54:	68 ff 00 00 00       	push   0xff
100c9e59:	83 ec 08             	sub    esp,0x8
100c9e5c:	c7 85 64 ff ff ff 00 	mov    DWORD PTR [ebp-0x9c],0x0
100c9e63:	00 00 00 
100c9e66:	8d 85 64 ff ff ff    	lea    eax,[ebp-0x9c]
100c9e6c:	c7 85 68 ff ff ff 00 	mov    DWORD PTR [ebp-0x98],0x0
100c9e73:	00 00 00 
100c9e76:	c7 85 6c ff ff ff 00 	mov    DWORD PTR [ebp-0x94],0x0
100c9e7d:	00 00 00 
100c9e80:	c7 44 24 04 00 00 80 	mov    DWORD PTR [esp+0x4],0x3f800000
100c9e87:	3f 
100c9e88:	c7 04 24 00 00 40 3f 	mov    DWORD PTR [esp],0x3f400000
100c9e8f:	50                   	push   eax
100c9e90:	56                   	push   esi
100c9e91:	e8 6a fd 04 00       	call   0x10119c00
100c9e96:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c9e99:	83 c4 18             	add    esp,0x18
100c9e9c:	83 a6 00 25 00 00 f6 	and    DWORD PTR [esi+0x2500],0xfffffff6
100c9ea3:	81 a0 a8 01 00 00 7f 	and    DWORD PTR [eax+0x1a8],0xffffff7f
100c9eaa:	ff ff ff 
100c9ead:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c9eb2:	47                   	inc    edi
100c9eb3:	3b b8 90 00 00 00    	cmp    edi,DWORD PTR [eax+0x90]
100c9eb9:	0f 8e 64 ff ff ff    	jle    0x100c9e23
100c9ebf:	68 44 62 1d 10       	push   0x101d6244
100c9ec4:	6a 00                	push   0x0
100c9ec6:	e8 95 e5 04 00       	call   0x10118460
100c9ecb:	8b f0                	mov    esi,eax
100c9ecd:	83 c4 08             	add    esp,0x8
100c9ed0:	85 f6                	test   esi,esi
100c9ed2:	0f 84 75 02 00 00    	je     0x100ca14d
100c9ed8:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
100c9edf:	00 
100c9ee0:	8b 16                	mov    edx,DWORD PTR [esi]
100c9ee2:	51                   	push   ecx
100c9ee3:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100c9eea:	8b ce                	mov    ecx,esi
100c9eec:	6a 03                	push   0x3
100c9eee:	6a 00                	push   0x0
100c9ef0:	6a 00                	push   0x0
100c9ef2:	ff 92 e8 00 00 00    	call   DWORD PTR [edx+0xe8]
100c9ef8:	68 44 62 1d 10       	push   0x101d6244
100c9efd:	56                   	push   esi
100c9efe:	e8 5d e5 04 00       	call   0x10118460
100c9f03:	8b f0                	mov    esi,eax
100c9f05:	83 c4 08             	add    esp,0x8
100c9f08:	85 f6                	test   esi,esi
100c9f0a:	75 d4                	jne    0x100c9ee0
100c9f0c:	e9 3c 02 00 00       	jmp    0x100ca14d
100c9f11:	84 d2                	test   dl,dl
100c9f13:	0f 84 0d 02 00 00    	je     0x100ca126
100c9f19:	84 c9                	test   cl,cl
100c9f1b:	0f 84 05 02 00 00    	je     0x100ca126
100c9f21:	80 bb d4 00 00 00 00 	cmp    BYTE PTR [ebx+0xd4],0x0
100c9f28:	75 23                	jne    0x100c9f4d
100c9f2a:	c7 83 d0 00 00 00 03 	mov    DWORD PTR [ebx+0xd0],0x3
100c9f31:	00 00 00 
100c9f34:	c6 83 d4 00 00 00 01 	mov    BYTE PTR [ebx+0xd4],0x1
100c9f3b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c9f40:	8b 00                	mov    eax,DWORD PTR [eax]
100c9f42:	89 83 cc 00 00 00    	mov    DWORD PTR [ebx+0xcc],eax
100c9f48:	e9 9d 00 00 00       	jmp    0x100c9fea
100c9f4d:	8b 8b d0 00 00 00    	mov    ecx,DWORD PTR [ebx+0xd0]
100c9f53:	85 c9                	test   ecx,ecx
100c9f55:	0f 88 8f 00 00 00    	js     0x100c9fea
100c9f5b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c9f60:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100c9f64:	0f 2f 83 cc 00 00 00 	comiss xmm0,DWORD PTR [ebx+0xcc]
100c9f6b:	76 7d                	jbe    0x100c9fea
100c9f6d:	6a 01                	push   0x1
100c9f6f:	6a 05                	push   0x5
100c9f71:	51                   	push   ecx
100c9f72:	68 54 62 1d 10       	push   0x101d6254
100c9f77:	e8 24 09 05 00       	call   0x1011a8a0
100c9f7c:	83 c4 08             	add    esp,0x8
100c9f7f:	50                   	push   eax
100c9f80:	6a 00                	push   0x0
100c9f82:	e8 89 f8 04 00       	call   0x10119810
100c9f87:	ff 8b d0 00 00 00    	dec    DWORD PTR [ebx+0xd0]
100c9f8d:	83 c4 10             	add    esp,0x10
100c9f90:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c9f95:	6a 64                	push   0x64
100c9f97:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100c9f9b:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
100c9fa2:	10 
100c9fa3:	6a 00                	push   0x0
100c9fa5:	83 ec 08             	sub    esp,0x8
100c9fa8:	f3 0f 11 83 cc 00 00 	movss  DWORD PTR [ebx+0xcc],xmm0
100c9faf:	00 
100c9fb0:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x0
100c9fb7:	00 
100c9fb8:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100c9fbf:	68 54 91 1a 10       	push   0x101a9154
100c9fc4:	68 34 2f 22 10       	push   0x10222f34
100c9fc9:	6a 00                	push   0x0
100c9fcb:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
100c9fd1:	83 c4 04             	add    esp,0x4
100c9fd4:	50                   	push   eax
100c9fd5:	e8 d6 e2 04 00       	call   0x101182b0
100c9fda:	83 c4 1c             	add    esp,0x1c
100c9fdd:	80 bb d4 00 00 00 00 	cmp    BYTE PTR [ebx+0xd4],0x0
100c9fe4:	0f 84 63 01 00 00    	je     0x100ca14d
100c9fea:	83 bb d0 00 00 00 00 	cmp    DWORD PTR [ebx+0xd0],0x0
100c9ff1:	0f 8d 56 01 00 00    	jge    0x100ca14d
100c9ff7:	68 44 62 1d 10       	push   0x101d6244
100c9ffc:	6a 00                	push   0x0
100c9ffe:	c6 83 a8 00 00 00 00 	mov    BYTE PTR [ebx+0xa8],0x0
100ca005:	e8 56 e4 04 00       	call   0x10118460
100ca00a:	8b f0                	mov    esi,eax
100ca00c:	83 c4 08             	add    esp,0x8
100ca00f:	85 f6                	test   esi,esi
100ca011:	74 2c                	je     0x100ca03f
100ca013:	8b 16                	mov    edx,DWORD PTR [esi]
100ca015:	51                   	push   ecx
100ca016:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100ca01d:	8b ce                	mov    ecx,esi
100ca01f:	6a 03                	push   0x3
100ca021:	6a 00                	push   0x0
100ca023:	6a 00                	push   0x0
100ca025:	ff 92 e8 00 00 00    	call   DWORD PTR [edx+0xe8]
100ca02b:	68 44 62 1d 10       	push   0x101d6244
100ca030:	56                   	push   esi
100ca031:	e8 2a e4 04 00       	call   0x10118460
100ca036:	8b f0                	mov    esi,eax
100ca038:	83 c4 08             	add    esp,0x8
100ca03b:	85 f6                	test   esi,esi
100ca03d:	75 d4                	jne    0x100ca013
100ca03f:	6a 00                	push   0x0
100ca041:	6a 00                	push   0x0
100ca043:	ff 35 b0 66 22 10    	push   DWORD PTR ds:0x102266b0
100ca049:	6a 02                	push   0x2
100ca04b:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100ca051:	6a 00                	push   0x0
100ca053:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100ca059:	6a 00                	push   0x0
100ca05b:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100ca061:	6a 01                	push   0x1
100ca063:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100ca069:	83 c4 1c             	add    esp,0x1c
100ca06c:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100ca072:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ca077:	bf 01 00 00 00       	mov    edi,0x1
100ca07c:	39 b8 90 00 00 00    	cmp    DWORD PTR [eax+0x90],edi
100ca082:	0f 8c c5 00 00 00    	jl     0x100ca14d
100ca088:	57                   	push   edi
100ca089:	e8 f2 f5 04 00       	call   0x10119680
100ca08e:	8b f0                	mov    esi,eax
100ca090:	83 c4 04             	add    esp,0x4
100ca093:	85 f6                	test   esi,esi
100ca095:	74 7b                	je     0x100ca112
100ca097:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100ca09a:	0f 57 c9             	xorps  xmm1,xmm1
100ca09d:	f3 0f 10 81 64 02 00 	movss  xmm0,DWORD PTR [ecx+0x264]
100ca0a4:	00 
100ca0a5:	0f 2e c1             	ucomiss xmm0,xmm1
100ca0a8:	9f                   	lahf
100ca0a9:	f6 c4 44             	test   ah,0x44
100ca0ac:	7a 64                	jp     0x100ca112
100ca0ae:	6a 01                	push   0x1
100ca0b0:	8b ce                	mov    ecx,esi
100ca0b2:	e8 39 4f 01 00       	call   0x100deff0
100ca0b7:	6a 00                	push   0x0
100ca0b9:	68 ff 00 00 00       	push   0xff
100ca0be:	83 ec 08             	sub    esp,0x8
100ca0c1:	c7 85 64 ff ff ff 00 	mov    DWORD PTR [ebp-0x9c],0x0
100ca0c8:	00 00 00 
100ca0cb:	8d 85 64 ff ff ff    	lea    eax,[ebp-0x9c]
100ca0d1:	c7 85 68 ff ff ff 00 	mov    DWORD PTR [ebp-0x98],0x0
100ca0d8:	00 00 00 
100ca0db:	c7 85 6c ff ff ff 00 	mov    DWORD PTR [ebp-0x94],0x0
100ca0e2:	00 00 00 
100ca0e5:	c7 44 24 04 00 00 80 	mov    DWORD PTR [esp+0x4],0x3f800000
100ca0ec:	3f 
100ca0ed:	c7 04 24 00 00 40 3f 	mov    DWORD PTR [esp],0x3f400000
100ca0f4:	50                   	push   eax
100ca0f5:	56                   	push   esi
100ca0f6:	e8 05 fb 04 00       	call   0x10119c00
100ca0fb:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ca0fe:	83 c4 18             	add    esp,0x18
100ca101:	83 a6 00 25 00 00 f6 	and    DWORD PTR [esi+0x2500],0xfffffff6
100ca108:	81 a0 a8 01 00 00 7f 	and    DWORD PTR [eax+0x1a8],0xffffff7f
100ca10f:	ff ff ff 
100ca112:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ca117:	47                   	inc    edi
100ca118:	3b b8 90 00 00 00    	cmp    edi,DWORD PTR [eax+0x90]
100ca11e:	0f 8e 64 ff ff ff    	jle    0x100ca088
100ca124:	eb 27                	jmp    0x100ca14d
100ca126:	80 bb d4 00 00 00 00 	cmp    BYTE PTR [ebx+0xd4],0x0
100ca12d:	74 1e                	je     0x100ca14d
100ca12f:	c6 83 d4 00 00 00 00 	mov    BYTE PTR [ebx+0xd4],0x0
100ca136:	c7 83 d0 00 00 00 03 	mov    DWORD PTR [ebx+0xd0],0x3
100ca13d:	00 00 00 
100ca140:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ca145:	8b 00                	mov    eax,DWORD PTR [eax]
100ca147:	89 83 cc 00 00 00    	mov    DWORD PTR [ebx+0xcc],eax
100ca14d:	8b cb                	mov    ecx,ebx
100ca14f:	e8 bc 60 fe ff       	call   0x100b0210
100ca154:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ca159:	83 ec 08             	sub    esp,0x8
100ca15c:	b9 88 37 22 10       	mov    ecx,0x10223788
100ca161:	f3 0f 10 40 04       	movss  xmm0,DWORD PTR [eax+0x4]
100ca166:	0f 5a c0             	cvtps2pd xmm0,xmm0
100ca169:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
100ca16e:	e8 6d 73 f3 ff       	call   0x100014e0
100ca173:	80 3d a2 31 22 10 00 	cmp    BYTE PTR ds:0x102231a2,0x0
100ca17a:	0f 84 57 02 00 00    	je     0x100ca3d7
100ca180:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ca185:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100ca189:	0f 2f 05 a4 31 22 10 	comiss xmm0,DWORD PTR ds:0x102231a4
100ca190:	0f 86 41 02 00 00    	jbe    0x100ca3d7
100ca196:	80 3d 77 64 22 10 00 	cmp    BYTE PTR ds:0x10226477,0x0
100ca19d:	0f 85 34 02 00 00    	jne    0x100ca3d7
100ca1a3:	83 3d 20 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f20,0x0
100ca1aa:	c6 05 a2 31 22 10 00 	mov    BYTE PTR ds:0x102231a2,0x0
100ca1b1:	c7 05 a4 31 22 10 00 	mov    DWORD PTR ds:0x102231a4,0x0
100ca1b8:	00 00 00 
100ca1bb:	0f 85 16 02 00 00    	jne    0x100ca3d7
100ca1c1:	68 6c 62 1d 10       	push   0x101d626c
100ca1c6:	6a 00                	push   0x0
100ca1c8:	e8 93 e2 04 00       	call   0x10118460
100ca1cd:	83 c4 08             	add    esp,0x8
100ca1d0:	85 c0                	test   eax,eax
100ca1d2:	0f 84 ec 00 00 00    	je     0x100ca2c4
100ca1d8:	6a 01                	push   0x1
100ca1da:	6a 00                	push   0x0
100ca1dc:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100ca1e2:	83 c4 08             	add    esp,0x8
100ca1e5:	83 f8 01             	cmp    eax,0x1
100ca1e8:	0f 85 d6 00 00 00    	jne    0x100ca2c4
100ca1ee:	83 3d 14 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f14,0x0
100ca1f5:	0f 85 c9 00 00 00    	jne    0x100ca2c4
100ca1fb:	50                   	push   eax
100ca1fc:	ff 15 68 30 22 10    	call   DWORD PTR ds:0x10223068
100ca202:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
100ca208:	83 c4 04             	add    esp,0x4
100ca20b:	33 f6                	xor    esi,esi
100ca20d:	8b f8                	mov    edi,eax
100ca20f:	8b 8a 94 00 00 00    	mov    ecx,DWORD PTR [edx+0x94]
100ca215:	83 f9 01             	cmp    ecx,0x1
100ca218:	0f 8e b9 01 00 00    	jle    0x100ca3d7
100ca21e:	49                   	dec    ecx
100ca21f:	89 8d 78 ff ff ff    	mov    DWORD PTR [ebp-0x88],ecx
100ca225:	83 3f 00             	cmp    DWORD PTR [edi],0x0
100ca228:	75 5c                	jne    0x100ca286
100ca22a:	8b 47 7c             	mov    eax,DWORD PTR [edi+0x7c]
100ca22d:	85 c0                	test   eax,eax
100ca22f:	74 55                	je     0x100ca286
100ca231:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100ca234:	b9 6c 62 1d 10       	mov    ecx,0x101d626c
100ca239:	8b 00                	mov    eax,DWORD PTR [eax]
100ca23b:	03 82 98 00 00 00    	add    eax,DWORD PTR [edx+0x98]
100ca241:	8a 10                	mov    dl,BYTE PTR [eax]
100ca243:	3a 11                	cmp    dl,BYTE PTR [ecx]
100ca245:	75 1a                	jne    0x100ca261
100ca247:	84 d2                	test   dl,dl
100ca249:	74 12                	je     0x100ca25d
100ca24b:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100ca24e:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100ca251:	75 0e                	jne    0x100ca261
100ca253:	83 c0 02             	add    eax,0x2
100ca256:	83 c1 02             	add    ecx,0x2
100ca259:	84 d2                	test   dl,dl
100ca25b:	75 e4                	jne    0x100ca241
100ca25d:	33 c0                	xor    eax,eax
100ca25f:	eb 05                	jmp    0x100ca266
100ca261:	1b c0                	sbb    eax,eax
100ca263:	83 c8 01             	or     eax,0x1
100ca266:	8b 8d 78 ff ff ff    	mov    ecx,DWORD PTR [ebp-0x88]
100ca26c:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
100ca272:	85 c0                	test   eax,eax
100ca274:	75 10                	jne    0x100ca286
100ca276:	46                   	inc    esi
100ca277:	83 fe 1e             	cmp    esi,0x1e
100ca27a:	7f 0a                	jg     0x100ca286
100ca27c:	8b 47 7c             	mov    eax,DWORD PTR [edi+0x7c]
100ca27f:	89 84 b5 7c ff ff ff 	mov    DWORD PTR [ebp+esi*4-0x84],eax
100ca286:	81 c7 2c 03 00 00    	add    edi,0x32c
100ca28c:	83 e9 01             	sub    ecx,0x1
100ca28f:	89 8d 78 ff ff ff    	mov    DWORD PTR [ebp-0x88],ecx
100ca295:	75 8e                	jne    0x100ca225
100ca297:	85 f6                	test   esi,esi
100ca299:	0f 8e 38 01 00 00    	jle    0x100ca3d7
100ca29f:	56                   	push   esi
100ca2a0:	6a 01                	push   0x1
100ca2a2:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100ca2a8:	83 c4 08             	add    esp,0x8
100ca2ab:	8b 84 85 7c ff ff ff 	mov    eax,DWORD PTR [ebp+eax*4-0x84]
100ca2b2:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100ca2b5:	c7 80 48 02 00 00 01 	mov    DWORD PTR [eax+0x248],0x1
100ca2bc:	00 00 00 
100ca2bf:	e9 13 01 00 00       	jmp    0x100ca3d7
100ca2c4:	6a 01                	push   0x1
100ca2c6:	ff 15 68 30 22 10    	call   DWORD PTR ds:0x10223068
100ca2cc:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
100ca2d2:	83 c4 04             	add    esp,0x4
100ca2d5:	33 f6                	xor    esi,esi
100ca2d7:	8b f8                	mov    edi,eax
100ca2d9:	8b 8a 94 00 00 00    	mov    ecx,DWORD PTR [edx+0x94]
100ca2df:	83 f9 01             	cmp    ecx,0x1
100ca2e2:	0f 8e ef 00 00 00    	jle    0x100ca3d7
100ca2e8:	49                   	dec    ecx
100ca2e9:	89 8d 78 ff ff ff    	mov    DWORD PTR [ebp-0x88],ecx
100ca2ef:	90                   	nop
100ca2f0:	83 3f 00             	cmp    DWORD PTR [edi],0x0
100ca2f3:	75 60                	jne    0x100ca355
100ca2f5:	8b 47 7c             	mov    eax,DWORD PTR [edi+0x7c]
100ca2f8:	85 c0                	test   eax,eax
100ca2fa:	74 59                	je     0x100ca355
100ca2fc:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100ca2ff:	b9 80 62 1d 10       	mov    ecx,0x101d6280
100ca304:	8b 00                	mov    eax,DWORD PTR [eax]
100ca306:	03 82 98 00 00 00    	add    eax,DWORD PTR [edx+0x98]
100ca30c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100ca310:	8a 10                	mov    dl,BYTE PTR [eax]
100ca312:	3a 11                	cmp    dl,BYTE PTR [ecx]
100ca314:	75 1a                	jne    0x100ca330
100ca316:	84 d2                	test   dl,dl
100ca318:	74 12                	je     0x100ca32c
100ca31a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100ca31d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100ca320:	75 0e                	jne    0x100ca330
100ca322:	83 c0 02             	add    eax,0x2
100ca325:	83 c1 02             	add    ecx,0x2
100ca328:	84 d2                	test   dl,dl
100ca32a:	75 e4                	jne    0x100ca310
100ca32c:	33 c0                	xor    eax,eax
100ca32e:	eb 05                	jmp    0x100ca335
100ca330:	1b c0                	sbb    eax,eax
100ca332:	83 c8 01             	or     eax,0x1
100ca335:	8b 8d 78 ff ff ff    	mov    ecx,DWORD PTR [ebp-0x88]
100ca33b:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
100ca341:	85 c0                	test   eax,eax
100ca343:	75 10                	jne    0x100ca355
100ca345:	46                   	inc    esi
100ca346:	83 fe 1e             	cmp    esi,0x1e
100ca349:	7f 0a                	jg     0x100ca355
100ca34b:	8b 47 7c             	mov    eax,DWORD PTR [edi+0x7c]
100ca34e:	89 84 b5 7c ff ff ff 	mov    DWORD PTR [ebp+esi*4-0x84],eax
100ca355:	81 c7 2c 03 00 00    	add    edi,0x32c
100ca35b:	83 e9 01             	sub    ecx,0x1
100ca35e:	89 8d 78 ff ff ff    	mov    DWORD PTR [ebp-0x88],ecx
100ca364:	75 8a                	jne    0x100ca2f0
100ca366:	85 f6                	test   esi,esi
100ca368:	7e 6d                	jle    0x100ca3d7
100ca36a:	56                   	push   esi
100ca36b:	6a 01                	push   0x1
100ca36d:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100ca373:	83 c4 08             	add    esp,0x8
100ca376:	8b b4 85 7c ff ff ff 	mov    esi,DWORD PTR [ebp+eax*4-0x84]
100ca37d:	85 f6                	test   esi,esi
100ca37f:	74 56                	je     0x100ca3d7
100ca381:	83 3d 14 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f14,0x0
100ca388:	74 33                	je     0x100ca3bd
100ca38a:	6a 00                	push   0x0
100ca38c:	6a 00                	push   0x0
100ca38e:	ff 35 a8 66 22 10    	push   DWORD PTR ds:0x102266a8
100ca394:	6a 02                	push   0x2
100ca396:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100ca39c:	6a 00                	push   0x0
100ca39e:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100ca3a4:	6a 00                	push   0x0
100ca3a6:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100ca3ac:	6a 01                	push   0x1
100ca3ae:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100ca3b4:	83 c4 1c             	add    esp,0x1c
100ca3b7:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100ca3bd:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100ca3c0:	6a 00                	push   0x0
100ca3c2:	8d 41 50             	lea    eax,[ecx+0x50]
100ca3c5:	50                   	push   eax
100ca3c6:	8d 41 08             	lea    eax,[ecx+0x8]
100ca3c9:	50                   	push   eax
100ca3ca:	68 e4 21 1a 10       	push   0x101a21e4
100ca3cf:	e8 7c d5 f4 ff       	call   0x10017950
100ca3d4:	83 c4 10             	add    esp,0x10
100ca3d7:	83 3d 04 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f04,0x0
100ca3de:	0f 84 9f 00 00 00    	je     0x100ca483
100ca3e4:	68 f8 b6 1c 10       	push   0x101cb6f8
100ca3e9:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
100ca3ef:	d9 9d 70 ff ff ff    	fstp   DWORD PTR [ebp-0x90]
100ca3f5:	f3 0f 2c 85 70 ff ff 	cvttss2si eax,DWORD PTR [ebp-0x90]
100ca3fc:	ff 
100ca3fd:	83 c4 04             	add    esp,0x4
100ca400:	83 f8 01             	cmp    eax,0x1
100ca403:	7d 15                	jge    0x100ca41a
100ca405:	68 f4 e9 1b 10       	push   0x101be9f4
100ca40a:	68 f8 b6 1c 10       	push   0x101cb6f8
100ca40f:	ff 15 38 30 22 10    	call   DWORD PTR ds:0x10223038
100ca415:	83 c4 08             	add    esp,0x8
100ca418:	eb 1b                	jmp    0x100ca435
100ca41a:	83 f8 78             	cmp    eax,0x78
100ca41d:	7e 16                	jle    0x100ca435
100ca41f:	6a 78                	push   0x78
100ca421:	e8 0a 07 05 00       	call   0x1011ab30
100ca426:	50                   	push   eax
100ca427:	68 f8 b6 1c 10       	push   0x101cb6f8
100ca42c:	ff 15 38 30 22 10    	call   DWORD PTR ds:0x10223038
100ca432:	83 c4 0c             	add    esp,0xc
100ca435:	f3 0f 10 05 b0 48 21 	movss  xmm0,DWORD PTR ds:0x102148b0
100ca43c:	10 
100ca43d:	f3 0f 58 05 98 31 22 	addss  xmm0,DWORD PTR ds:0x10223198
100ca444:	10 
100ca445:	f3 0f 11 83 dc 00 00 	movss  DWORD PTR [ebx+0xdc],xmm0
100ca44c:	00 
100ca44d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ca452:	f3 0f 10 08          	movss  xmm1,DWORD PTR [eax]
100ca456:	0f 2f c8             	comiss xmm1,xmm0
100ca459:	76 28                	jbe    0x100ca483
100ca45b:	83 bb e0 00 00 00 00 	cmp    DWORD PTR [ebx+0xe0],0x0
100ca462:	75 15                	jne    0x100ca479
100ca464:	f3 0f 10 05 98 31 22 	movss  xmm0,DWORD PTR ds:0x10223198
100ca46b:	10 
100ca46c:	f3 0f 58 05 20 1f 1a 	addss  xmm0,DWORD PTR ds:0x101a1f20
100ca473:	10 
100ca474:	0f 2f c8             	comiss xmm1,xmm0
100ca477:	76 0a                	jbe    0x100ca483
100ca479:	8b 03                	mov    eax,DWORD PTR [ebx]
100ca47b:	8b cb                	mov    ecx,ebx
100ca47d:	ff 90 f8 00 00 00    	call   DWORD PTR [eax+0xf8]
100ca483:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100ca486:	5f                   	pop    edi
100ca487:	5e                   	pop    esi
100ca488:	33 cd                	xor    ecx,ebp
100ca48a:	5b                   	pop    ebx
100ca48b:	e8 23 37 07 00       	call   0x1013dbb3
100ca490:	8b e5                	mov    esp,ebp
100ca492:	5d                   	pop    ebp
100ca493:	c3                   	ret
