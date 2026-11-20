
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10104a10 <.text+0x103a10>:
10104a10:	55                   	push   ebp
10104a11:	8b ec                	mov    ebp,esp
10104a13:	83 e4 f8             	and    esp,0xfffffff8
10104a16:	51                   	push   ecx
10104a17:	53                   	push   ebx
10104a18:	56                   	push   esi
10104a19:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10104a1c:	57                   	push   edi
10104a1d:	8b f9                	mov    edi,ecx
10104a1f:	8d 46 ff             	lea    eax,[esi-0x1]
10104a22:	83 f8 2e             	cmp    eax,0x2e
10104a25:	0f 87 b2 02 00 00    	ja     0x10104cdd
10104a2b:	0f b6 80 08 4d 10 10 	movzx  eax,BYTE PTR [eax+0x10104d08]
10104a32:	ff 24 85 f0 4c 10 10 	jmp    DWORD PTR [eax*4+0x10104cf0]
10104a39:	b8 98 9e 21 10       	mov    eax,0x10219e98
10104a3e:	5f                   	pop    edi
10104a3f:	5e                   	pop    esi
10104a40:	5b                   	pop    ebx
10104a41:	8b e5                	mov    esp,ebp
10104a43:	5d                   	pop    ebp
10104a44:	c2 04 00             	ret    0x4
10104a47:	b8 00 9f 21 10       	mov    eax,0x10219f00
10104a4c:	5f                   	pop    edi
10104a4d:	5e                   	pop    esi
10104a4e:	5b                   	pop    ebx
10104a4f:	8b e5                	mov    esp,ebp
10104a51:	5d                   	pop    ebp
10104a52:	c2 04 00             	ret    0x4
10104a55:	b8 bc 9e 21 10       	mov    eax,0x10219ebc
10104a5a:	5f                   	pop    edi
10104a5b:	5e                   	pop    esi
10104a5c:	5b                   	pop    ebx
10104a5d:	8b e5                	mov    esp,ebp
10104a5f:	5d                   	pop    ebp
10104a60:	c2 04 00             	ret    0x4
10104a63:	6a 63                	push   0x63
10104a65:	6a 00                	push   0x0
10104a67:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
10104a6d:	83 c4 08             	add    esp,0x8
10104a70:	83 f8 02             	cmp    eax,0x2
10104a73:	0f 8d 98 00 00 00    	jge    0x10104b11
10104a79:	b8 bc 9d 21 10       	mov    eax,0x10219dbc
10104a7e:	5f                   	pop    edi
10104a7f:	5e                   	pop    esi
10104a80:	5b                   	pop    ebx
10104a81:	8b e5                	mov    esp,ebp
10104a83:	5d                   	pop    ebp
10104a84:	c2 04 00             	ret    0x4
10104a87:	8b 8f 68 03 00 00    	mov    ecx,DWORD PTR [edi+0x368]
10104a8d:	f6 c1 08             	test   cl,0x8
10104a90:	75 0e                	jne    0x10104aa0
10104a92:	b8 38 9e 21 10       	mov    eax,0x10219e38
10104a97:	5f                   	pop    edi
10104a98:	5e                   	pop    esi
10104a99:	5b                   	pop    ebx
10104a9a:	8b e5                	mov    esp,ebp
10104a9c:	5d                   	pop    ebp
10104a9d:	c2 04 00             	ret    0x4
10104aa0:	f6 c1 10             	test   cl,0x10
10104aa3:	75 7a                	jne    0x10104b1f
10104aa5:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10104aa8:	f3 0f 10 80 b4 01 00 	movss  xmm0,DWORD PTR [eax+0x1b4]
10104aaf:	00 
10104ab0:	f3 0f 10 88 64 01 00 	movss  xmm1,DWORD PTR [eax+0x164]
10104ab7:	00 
10104ab8:	0f 5a c0             	cvtps2pd xmm0,xmm0
10104abb:	0f 5a c9             	cvtps2pd xmm1,xmm1
10104abe:	f2 0f 59 05 60 1e 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1e60
10104ac5:	10 
10104ac6:	66 0f 2f c1          	comisd xmm0,xmm1
10104aca:	72 53                	jb     0x10104b1f
10104acc:	8b 37                	mov    esi,DWORD PTR [edi]
10104ace:	83 ec 10             	sub    esp,0x10
10104ad1:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x40000000
10104ad8:	40 
10104ad9:	c7 44 24 08 00 00 80 	mov    DWORD PTR [esp+0x8],0x3f800000
10104ae0:	3f 
10104ae1:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x404ccccd
10104ae8:	40 
10104ae9:	c7 04 24 33 33 33 40 	mov    DWORD PTR [esp],0x40333333
10104af0:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
10104af6:	83 c4 04             	add    esp,0x4
10104af9:	8b cf                	mov    ecx,edi
10104afb:	d9 1c 24             	fstp   DWORD PTR [esp]
10104afe:	ff b7 b8 03 00 00    	push   DWORD PTR [edi+0x3b8]
10104b04:	ff 96 a0 01 00 00    	call   DWORD PTR [esi+0x1a0]
10104b0a:	83 8f 68 03 00 00 10 	or     DWORD PTR [edi+0x368],0x10
10104b11:	b8 e4 31 21 10       	mov    eax,0x102131e4
10104b16:	5f                   	pop    edi
10104b17:	5e                   	pop    esi
10104b18:	5b                   	pop    ebx
10104b19:	8b e5                	mov    esp,ebp
10104b1b:	5d                   	pop    ebp
10104b1c:	c2 04 00             	ret    0x4
10104b1f:	f6 c1 20             	test   cl,0x20
10104b22:	75 7a                	jne    0x10104b9e
10104b24:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10104b27:	f3 0f 10 80 b4 01 00 	movss  xmm0,DWORD PTR [eax+0x1b4]
10104b2e:	00 
10104b2f:	f3 0f 10 88 64 01 00 	movss  xmm1,DWORD PTR [eax+0x164]
10104b36:	00 
10104b37:	0f 5a c0             	cvtps2pd xmm0,xmm0
10104b3a:	0f 5a c9             	cvtps2pd xmm1,xmm1
10104b3d:	f2 0f 59 05 48 1e 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1e48
10104b44:	10 
10104b45:	66 0f 2f c1          	comisd xmm0,xmm1
10104b49:	72 53                	jb     0x10104b9e
10104b4b:	8b 37                	mov    esi,DWORD PTR [edi]
10104b4d:	83 ec 10             	sub    esp,0x10
10104b50:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x40000000
10104b57:	40 
10104b58:	c7 44 24 08 00 00 80 	mov    DWORD PTR [esp+0x8],0x3f800000
10104b5f:	3f 
10104b60:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x404ccccd
10104b67:	40 
10104b68:	c7 04 24 33 33 33 40 	mov    DWORD PTR [esp],0x40333333
10104b6f:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
10104b75:	83 c4 04             	add    esp,0x4
10104b78:	8b cf                	mov    ecx,edi
10104b7a:	d9 1c 24             	fstp   DWORD PTR [esp]
10104b7d:	ff b7 bc 03 00 00    	push   DWORD PTR [edi+0x3bc]
10104b83:	ff 96 a0 01 00 00    	call   DWORD PTR [esi+0x1a0]
10104b89:	83 8f 68 03 00 00 20 	or     DWORD PTR [edi+0x368],0x20
10104b90:	b8 e4 31 21 10       	mov    eax,0x102131e4
10104b95:	5f                   	pop    edi
10104b96:	5e                   	pop    esi
10104b97:	5b                   	pop    ebx
10104b98:	8b e5                	mov    esp,ebp
10104b9a:	5d                   	pop    ebp
10104b9b:	c2 04 00             	ret    0x4
10104b9e:	8b 07                	mov    eax,DWORD PTR [edi]
10104ba0:	8b cf                	mov    ecx,edi
10104ba2:	ff 90 44 02 00 00    	call   DWORD PTR [eax+0x244]
10104ba8:	85 c0                	test   eax,eax
10104baa:	74 26                	je     0x10104bd2
10104bac:	8b 87 6c 03 00 00    	mov    eax,DWORD PTR [edi+0x36c]
10104bb2:	03 c0                	add    eax,eax
10104bb4:	50                   	push   eax
10104bb5:	6a 00                	push   0x0
10104bb7:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
10104bbd:	83 c4 08             	add    esp,0x8
10104bc0:	85 c0                	test   eax,eax
10104bc2:	75 0e                	jne    0x10104bd2
10104bc4:	b8 88 9d 21 10       	mov    eax,0x10219d88
10104bc9:	5f                   	pop    edi
10104bca:	5e                   	pop    esi
10104bcb:	5b                   	pop    ebx
10104bcc:	8b e5                	mov    esp,ebp
10104bce:	5d                   	pop    ebp
10104bcf:	c2 04 00             	ret    0x4
10104bd2:	8b cf                	mov    ecx,edi
10104bd4:	e8 77 03 00 00       	call   0x10104f50
10104bd9:	85 c0                	test   eax,eax
10104bdb:	0f 85 df 00 00 00    	jne    0x10104cc0
10104be1:	f7 87 80 01 00 00 00 	test   DWORD PTR [edi+0x180],0x200000
10104be8:	00 20 00 
10104beb:	0f 84 cf 00 00 00    	je     0x10104cc0
10104bf1:	6a 06                	push   0x6
10104bf3:	50                   	push   eax
10104bf4:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
10104bfa:	83 c4 08             	add    esp,0x8
10104bfd:	85 c0                	test   eax,eax
10104bff:	0f 85 bb 00 00 00    	jne    0x10104cc0
10104c05:	6a 01                	push   0x1
10104c07:	ff 15 68 30 22 10    	call   DWORD PTR ds:0x10223068
10104c0d:	8b d8                	mov    ebx,eax
10104c0f:	83 c4 04             	add    esp,0x4
10104c12:	85 db                	test   ebx,ebx
10104c14:	0f 84 c3 00 00 00    	je     0x10104cdd
10104c1a:	8d 8b d0 00 00 00    	lea    ecx,[ebx+0xd0]
10104c20:	51                   	push   ecx
10104c21:	e8 fa 46 01 00       	call   0x10119320
10104c26:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
10104c29:	81 c3 88 00 00 00    	add    ebx,0x88
10104c2f:	83 c6 08             	add    esi,0x8
10104c32:	83 c4 04             	add    esp,0x4
10104c35:	f3 0f 10 0b          	movss  xmm1,DWORD PTR [ebx]
10104c39:	f3 0f 10 43 04       	movss  xmm0,DWORD PTR [ebx+0x4]
10104c3e:	f3 0f 5c 46 04       	subss  xmm0,DWORD PTR [esi+0x4]
10104c43:	f3 0f 5c 0e          	subss  xmm1,DWORD PTR [esi]
10104c47:	f3 0f 59 c0          	mulss  xmm0,xmm0
10104c4b:	f3 0f 59 c9          	mulss  xmm1,xmm1
10104c4f:	f3 0f 58 c1          	addss  xmm0,xmm1
10104c53:	0f 57 c9             	xorps  xmm1,xmm1
10104c56:	0f 5a c0             	cvtps2pd xmm0,xmm0
10104c59:	66 0f 2e c8          	ucomisd xmm1,xmm0
10104c5d:	77 06                	ja     0x10104c65
10104c5f:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
10104c63:	eb 05                	jmp    0x10104c6a
10104c65:	e8 26 72 06 00       	call   0x1016be90
10104c6a:	0f 57 c9             	xorps  xmm1,xmm1
10104c6d:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
10104c71:	f3 0f 10 05 c4 fe 1a 	movss  xmm0,DWORD PTR ds:0x101afec4
10104c78:	10 
10104c79:	0f 2f c1             	comiss xmm0,xmm1
10104c7c:	76 34                	jbe    0x10104cb2
10104c7e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10104c83:	83 c0 28             	add    eax,0x28
10104c86:	50                   	push   eax
10104c87:	56                   	push   esi
10104c88:	53                   	push   ebx
10104c89:	e8 62 35 01 00       	call   0x101181f0
10104c8e:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
10104c92:	f3 0f 10 44 24 18    	movss  xmm0,DWORD PTR [esp+0x18]
10104c98:	83 c4 0c             	add    esp,0xc
10104c9b:	0f 2f 87 08 02 00 00 	comiss xmm0,DWORD PTR [edi+0x208]
10104ca2:	72 0e                	jb     0x10104cb2
10104ca4:	b8 78 9f 21 10       	mov    eax,0x10219f78
10104ca9:	5f                   	pop    edi
10104caa:	5e                   	pop    esi
10104cab:	5b                   	pop    ebx
10104cac:	8b e5                	mov    esp,ebp
10104cae:	5d                   	pop    ebp
10104caf:	c2 04 00             	ret    0x4
10104cb2:	b8 64 9f 21 10       	mov    eax,0x10219f64
10104cb7:	5f                   	pop    edi
10104cb8:	5e                   	pop    esi
10104cb9:	5b                   	pop    ebx
10104cba:	8b e5                	mov    esp,ebp
10104cbc:	5d                   	pop    ebp
10104cbd:	c2 04 00             	ret    0x4
10104cc0:	8b cf                	mov    ecx,edi
10104cc2:	e8 89 02 00 00       	call   0x10104f50
10104cc7:	85 c0                	test   eax,eax
10104cc9:	0f 84 42 fe ff ff    	je     0x10104b11
10104ccf:	b8 ac 9f 21 10       	mov    eax,0x10219fac
10104cd4:	5f                   	pop    edi
10104cd5:	5e                   	pop    esi
10104cd6:	5b                   	pop    ebx
10104cd7:	8b e5                	mov    esp,ebp
10104cd9:	5d                   	pop    ebp
10104cda:	c2 04 00             	ret    0x4
10104cdd:	56                   	push   esi
10104cde:	8b cf                	mov    ecx,edi
10104ce0:	e8 8b 7d f8 ff       	call   0x1008ca70
10104ce5:	5f                   	pop    edi
10104ce6:	5e                   	pop    esi
10104ce7:	5b                   	pop    ebx
10104ce8:	8b e5                	mov    esp,ebp
10104cea:	5d                   	pop    ebp
10104ceb:	c2 04 00             	ret    0x4
