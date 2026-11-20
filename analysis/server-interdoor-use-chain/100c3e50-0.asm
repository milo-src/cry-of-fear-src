
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c3e50 <.text+0xc2e50>:
100c3e50:	55                   	push   ebp
100c3e51:	8b ec                	mov    ebp,esp
100c3e53:	56                   	push   esi
100c3e54:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100c3e57:	8b 46 60             	mov    eax,DWORD PTR [esi+0x60]
100c3e5a:	84 c0                	test   al,al
100c3e5c:	0f 89 35 01 00 00    	jns    0x100c3f97
100c3e62:	25 7f ff ff ff       	and    eax,0xffffff7f
100c3e67:	89 46 60             	mov    DWORD PTR [esi+0x60],eax
100c3e6a:	a9 00 08 00 00       	test   eax,0x800
100c3e6f:	74 11                	je     0x100c3e82
100c3e71:	25 ff f7 ff ff       	and    eax,0xfffff7ff
100c3e76:	8b ce                	mov    ecx,esi
100c3e78:	89 46 60             	mov    DWORD PTR [esi+0x60],eax
100c3e7b:	8b 06                	mov    eax,DWORD PTR [esi]
100c3e7d:	ff 10                	call   DWORD PTR [eax]
100c3e7f:	8b 46 60             	mov    eax,DWORD PTR [esi+0x60]
100c3e82:	a9 00 04 00 00       	test   eax,0x400
100c3e87:	0f 84 ce 00 00 00    	je     0x100c3f5b
100c3e8d:	25 ff fb ff ff       	and    eax,0xfffffbff
100c3e92:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100c3e95:	89 46 60             	mov    DWORD PTR [esi+0x60],eax
100c3e98:	83 ec 60             	sub    esp,0x60
100c3e9b:	8b 46 1c             	mov    eax,DWORD PTR [esi+0x1c]
100c3e9e:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100c3ea1:	f3 0f 10 40 28       	movss  xmm0,DWORD PTR [eax+0x28]
100c3ea6:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c3ea9:	f2 0f 11 44 24 58    	movsd  QWORD PTR [esp+0x58],xmm0
100c3eaf:	f3 0f 10 40 24       	movss  xmm0,DWORD PTR [eax+0x24]
100c3eb4:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c3eb7:	f2 0f 11 44 24 50    	movsd  QWORD PTR [esp+0x50],xmm0
100c3ebd:	f3 0f 10 40 20       	movss  xmm0,DWORD PTR [eax+0x20]
100c3ec2:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c3ec5:	f2 0f 11 44 24 48    	movsd  QWORD PTR [esp+0x48],xmm0
100c3ecb:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
100c3ed0:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c3ed3:	f2 0f 11 44 24 40    	movsd  QWORD PTR [esp+0x40],xmm0
100c3ed9:	f3 0f 10 40 0c       	movss  xmm0,DWORD PTR [eax+0xc]
100c3ede:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c3ee1:	f2 0f 11 44 24 38    	movsd  QWORD PTR [esp+0x38],xmm0
100c3ee7:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
100c3eec:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c3eef:	f2 0f 11 44 24 30    	movsd  QWORD PTR [esp+0x30],xmm0
100c3ef5:	f3 0f 10 41 28       	movss  xmm0,DWORD PTR [ecx+0x28]
100c3efa:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c3efd:	f2 0f 11 44 24 28    	movsd  QWORD PTR [esp+0x28],xmm0
100c3f03:	f3 0f 10 41 24       	movss  xmm0,DWORD PTR [ecx+0x24]
100c3f08:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c3f0b:	f2 0f 11 44 24 20    	movsd  QWORD PTR [esp+0x20],xmm0
100c3f11:	f3 0f 10 41 20       	movss  xmm0,DWORD PTR [ecx+0x20]
100c3f16:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c3f19:	f2 0f 11 44 24 18    	movsd  QWORD PTR [esp+0x18],xmm0
100c3f1f:	f3 0f 10 41 10       	movss  xmm0,DWORD PTR [ecx+0x10]
100c3f24:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c3f27:	f2 0f 11 44 24 10    	movsd  QWORD PTR [esp+0x10],xmm0
100c3f2d:	f3 0f 10 41 0c       	movss  xmm0,DWORD PTR [ecx+0xc]
100c3f32:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c3f35:	f2 0f 11 44 24 08    	movsd  QWORD PTR [esp+0x8],xmm0
100c3f3b:	f3 0f 10 41 08       	movss  xmm0,DWORD PTR [ecx+0x8]
100c3f40:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c3f43:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
100c3f48:	68 00 5d 1d 10       	push   0x101d5d00
100c3f4d:	6a 01                	push   0x1
100c3f4f:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c3f55:	8b 46 60             	mov    eax,DWORD PTR [esi+0x60]
100c3f58:	83 c4 68             	add    esp,0x68
100c3f5b:	a9 00 02 00 00       	test   eax,0x200
100c3f60:	74 14                	je     0x100c3f76
100c3f62:	25 ff fd ff ff       	and    eax,0xfffffdff
100c3f67:	56                   	push   esi
100c3f68:	89 46 60             	mov    DWORD PTR [esi+0x60],eax
100c3f6b:	e8 40 02 00 00       	call   0x100c41b0
100c3f70:	8b 46 60             	mov    eax,DWORD PTR [esi+0x60]
100c3f73:	83 c4 04             	add    esp,0x4
100c3f76:	a9 00 01 00 00       	test   eax,0x100
100c3f7b:	74 12                	je     0x100c3f8f
100c3f7d:	25 ff fe ff ff       	and    eax,0xfffffeff
100c3f82:	8b ce                	mov    ecx,esi
100c3f84:	89 46 60             	mov    DWORD PTR [esi+0x60],eax
100c3f87:	8b 06                	mov    eax,DWORD PTR [esi]
100c3f89:	ff 90 e0 00 00 00    	call   DWORD PTR [eax+0xe0]
100c3f8f:	b8 01 00 00 00       	mov    eax,0x1
100c3f94:	5e                   	pop    esi
100c3f95:	5d                   	pop    ebp
100c3f96:	c3                   	ret
100c3f97:	33 c0                	xor    eax,eax
100c3f99:	5e                   	pop    esi
100c3f9a:	5d                   	pop    ebp
100c3f9b:	c3                   	ret
