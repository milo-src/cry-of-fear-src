
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10008a00 <.text+0x7a00>:
10008a00:	55                   	push   ebp
10008a01:	8b ec                	mov    ebp,esp
10008a03:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10008a09:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10008a0c:	57                   	push   edi
10008a0d:	33 ff                	xor    edi,edi
10008a0f:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
10008a12:	e8 59 b7 ff ff       	call   0x10004170
10008a17:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10008a1c:	89 b8 90 54 04 00    	mov    DWORD PTR [eax+0x45490],edi
10008a22:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10008a28:	0f b6 81 5a 54 04 00 	movzx  eax,BYTE PTR [ecx+0x4545a]
10008a2f:	66 0f 6e c0          	movd   xmm0,eax
10008a33:	f3 0f e6 c0          	cvtdq2pd xmm0,xmm0
10008a37:	f2 0f 59 05 e0 1d 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1de0
10008a3e:	10 
10008a3f:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10008a43:	f3 0f 11 41 10       	movss  DWORD PTR [ecx+0x10],xmm0
10008a48:	e8 b3 05 00 00       	call   0x10009000
10008a4d:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10008a53:	8d 41 2c             	lea    eax,[ecx+0x2c]
10008a56:	50                   	push   eax
10008a57:	8d 41 20             	lea    eax,[ecx+0x20]
10008a5a:	50                   	push   eax
10008a5b:	8d 41 14             	lea    eax,[ecx+0x14]
10008a5e:	50                   	push   eax
10008a5f:	8d 41 44             	lea    eax,[ecx+0x44]
10008a62:	50                   	push   eax
10008a63:	e8 78 a0 ff ff       	call   0x10002ae0
10008a68:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10008a6d:	83 c4 10             	add    esp,0x10
10008a70:	39 b8 d8 00 00 00    	cmp    DWORD PTR [eax+0xd8],edi
10008a76:	0f 85 c0 03 00 00    	jne    0x10008e3c
10008a7c:	39 b8 fc 01 00 00    	cmp    DWORD PTR [eax+0x1fc],edi
10008a82:	0f 8f b4 03 00 00    	jg     0x10008e3c
10008a88:	8b 80 dc 00 00 00    	mov    eax,DWORD PTR [eax+0xdc]
10008a8e:	83 f8 08             	cmp    eax,0x8
10008a91:	74 11                	je     0x10008aa4
10008a93:	85 c0                	test   eax,eax
10008a95:	74 0d                	je     0x10008aa4
10008a97:	e8 14 ba ff ff       	call   0x100044b0
10008a9c:	85 c0                	test   eax,eax
10008a9e:	0f 85 bd 01 00 00    	jne    0x10008c61
10008aa4:	e8 c7 b1 ff ff       	call   0x10003c70
10008aa9:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10008aaf:	8b 81 e4 00 00 00    	mov    eax,DWORD PTR [ecx+0xe4]
10008ab5:	89 81 ec 00 00 00    	mov    DWORD PTR [ecx+0xec],eax
10008abb:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10008ac1:	83 b9 e8 00 00 00 ef 	cmp    DWORD PTR [ecx+0xe8],0xffffffef
10008ac8:	7e 0e                	jle    0x10008ad8
10008aca:	8b 81 e4 00 00 00    	mov    eax,DWORD PTR [ecx+0xe4]
10008ad0:	89 81 ec 00 00 00    	mov    DWORD PTR [ecx+0xec],eax
10008ad6:	eb 06                	jmp    0x10008ade
10008ad8:	89 b9 ec 00 00 00    	mov    DWORD PTR [ecx+0xec],edi
10008ade:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10008ae3:	83 b8 e0 00 00 00 ff 	cmp    DWORD PTR [eax+0xe0],0xffffffff
10008aea:	75 19                	jne    0x10008b05
10008aec:	f3 0f 10 40 64       	movss  xmm0,DWORD PTR [eax+0x64]
10008af1:	0f 57 05 e0 13 1a 10 	xorps  xmm0,XMMWORD PTR ds:0x101a13e0
10008af8:	f3 0f 11 80 9c 00 00 	movss  DWORD PTR [eax+0x9c],xmm0
10008aff:	00 
10008b00:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10008b05:	89 3d 54 0c 22 10    	mov    DWORD PTR ds:0x10220c54,edi
10008b0b:	39 b8 d0 00 00 00    	cmp    DWORD PTR [eax+0xd0],edi
10008b11:	75 29                	jne    0x10008b3c
10008b13:	f7 80 b8 00 00 00 00 	test   DWORD PTR [eax+0xb8],0x1000000
10008b1a:	00 00 01 
10008b1d:	75 1d                	jne    0x10008b3c
10008b1f:	e8 0c de ff ff       	call   0x10006930
10008b24:	8b 0d 54 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c54
10008b2a:	8b f8                	mov    edi,eax
10008b2c:	85 ff                	test   edi,edi
10008b2e:	b8 01 00 00 00       	mov    eax,0x1
10008b33:	0f 45 c8             	cmovne ecx,eax
10008b36:	89 0d 54 0c 22 10    	mov    DWORD PTR ds:0x10220c54,ecx
10008b3c:	56                   	push   esi
10008b3d:	e8 9e 0e 00 00       	call   0x100099e0
10008b42:	e8 b9 c8 ff ff       	call   0x10005400
10008b47:	8b 35 50 0c 22 10    	mov    esi,DWORD PTR ds:0x10220c50
10008b4d:	83 be d0 00 00 00 00 	cmp    DWORD PTR [esi+0xd0],0x0
10008b54:	75 3b                	jne    0x10008b91
10008b56:	f7 86 b8 00 00 00 00 	test   DWORD PTR [esi+0xb8],0x1000000
10008b5d:	00 00 01 
10008b60:	75 2f                	jne    0x10008b91
10008b62:	85 ff                	test   edi,edi
10008b64:	74 0b                	je     0x10008b71
10008b66:	57                   	push   edi
10008b67:	e8 d4 de ff ff       	call   0x10006a40
10008b6c:	83 c4 04             	add    esp,0x4
10008b6f:	eb 1a                	jmp    0x10008b8b
10008b71:	8b 86 dc 00 00 00    	mov    eax,DWORD PTR [esi+0xdc]
10008b77:	83 f8 03             	cmp    eax,0x3
10008b7a:	74 15                	je     0x10008b91
10008b7c:	83 f8 08             	cmp    eax,0x8
10008b7f:	74 10                	je     0x10008b91
10008b81:	c7 86 dc 00 00 00 03 	mov    DWORD PTR [esi+0xdc],0x3
10008b88:	00 00 00 
10008b8b:	8b 35 50 0c 22 10    	mov    esi,DWORD PTR ds:0x10220c50
10008b91:	8b 8e dc 00 00 00    	mov    ecx,DWORD PTR [esi+0xdc]
10008b97:	83 f9 0a             	cmp    ecx,0xa
10008b9a:	0f 87 84 02 00 00    	ja     0x10008e24
10008ba0:	0f b6 81 60 8e 00 10 	movzx  eax,BYTE PTR [ecx+0x10008e60]
10008ba7:	ff 24 85 48 8e 00 10 	jmp    DWORD PTR [eax*4+0x10008e48]
10008bae:	5e                   	pop    esi
10008baf:	5f                   	pop    edi
10008bb0:	5d                   	pop    ebp
10008bb1:	e9 da e3 ff ff       	jmp    0x10006f90
10008bb6:	5e                   	pop    esi
10008bb7:	5f                   	pop    edi
10008bb8:	5d                   	pop    ebp
10008bb9:	e9 e2 e4 ff ff       	jmp    0x100070a0
10008bbe:	e8 cd bd ff ff       	call   0x10004990
10008bc3:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10008bc8:	f6 80 76 54 04 00 02 	test   BYTE PTR [eax+0x45476],0x2
10008bcf:	74 0b                	je     0x10008bdc
10008bd1:	85 ff                	test   edi,edi
10008bd3:	75 13                	jne    0x10008be8
10008bd5:	e8 46 d9 ff ff       	call   0x10006520
10008bda:	eb 07                	jmp    0x10008be3
10008bdc:	83 a0 c8 00 00 00 fd 	and    DWORD PTR [eax+0xc8],0xfffffffd
10008be3:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10008be8:	f3 0f 10 40 74       	movss  xmm0,DWORD PTR [eax+0x74]
10008bed:	f3 0f 58 40 5c       	addss  xmm0,DWORD PTR [eax+0x5c]
10008bf2:	f3 0f 11 40 5c       	movss  DWORD PTR [eax+0x5c],xmm0
10008bf7:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10008bfc:	f3 0f 10 40 78       	movss  xmm0,DWORD PTR [eax+0x78]
10008c01:	f3 0f 58 40 60       	addss  xmm0,DWORD PTR [eax+0x60]
10008c06:	f3 0f 11 40 60       	movss  DWORD PTR [eax+0x60],xmm0
10008c0b:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10008c10:	f3 0f 10 40 7c       	movss  xmm0,DWORD PTR [eax+0x7c]
10008c15:	f3 0f 58 40 64       	addss  xmm0,DWORD PTR [eax+0x64]
10008c1a:	f3 0f 11 40 64       	movss  DWORD PTR [eax+0x64],xmm0
10008c1f:	e8 5c cc ff ff       	call   0x10005880
10008c24:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10008c29:	f3 0f 10 40 5c       	movss  xmm0,DWORD PTR [eax+0x5c]
10008c2e:	f3 0f 5c 40 74       	subss  xmm0,DWORD PTR [eax+0x74]
10008c33:	f3 0f 11 40 5c       	movss  DWORD PTR [eax+0x5c],xmm0
10008c38:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10008c3d:	f3 0f 10 40 60       	movss  xmm0,DWORD PTR [eax+0x60]
10008c42:	f3 0f 5c 40 78       	subss  xmm0,DWORD PTR [eax+0x78]
10008c47:	f3 0f 11 40 60       	movss  DWORD PTR [eax+0x60],xmm0
10008c4c:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10008c51:	f3 0f 10 40 64       	movss  xmm0,DWORD PTR [eax+0x64]
10008c56:	f3 0f 5c 40 7c       	subss  xmm0,DWORD PTR [eax+0x7c]
10008c5b:	f3 0f 11 40 64       	movss  DWORD PTR [eax+0x64],xmm0
10008c60:	5e                   	pop    esi
10008c61:	5f                   	pop    edi
10008c62:	5d                   	pop    ebp
10008c63:	c3                   	ret
10008c64:	e8 47 d5 ff ff       	call   0x100061b0
10008c69:	85 c0                	test   eax,eax
10008c6b:	75 0b                	jne    0x10008c78
10008c6d:	e8 be aa ff ff       	call   0x10003730
10008c72:	8b 35 50 0c 22 10    	mov    esi,DWORD PTR ds:0x10220c50
10008c78:	f3 0f 10 86 cc 00 00 	movss  xmm0,DWORD PTR [esi+0xcc]
10008c7f:	00 
10008c80:	0f 57 c9             	xorps  xmm1,xmm1
10008c83:	0f 2e c1             	ucomiss xmm0,xmm1
10008c86:	9f                   	lahf
10008c87:	f6 c4 44             	test   ah,0x44
10008c8a:	7b 12                	jnp    0x10008c9e
10008c8c:	e8 ff 18 00 00       	call   0x1000a590
10008c91:	e8 ea cb ff ff       	call   0x10005880
10008c96:	5e                   	pop    esi
10008c97:	5f                   	pop    edi
10008c98:	5d                   	pop    ebp
10008c99:	e9 f2 bc ff ff       	jmp    0x10004990
10008c9e:	8b 86 e4 00 00 00    	mov    eax,DWORD PTR [esi+0xe4]
10008ca4:	83 f8 02             	cmp    eax,0x2
10008ca7:	0f 8c ac 00 00 00    	jl     0x10008d59
10008cad:	83 be e8 00 00 00 ed 	cmp    DWORD PTR [esi+0xe8],0xffffffed
10008cb4:	0f 84 9f 00 00 00    	je     0x10008d59
10008cba:	83 f8 02             	cmp    eax,0x2
10008cbd:	75 0e                	jne    0x10008ccd
10008cbf:	e8 0c bf ff ff       	call   0x10004bd0
10008cc4:	8b 35 50 0c 22 10    	mov    esi,DWORD PTR ds:0x10220c50
10008cca:	0f 57 c9             	xorps  xmm1,xmm1
10008ccd:	0f 2f 4e 64          	comiss xmm1,DWORD PTR [esi+0x64]
10008cd1:	76 21                	jbe    0x10008cf4
10008cd3:	f3 0f 10 86 cc 00 00 	movss  xmm0,DWORD PTR [esi+0xcc]
10008cda:	00 
10008cdb:	0f 2e c1             	ucomiss xmm0,xmm1
10008cde:	9f                   	lahf
10008cdf:	f6 c4 44             	test   ah,0x44
10008ce2:	7b 10                	jnp    0x10008cf4
10008ce4:	c7 86 cc 00 00 00 00 	mov    DWORD PTR [esi+0xcc],0x0
10008ceb:	00 00 00 
10008cee:	8b 35 50 0c 22 10    	mov    esi,DWORD PTR ds:0x10220c50
10008cf4:	f6 86 76 54 04 00 02 	test   BYTE PTR [esi+0x45476],0x2
10008cfb:	74 07                	je     0x10008d04
10008cfd:	e8 1e d8 ff ff       	call   0x10006520
10008d02:	eb 07                	jmp    0x10008d0b
10008d04:	83 a6 c8 00 00 00 fd 	and    DWORD PTR [esi+0xc8],0xfffffffd
10008d0b:	e8 20 19 00 00       	call   0x1000a630
10008d10:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10008d15:	f3 0f 10 40 5c       	movss  xmm0,DWORD PTR [eax+0x5c]
10008d1a:	f3 0f 5c 40 74       	subss  xmm0,DWORD PTR [eax+0x74]
10008d1f:	f3 0f 11 40 5c       	movss  DWORD PTR [eax+0x5c],xmm0
10008d24:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10008d29:	f3 0f 10 40 60       	movss  xmm0,DWORD PTR [eax+0x60]
10008d2e:	f3 0f 5c 40 78       	subss  xmm0,DWORD PTR [eax+0x78]
10008d33:	f3 0f 11 40 60       	movss  DWORD PTR [eax+0x60],xmm0
10008d38:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10008d3d:	f3 0f 10 40 64       	movss  xmm0,DWORD PTR [eax+0x64]
10008d42:	f3 0f 5c 40 7c       	subss  xmm0,DWORD PTR [eax+0x7c]
10008d47:	f3 0f 11 40 64       	movss  DWORD PTR [eax+0x64],xmm0
10008d4c:	e8 1f af ff ff       	call   0x10003c70
10008d51:	5e                   	pop    esi
10008d52:	5f                   	pop    edi
10008d53:	5d                   	pop    ebp
10008d54:	e9 97 fc ff ff       	jmp    0x100089f0
10008d59:	f6 86 76 54 04 00 02 	test   BYTE PTR [esi+0x45476],0x2
10008d60:	74 0b                	je     0x10008d6d
10008d62:	85 ff                	test   edi,edi
10008d64:	75 14                	jne    0x10008d7a
10008d66:	e8 b5 d7 ff ff       	call   0x10006520
10008d6b:	eb 07                	jmp    0x10008d74
10008d6d:	83 a6 c8 00 00 00 fd 	and    DWORD PTR [esi+0xc8],0xfffffffd
10008d74:	8b 35 50 0c 22 10    	mov    esi,DWORD PTR ds:0x10220c50
10008d7a:	83 be e0 00 00 00 ff 	cmp    DWORD PTR [esi+0xe0],0xffffffff
10008d81:	74 0c                	je     0x10008d8f
10008d83:	c7 46 64 00 00 00 00 	mov    DWORD PTR [esi+0x64],0x0
10008d8a:	e8 11 d1 ff ff       	call   0x10005ea0
10008d8f:	e8 ec ba ff ff       	call   0x10004880
10008d94:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10008d99:	83 b8 e0 00 00 00 ff 	cmp    DWORD PTR [eax+0xe0],0xffffffff
10008da0:	74 07                	je     0x10008da9
10008da2:	e8 a9 10 00 00       	call   0x10009e50
10008da7:	eb 05                	jmp    0x10008dae
10008da9:	e8 72 ac ff ff       	call   0x10003a20
10008dae:	e8 bd ae ff ff       	call   0x10003c70
10008db3:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10008db8:	f3 0f 10 40 5c       	movss  xmm0,DWORD PTR [eax+0x5c]
10008dbd:	f3 0f 5c 40 74       	subss  xmm0,DWORD PTR [eax+0x74]
10008dc2:	f3 0f 11 40 5c       	movss  DWORD PTR [eax+0x5c],xmm0
10008dc7:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10008dcc:	f3 0f 10 40 60       	movss  xmm0,DWORD PTR [eax+0x60]
10008dd1:	f3 0f 5c 40 78       	subss  xmm0,DWORD PTR [eax+0x78]
10008dd6:	f3 0f 11 40 60       	movss  DWORD PTR [eax+0x60],xmm0
10008ddb:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10008de0:	f3 0f 10 40 64       	movss  xmm0,DWORD PTR [eax+0x64]
10008de5:	f3 0f 5c 40 7c       	subss  xmm0,DWORD PTR [eax+0x7c]
10008dea:	f3 0f 11 40 64       	movss  DWORD PTR [eax+0x64],xmm0
10008def:	e8 8c ba ff ff       	call   0x10004880
10008df4:	e8 b7 d3 ff ff       	call   0x100061b0
10008df9:	85 c0                	test   eax,eax
10008dfb:	75 05                	jne    0x10008e02
10008dfd:	e8 0e ca ff ff       	call   0x10005810
10008e02:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10008e07:	83 b8 e0 00 00 00 ff 	cmp    DWORD PTR [eax+0xe0],0xffffffff
10008e0e:	74 07                	je     0x10008e17
10008e10:	c7 40 64 00 00 00 00 	mov    DWORD PTR [eax+0x64],0x0
10008e17:	e8 d4 b0 ff ff       	call   0x10003ef0
10008e1c:	5e                   	pop    esi
10008e1d:	5f                   	pop    edi
10008e1e:	5d                   	pop    ebp
10008e1f:	e9 cc fb ff ff       	jmp    0x100089f0
10008e24:	ff 76 04             	push   DWORD PTR [esi+0x4]
10008e27:	8b 86 68 f5 04 00    	mov    eax,DWORD PTR [esi+0x4f568]
10008e2d:	51                   	push   ecx
10008e2e:	68 98 1d 1a 10       	push   0x101a1d98
10008e33:	ff d0                	call   eax
10008e35:	83 c4 0c             	add    esp,0xc
10008e38:	5e                   	pop    esi
10008e39:	5f                   	pop    edi
10008e3a:	5d                   	pop    ebp
10008e3b:	c3                   	ret
10008e3c:	e8 0f 03 00 00       	call   0x10009150
10008e41:	5f                   	pop    edi
10008e42:	5d                   	pop    ebp
10008e43:	e9 28 ae ff ff       	jmp    0x10003c70
