
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100b0b50 <.text+0xafb50>:
100b0b50:	55                   	push   ebp
100b0b51:	8b ec                	mov    ebp,esp
100b0b53:	83 ec 24             	sub    esp,0x24
100b0b56:	56                   	push   esi
100b0b57:	8b f1                	mov    esi,ecx
100b0b59:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b0b5c:	83 b8 b8 00 00 00 00 	cmp    DWORD PTR [eax+0xb8],0x0
100b0b63:	f3 0f 10 80 f4 00 00 	movss  xmm0,DWORD PTR [eax+0xf4]
100b0b6a:	00 
100b0b6b:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100b0b70:	f3 0f 10 80 f8 00 00 	movss  xmm0,DWORD PTR [eax+0xf8]
100b0b77:	00 
100b0b78:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
100b0b7d:	f3 0f 10 80 fc 00 00 	movss  xmm0,DWORD PTR [eax+0xfc]
100b0b84:	00 
100b0b85:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
100b0b8a:	75 7f                	jne    0x100b0c0b
100b0b8c:	8b 88 d0 01 00 00    	mov    ecx,DWORD PTR [eax+0x1d0]
100b0b92:	85 c9                	test   ecx,ecx
100b0b94:	74 20                	je     0x100b0bb6
100b0b96:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100b0b9b:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100b0ba1:	03 c1                	add    eax,ecx
100b0ba3:	50                   	push   eax
100b0ba4:	68 d0 e5 1c 10       	push   0x101ce5d0
100b0ba9:	6a 04                	push   0x4
100b0bab:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100b0bb1:	83 c4 0c             	add    esp,0xc
100b0bb4:	eb 3c                	jmp    0x100b0bf2
100b0bb6:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
100b0bbb:	83 ec 18             	sub    esp,0x18
100b0bbe:	0f 5a c0             	cvtps2pd xmm0,xmm0
100b0bc1:	f2 0f 11 44 24 10    	movsd  QWORD PTR [esp+0x10],xmm0
100b0bc7:	f3 0f 10 40 0c       	movss  xmm0,DWORD PTR [eax+0xc]
100b0bcc:	0f 5a c0             	cvtps2pd xmm0,xmm0
100b0bcf:	f2 0f 11 44 24 08    	movsd  QWORD PTR [esp+0x8],xmm0
100b0bd5:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
100b0bda:	0f 5a c0             	cvtps2pd xmm0,xmm0
100b0bdd:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
100b0be2:	68 00 e6 1c 10       	push   0x101ce600
100b0be7:	6a 04                	push   0x4
100b0be9:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100b0bef:	83 c4 20             	add    esp,0x20
100b0bf2:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100b0bf7:	b9 64 84 1a 10       	mov    ecx,0x101a8464
100b0bfc:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
100b0c02:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b0c05:	89 88 b8 00 00 00    	mov    DWORD PTR [eax+0xb8],ecx
100b0c0b:	8b 06                	mov    eax,DWORD PTR [esi]
100b0c0d:	8b ce                	mov    ecx,esi
100b0c0f:	57                   	push   edi
100b0c10:	ff 50 30             	call   DWORD PTR [eax+0x30]
100b0c13:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100b0c16:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100b0c1b:	8b 8a b8 00 00 00    	mov    ecx,DWORD PTR [edx+0xb8]
100b0c21:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100b0c27:	51                   	push   ecx
100b0c28:	ff b2 0c 02 00 00    	push   DWORD PTR [edx+0x20c]
100b0c2e:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
100b0c34:	f3 0f 10 5d f4       	movss  xmm3,DWORD PTR [ebp-0xc]
100b0c39:	83 c4 08             	add    esp,0x8
100b0c3c:	0f 2e 1d 34 2f 22 10 	ucomiss xmm3,DWORD PTR ds:0x10222f34
100b0c43:	f3 0f 10 05 d8 1d 1a 	movss  xmm0,DWORD PTR ds:0x101a1dd8
100b0c4a:	10 
100b0c4b:	f3 0f 10 55 f8       	movss  xmm2,DWORD PTR [ebp-0x8]
100b0c50:	f3 0f 10 65 fc       	movss  xmm4,DWORD PTR [ebp-0x4]
100b0c55:	9f                   	lahf
100b0c56:	f6 c4 44             	test   ah,0x44
100b0c59:	0f 8a f7 00 00 00    	jp     0x100b0d56
100b0c5f:	0f 2e 15 38 2f 22 10 	ucomiss xmm2,DWORD PTR ds:0x10222f38
100b0c66:	9f                   	lahf
100b0c67:	f6 c4 44             	test   ah,0x44
100b0c6a:	0f 8a e6 00 00 00    	jp     0x100b0d56
100b0c70:	0f 2e 25 3c 2f 22 10 	ucomiss xmm4,DWORD PTR ds:0x10222f3c
100b0c77:	9f                   	lahf
100b0c78:	f6 c4 44             	test   ah,0x44
100b0c7b:	0f 8a d5 00 00 00    	jp     0x100b0d56
100b0c81:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
100b0c84:	f6 87 a4 01 00 00 08 	test   BYTE PTR [edi+0x1a4],0x8
100b0c8b:	0f 85 90 00 00 00    	jne    0x100b0d21
100b0c91:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100b0c96:	b9 64 84 1a 10       	mov    ecx,0x101a8464
100b0c9b:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100b0ca1:	03 87 b8 00 00 00    	add    eax,DWORD PTR [edi+0xb8]
100b0ca7:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
100b0caa:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100b0cb0:	8a 10                	mov    dl,BYTE PTR [eax]
100b0cb2:	3a 11                	cmp    dl,BYTE PTR [ecx]
100b0cb4:	75 1a                	jne    0x100b0cd0
100b0cb6:	84 d2                	test   dl,dl
100b0cb8:	74 12                	je     0x100b0ccc
100b0cba:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100b0cbd:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100b0cc0:	75 0e                	jne    0x100b0cd0
100b0cc2:	83 c0 02             	add    eax,0x2
100b0cc5:	83 c1 02             	add    ecx,0x2
100b0cc8:	84 d2                	test   dl,dl
100b0cca:	75 e4                	jne    0x100b0cb0
100b0ccc:	33 c0                	xor    eax,eax
100b0cce:	eb 05                	jmp    0x100b0cd5
100b0cd0:	1b c0                	sbb    eax,eax
100b0cd2:	83 c8 01             	or     eax,0x1
100b0cd5:	85 c0                	test   eax,eax
100b0cd7:	74 48                	je     0x100b0d21
100b0cd9:	68 3c e6 1c 10       	push   0x101ce63c
100b0cde:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
100b0ce1:	e8 ba 9e f5 ff       	call   0x1000aba0
100b0ce6:	83 c4 08             	add    esp,0x8
100b0ce9:	85 c0                	test   eax,eax
100b0ceb:	75 34                	jne    0x100b0d21
100b0ced:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
100b0cf0:	8d 45 dc             	lea    eax,[ebp-0x24]
100b0cf3:	50                   	push   eax
100b0cf4:	8d 45 e8             	lea    eax,[ebp-0x18]
100b0cf7:	c7 45 dc 00 00 40 41 	mov    DWORD PTR [ebp-0x24],0x41400000
100b0cfe:	50                   	push   eax
100b0cff:	c7 45 e0 00 00 40 41 	mov    DWORD PTR [ebp-0x20],0x41400000
100b0d06:	c7 45 e4 00 00 90 42 	mov    DWORD PTR [ebp-0x1c],0x42900000
100b0d0d:	c7 45 e8 00 00 40 c1 	mov    DWORD PTR [ebp-0x18],0xc1400000
100b0d14:	c7 45 ec 00 00 40 c1 	mov    DWORD PTR [ebp-0x14],0xc1400000
100b0d1b:	57                   	push   edi
100b0d1c:	e9 94 00 00 00       	jmp    0x100b0db5
100b0d21:	8d 45 dc             	lea    eax,[ebp-0x24]
100b0d24:	c7 45 dc 00 00 80 41 	mov    DWORD PTR [ebp-0x24],0x41800000
100b0d2b:	50                   	push   eax
100b0d2c:	8d 45 e8             	lea    eax,[ebp-0x18]
100b0d2f:	c7 45 e0 00 00 80 41 	mov    DWORD PTR [ebp-0x20],0x41800000
100b0d36:	50                   	push   eax
100b0d37:	c7 45 e4 00 00 10 42 	mov    DWORD PTR [ebp-0x1c],0x42100000
100b0d3e:	c7 45 e8 00 00 80 c1 	mov    DWORD PTR [ebp-0x18],0xc1800000
100b0d45:	c7 45 ec 00 00 80 c1 	mov    DWORD PTR [ebp-0x14],0xc1800000
100b0d4c:	c7 45 f0 00 00 10 c2 	mov    DWORD PTR [ebp-0x10],0xc2100000
100b0d53:	57                   	push   edi
100b0d54:	eb 5f                	jmp    0x100b0db5
100b0d56:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b0d59:	0f 28 cc             	movaps xmm1,xmm4
100b0d5c:	f3 0f 59 d8          	mulss  xmm3,xmm0
100b0d60:	f3 0f 59 d0          	mulss  xmm2,xmm0
100b0d64:	f3 0f 59 c8          	mulss  xmm1,xmm0
100b0d68:	f3 0f 10 05 e0 13 1a 	movss  xmm0,DWORD PTR ds:0x101a13e0
100b0d6f:	10 
100b0d70:	f3 0f 11 5d e8       	movss  DWORD PTR [ebp-0x18],xmm3
100b0d75:	0f 57 d8             	xorps  xmm3,xmm0
100b0d78:	f3 0f 11 55 ec       	movss  DWORD PTR [ebp-0x14],xmm2
100b0d7d:	0f 57 d0             	xorps  xmm2,xmm0
100b0d80:	f3 0f 11 4d f0       	movss  DWORD PTR [ebp-0x10],xmm1
100b0d85:	0f 57 c8             	xorps  xmm1,xmm0
100b0d88:	f3 0f 11 5d dc       	movss  DWORD PTR [ebp-0x24],xmm3
100b0d8d:	f3 0f 11 55 e0       	movss  DWORD PTR [ebp-0x20],xmm2
100b0d92:	f3 0f 11 4d e4       	movss  DWORD PTR [ebp-0x1c],xmm1
100b0d97:	f6 80 a4 01 00 00 08 	test   BYTE PTR [eax+0x1a4],0x8
100b0d9e:	75 0c                	jne    0x100b0dac
100b0da0:	c7 45 e4 00 00 00 00 	mov    DWORD PTR [ebp-0x1c],0x0
100b0da7:	f3 0f 11 65 f0       	movss  DWORD PTR [ebp-0x10],xmm4
100b0dac:	8d 4d e8             	lea    ecx,[ebp-0x18]
100b0daf:	51                   	push   ecx
100b0db0:	8d 4d dc             	lea    ecx,[ebp-0x24]
100b0db3:	51                   	push   ecx
100b0db4:	50                   	push   eax
100b0db5:	e8 76 92 06 00       	call   0x1011a030
100b0dba:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b0dbd:	83 c4 0c             	add    esp,0xc
100b0dc0:	c7 80 0c 01 00 00 03 	mov    DWORD PTR [eax+0x10c],0x3
100b0dc7:	00 00 00 
100b0dca:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b0dcd:	5f                   	pop    edi
100b0dce:	c7 80 08 01 00 00 04 	mov    DWORD PTR [eax+0x108],0x4
100b0dd5:	00 00 00 
100b0dd8:	83 be 1c 03 00 00 00 	cmp    DWORD PTR [esi+0x31c],0x0
100b0ddf:	75 0a                	jne    0x100b0deb
100b0de1:	c7 86 1c 03 00 00 f7 	mov    DWORD PTR [esi+0x31c],0xf7
100b0de8:	00 00 00 
100b0deb:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100b0dee:	0f 57 c9             	xorps  xmm1,xmm1
100b0df1:	f3 0f 10 81 64 01 00 	movss  xmm0,DWORD PTR [ecx+0x164]
100b0df8:	00 
100b0df9:	0f 2e c1             	ucomiss xmm0,xmm1
100b0dfc:	9f                   	lahf
100b0dfd:	f6 c4 44             	test   ah,0x44
100b0e00:	7a 0a                	jp     0x100b0e0c
100b0e02:	c7 81 64 01 00 00 00 	mov    DWORD PTR [ecx+0x164],0x41000000
100b0e09:	00 00 41 
100b0e0c:	8b 06                	mov    eax,DWORD PTR [esi]
100b0e0e:	8b ce                	mov    ecx,esi
100b0e10:	c7 86 08 02 00 00 00 	mov    DWORD PTR [esi+0x208],0x3f000000
100b0e17:	00 00 3f 
100b0e1a:	c7 86 24 02 00 00 00 	mov    DWORD PTR [esi+0x224],0x0
100b0e21:	00 00 00 
100b0e24:	ff 90 3c 01 00 00    	call   DWORD PTR [eax+0x13c]
100b0e2a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b0e2d:	8b 88 a4 01 00 00    	mov    ecx,DWORD PTR [eax+0x1a4]
100b0e33:	f6 c1 04             	test   cl,0x4
100b0e36:	74 0f                	je     0x100b0e47
100b0e38:	c7 80 0c 01 00 00 00 	mov    DWORD PTR [eax+0x10c],0x0
100b0e3f:	00 00 00 
100b0e42:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b0e45:	eb 05                	jmp    0x100b0e4c
100b0e47:	f6 c1 20             	test   cl,0x20
100b0e4a:	74 0a                	je     0x100b0e56
100b0e4c:	c7 80 70 01 00 00 00 	mov    DWORD PTR [eax+0x170],0x0
100b0e53:	00 00 00 
100b0e56:	6a 08                	push   0x8
100b0e58:	6a 00                	push   0x0
100b0e5a:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100b0e60:	6a 08                	push   0x8
100b0e62:	6a 00                	push   0x0
100b0e64:	89 86 6c 03 00 00    	mov    DWORD PTR [esi+0x36c],eax
100b0e6a:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100b0e70:	83 c4 10             	add    esp,0x10
100b0e73:	89 86 70 03 00 00    	mov    DWORD PTR [esi+0x370],eax
100b0e79:	83 be 68 03 00 00 00 	cmp    DWORD PTR [esi+0x368],0x0
100b0e80:	74 1e                	je     0x100b0ea0
100b0e82:	ff b6 6c 03 00 00    	push   DWORD PTR [esi+0x36c]
100b0e88:	8b ce                	mov    ecx,esi
100b0e8a:	6a 01                	push   0x1
100b0e8c:	e8 af dc f5 ff       	call   0x1000eb40
100b0e91:	ff b6 70 03 00 00    	push   DWORD PTR [esi+0x370]
100b0e97:	8b ce                	mov    ecx,esi
100b0e99:	6a 02                	push   0x2
100b0e9b:	e8 a0 dc f5 ff       	call   0x1000eb40
100b0ea0:	5e                   	pop    esi
100b0ea1:	8b e5                	mov    esp,ebp
100b0ea3:	5d                   	pop    ebp
100b0ea4:	c3                   	ret
