
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f2a50 <.text+0xf1a50>:
100f2a50:	55                   	push   ebp
100f2a51:	8b ec                	mov    ebp,esp
100f2a53:	83 e4 f8             	and    esp,0xfffffff8
100f2a56:	51                   	push   ecx
100f2a57:	53                   	push   ebx
100f2a58:	56                   	push   esi
100f2a59:	8b f1                	mov    esi,ecx
100f2a5b:	57                   	push   edi
100f2a5c:	8b 5e 04             	mov    ebx,DWORD PTR [esi+0x4]
100f2a5f:	f3 0f 10 83 60 02 00 	movss  xmm0,DWORD PTR [ebx+0x260]
100f2a66:	00 
100f2a67:	0f 2e 05 b8 1e 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1eb8
100f2a6e:	9f                   	lahf
100f2a6f:	f6 c4 44             	test   ah,0x44
100f2a72:	0f 8b 7e 02 00 00    	jnp    0x100f2cf6
100f2a78:	80 be 00 05 00 00 01 	cmp    BYTE PTR [esi+0x500],0x1
100f2a7f:	75 16                	jne    0x100f2a97
100f2a81:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f2a86:	f3 0f 10 86 fc 04 00 	movss  xmm0,DWORD PTR [esi+0x4fc]
100f2a8d:	00 
100f2a8e:	0f 2f 00             	comiss xmm0,DWORD PTR [eax]
100f2a91:	0f 87 5f 02 00 00    	ja     0x100f2cf6
100f2a97:	80 be 98 03 00 00 00 	cmp    BYTE PTR [esi+0x398],0x0
100f2a9e:	74 1c                	je     0x100f2abc
100f2aa0:	c7 83 30 01 00 00 ff 	mov    DWORD PTR [ebx+0x130],0xffffffff
100f2aa7:	ff ff ff 
100f2aaa:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f2aad:	c7 80 2c 01 00 00 ff 	mov    DWORD PTR [eax+0x12c],0xffffffff
100f2ab4:	ff ff ff 
100f2ab7:	e9 28 02 00 00       	jmp    0x100f2ce4
100f2abc:	f3 0f 10 4b 24       	movss  xmm1,DWORD PTR [ebx+0x24]
100f2ac1:	f3 0f 10 43 20       	movss  xmm0,DWORD PTR [ebx+0x20]
100f2ac6:	f3 0f 59 c0          	mulss  xmm0,xmm0
100f2aca:	f3 0f 59 c9          	mulss  xmm1,xmm1
100f2ace:	f3 0f 58 c1          	addss  xmm0,xmm1
100f2ad2:	0f 57 c9             	xorps  xmm1,xmm1
100f2ad5:	0f 5a c0             	cvtps2pd xmm0,xmm0
100f2ad8:	66 0f 2e c8          	ucomisd xmm1,xmm0
100f2adc:	77 06                	ja     0x100f2ae4
100f2ade:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100f2ae2:	eb 05                	jmp    0x100f2ae9
100f2ae4:	e8 a7 93 07 00       	call   0x1016be90
100f2ae9:	f3 0f 10 8b 60 02 00 	movss  xmm1,DWORD PTR [ebx+0x260]
100f2af0:	00 
100f2af1:	83 cf ff             	or     edi,0xffffffff
100f2af4:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100f2af8:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
100f2afe:	f3 0f 10 05 80 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1380
100f2b05:	10 
100f2b06:	0f 2f c1             	comiss xmm0,xmm1
100f2b09:	77 11                	ja     0x100f2b1c
100f2b0b:	0f 2e 0d 30 b1 1b 10 	ucomiss xmm1,DWORD PTR ds:0x101bb130
100f2b12:	9f                   	lahf
100f2b13:	f6 c4 44             	test   ah,0x44
100f2b16:	0f 8a a3 01 00 00    	jp     0x100f2cbf
100f2b1c:	8d 8e 98 26 00 00    	lea    ecx,[esi+0x2698]
100f2b22:	e8 59 4c f2 ff       	call   0x10017780
100f2b27:	85 c0                	test   eax,eax
100f2b29:	0f 85 90 01 00 00    	jne    0x100f2cbf
100f2b2f:	38 86 0c 05 00 00    	cmp    BYTE PTR [esi+0x50c],al
100f2b35:	0f 85 84 01 00 00    	jne    0x100f2cbf
100f2b3b:	8b 06                	mov    eax,DWORD PTR [esi]
100f2b3d:	8b ce                	mov    ecx,esi
100f2b3f:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
100f2b45:	85 c0                	test   eax,eax
100f2b47:	0f 84 72 01 00 00    	je     0x100f2cbf
100f2b4d:	f3 0f 10 44 24 0c    	movss  xmm0,DWORD PTR [esp+0xc]
100f2b53:	0f 2f 05 e0 1e 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1ee0
100f2b5a:	76 76                	jbe    0x100f2bd2
100f2b5c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f2b5f:	8b 88 a8 01 00 00    	mov    ecx,DWORD PTR [eax+0x1a8]
100f2b65:	f7 c1 00 00 04 00    	test   ecx,0x40000
100f2b6b:	74 13                	je     0x100f2b80
100f2b6d:	68 b0 b2 1d 10       	push   0x101db2b0
100f2b72:	8b ce                	mov    ecx,esi
100f2b74:	e8 37 be f1 ff       	call   0x1000e9b0
100f2b79:	68 b0 b2 1d 10       	push   0x101db2b0
100f2b7e:	eb 73                	jmp    0x100f2bf3
100f2b80:	8b 86 2c 25 00 00    	mov    eax,DWORD PTR [esi+0x252c]
100f2b86:	f7 c1 00 00 08 00    	test   ecx,0x80000
100f2b8c:	8b ce                	mov    ecx,esi
100f2b8e:	74 21                	je     0x100f2bb1
100f2b90:	85 c0                	test   eax,eax
100f2b92:	74 0c                	je     0x100f2ba0
100f2b94:	e8 07 d8 fe ff       	call   0x100e03a0
100f2b99:	68 b8 b2 1d 10       	push   0x101db2b8
100f2b9e:	eb 53                	jmp    0x100f2bf3
100f2ba0:	68 b8 b2 1d 10       	push   0x101db2b8
100f2ba5:	e8 06 be f1 ff       	call   0x1000e9b0
100f2baa:	68 b8 b2 1d 10       	push   0x101db2b8
100f2baf:	eb 42                	jmp    0x100f2bf3
100f2bb1:	85 c0                	test   eax,eax
100f2bb3:	74 0c                	je     0x100f2bc1
100f2bb5:	e8 e6 d7 fe ff       	call   0x100e03a0
100f2bba:	68 c0 b7 1b 10       	push   0x101bb7c0
100f2bbf:	eb 32                	jmp    0x100f2bf3
100f2bc1:	68 c0 b7 1b 10       	push   0x101bb7c0
100f2bc6:	e8 e5 bd f1 ff       	call   0x1000e9b0
100f2bcb:	68 c0 b7 1b 10       	push   0x101bb7c0
100f2bd0:	eb 21                	jmp    0x100f2bf3
100f2bd2:	83 be 2c 25 00 00 00 	cmp    DWORD PTR [esi+0x252c],0x0
100f2bd9:	8b ce                	mov    ecx,esi
100f2bdb:	74 07                	je     0x100f2be4
100f2bdd:	e8 be d7 fe ff       	call   0x100e03a0
100f2be2:	eb 0a                	jmp    0x100f2bee
100f2be4:	68 10 a6 1a 10       	push   0x101aa610
100f2be9:	e8 c2 bd f1 ff       	call   0x1000e9b0
100f2bee:	68 10 a6 1a 10       	push   0x101aa610
100f2bf3:	8b ce                	mov    ecx,esi
100f2bf5:	8b f8                	mov    edi,eax
100f2bf7:	e8 b4 bd f1 ff       	call   0x1000e9b0
100f2bfc:	8b c8                	mov    ecx,eax
100f2bfe:	85 ff                	test   edi,edi
100f2c00:	78 27                	js     0x100f2c29
100f2c02:	85 c9                	test   ecx,ecx
100f2c04:	78 23                	js     0x100f2c29
100f2c06:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100f2c09:	39 8a 30 01 00 00    	cmp    DWORD PTR [edx+0x130],ecx
100f2c0f:	74 18                	je     0x100f2c29
100f2c11:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f2c16:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100f2c1a:	0f 2f 86 04 05 00 00 	comiss xmm0,DWORD PTR [esi+0x504]
100f2c21:	76 06                	jbe    0x100f2c29
100f2c23:	89 8a 30 01 00 00    	mov    DWORD PTR [edx+0x130],ecx
100f2c29:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f2c2c:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x4000
100f2c33:	40 00 00 
100f2c36:	0f 84 83 00 00 00    	je     0x100f2cbf
100f2c3c:	f3 0f 10 44 24 0c    	movss  xmm0,DWORD PTR [esp+0xc]
100f2c42:	8b ce                	mov    ecx,esi
100f2c44:	0f 2f 05 e0 1e 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1ee0
100f2c4b:	8b 86 2c 25 00 00    	mov    eax,DWORD PTR [esi+0x252c]
100f2c51:	76 21                	jbe    0x100f2c74
100f2c53:	85 c0                	test   eax,eax
100f2c55:	74 0c                	je     0x100f2c63
100f2c57:	e8 44 d7 fe ff       	call   0x100e03a0
100f2c5c:	68 c0 b2 1d 10       	push   0x101db2c0
100f2c61:	eb 2b                	jmp    0x100f2c8e
100f2c63:	68 c0 b2 1d 10       	push   0x101db2c0
100f2c68:	e8 43 bd f1 ff       	call   0x1000e9b0
100f2c6d:	68 c0 b2 1d 10       	push   0x101db2c0
100f2c72:	eb 1a                	jmp    0x100f2c8e
100f2c74:	85 c0                	test   eax,eax
100f2c76:	74 07                	je     0x100f2c7f
100f2c78:	e8 23 d7 fe ff       	call   0x100e03a0
100f2c7d:	eb 0a                	jmp    0x100f2c89
100f2c7f:	68 d0 b2 1d 10       	push   0x101db2d0
100f2c84:	e8 27 bd f1 ff       	call   0x1000e9b0
100f2c89:	68 d0 b2 1d 10       	push   0x101db2d0
100f2c8e:	8b ce                	mov    ecx,esi
100f2c90:	8b f8                	mov    edi,eax
100f2c92:	e8 19 bd f1 ff       	call   0x1000e9b0
100f2c97:	85 c0                	test   eax,eax
100f2c99:	78 24                	js     0x100f2cbf
100f2c9b:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100f2c9e:	39 82 30 01 00 00    	cmp    DWORD PTR [edx+0x130],eax
100f2ca4:	74 19                	je     0x100f2cbf
100f2ca6:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100f2cac:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
100f2cb0:	0f 2f 86 04 05 00 00 	comiss xmm0,DWORD PTR [esi+0x504]
100f2cb7:	76 06                	jbe    0x100f2cbf
100f2cb9:	89 82 30 01 00 00    	mov    DWORD PTR [edx+0x130],eax
100f2cbf:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100f2cc2:	39 b9 2c 01 00 00    	cmp    DWORD PTR [ecx+0x12c],edi
100f2cc8:	74 2c                	je     0x100f2cf6
100f2cca:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f2ccf:	f3 0f 10 86 f4 04 00 	movss  xmm0,DWORD PTR [esi+0x4f4]
100f2cd6:	00 
100f2cd7:	0f 2f 00             	comiss xmm0,DWORD PTR [eax]
100f2cda:	77 1a                	ja     0x100f2cf6
100f2cdc:	89 b9 2c 01 00 00    	mov    DWORD PTR [ecx+0x12c],edi
100f2ce2:	8b ce                	mov    ecx,esi
100f2ce4:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f2ce7:	c7 80 34 01 00 00 00 	mov    DWORD PTR [eax+0x134],0x0
100f2cee:	00 00 00 
100f2cf1:	e8 ea bc f1 ff       	call   0x1000e9e0
100f2cf6:	5f                   	pop    edi
100f2cf7:	5e                   	pop    esi
100f2cf8:	5b                   	pop    ebx
100f2cf9:	8b e5                	mov    esp,ebp
100f2cfb:	5d                   	pop    ebp
100f2cfc:	c2 04 00             	ret    0x4
