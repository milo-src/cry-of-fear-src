
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10014cc0 <.text+0x13cc0>:
10014cc0:	55                   	push   ebp
10014cc1:	8b ec                	mov    ebp,esp
10014cc3:	83 e4 f8             	and    esp,0xfffffff8
10014cc6:	83 ec 10             	sub    esp,0x10
10014cc9:	56                   	push   esi
10014cca:	57                   	push   edi
10014ccb:	8b f9                	mov    edi,ecx
10014ccd:	ff b7 dc 01 00 00    	push   DWORD PTR [edi+0x1dc]
10014cd3:	e8 18 e1 ff ff       	call   0x10012df0
10014cd8:	8b f0                	mov    esi,eax
10014cda:	56                   	push   esi
10014cdb:	e8 50 1d 10 00       	call   0x10116a30
10014ce0:	56                   	push   esi
10014ce1:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10014ce7:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
10014cea:	83 c4 0c             	add    esp,0xc
10014ced:	89 81 ec 01 00 00    	mov    DWORD PTR [ecx+0x1ec],eax
10014cf3:	8b cf                	mov    ecx,edi
10014cf5:	8b 07                	mov    eax,DWORD PTR [edi]
10014cf7:	ff 50 30             	call   DWORD PTR [eax+0x30]
10014cfa:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10014cfd:	f6 80 a4 01 00 00 40 	test   BYTE PTR [eax+0x1a4],0x40
10014d04:	74 19                	je     0x10014d1f
10014d06:	8b 07                	mov    eax,DWORD PTR [edi]
10014d08:	51                   	push   ecx
10014d09:	8b cf                	mov    ecx,edi
10014d0b:	c7 47 78 00 2f 01 10 	mov    DWORD PTR [edi+0x78],0x10012f00
10014d12:	c7 04 24 00 00 00 3f 	mov    DWORD PTR [esp],0x3f000000
10014d19:	ff 50 08             	call   DWORD PTR [eax+0x8]
10014d1c:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10014d1f:	50                   	push   eax
10014d20:	e8 5b de 0e 00       	call   0x10102b80
10014d25:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10014d28:	83 c4 04             	add    esp,0x4
10014d2b:	c7 80 08 01 00 00 07 	mov    DWORD PTR [eax+0x108],0x7
10014d32:	00 00 00 
10014d35:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10014d38:	f6 80 a4 01 00 00 80 	test   BYTE PTR [eax+0x1a4],0x80
10014d3f:	74 19                	je     0x10014d5a
10014d41:	c7 80 0c 01 00 00 00 	mov    DWORD PTR [eax+0x10c],0x0
10014d48:	00 00 00 
10014d4b:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10014d4e:	c7 80 10 01 00 00 ff 	mov    DWORD PTR [eax+0x110],0xffffffff
10014d55:	ff ff ff 
10014d58:	eb 0a                	jmp    0x10014d64
10014d5a:	c7 80 0c 01 00 00 04 	mov    DWORD PTR [eax+0x10c],0x4
10014d61:	00 00 00 
10014d64:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
10014d67:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10014d6c:	8b 8a b8 00 00 00    	mov    ecx,DWORD PTR [edx+0xb8]
10014d72:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
10014d78:	51                   	push   ecx
10014d79:	ff b2 0c 02 00 00    	push   DWORD PTR [edx+0x20c]
10014d7f:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
10014d85:	83 c4 08             	add    esp,0x8
10014d88:	0f 57 c9             	xorps  xmm1,xmm1
10014d8b:	83 bf 8c 01 00 00 00 	cmp    DWORD PTR [edi+0x18c],0x0
10014d92:	0f 95 c0             	setne  al
10014d95:	88 87 80 01 00 00    	mov    BYTE PTR [edi+0x180],al
10014d9b:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
10014d9e:	c7 87 84 01 00 00 00 	mov    DWORD PTR [edi+0x184],0x0
10014da5:	00 00 00 
10014da8:	c7 87 88 01 00 00 00 	mov    DWORD PTR [edi+0x188],0x0
10014daf:	00 00 00 
10014db2:	f3 0f 10 86 fc 01 00 	movss  xmm0,DWORD PTR [esi+0x1fc]
10014db9:	00 
10014dba:	0f 2e c1             	ucomiss xmm0,xmm1
10014dbd:	9f                   	lahf
10014dbe:	f6 c4 44             	test   ah,0x44
10014dc1:	7a 0d                	jp     0x10014dd0
10014dc3:	c7 86 fc 01 00 00 00 	mov    DWORD PTR [esi+0x1fc],0x42200000
10014dca:	00 20 42 
10014dcd:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
10014dd0:	f3 0f 10 86 64 01 00 	movss  xmm0,DWORD PTR [esi+0x164]
10014dd7:	00 
10014dd8:	0f 2f c1             	comiss xmm0,xmm1
10014ddb:	76 0d                	jbe    0x10014dea
10014ddd:	c7 86 70 01 00 00 00 	mov    DWORD PTR [esi+0x170],0x3f800000
10014de4:	00 80 3f 
10014de7:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
10014dea:	f3 0f 10 87 0c 01 00 	movss  xmm0,DWORD PTR [edi+0x10c]
10014df1:	00 
10014df2:	0f 2e c1             	ucomiss xmm0,xmm1
10014df5:	f3 0f 11 44 24 08    	movss  DWORD PTR [esp+0x8],xmm0
10014dfb:	9f                   	lahf
10014dfc:	f6 c4 44             	test   ah,0x44
10014dff:	7a 18                	jp     0x10014e19
10014e01:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
10014e08:	10 
10014e09:	c7 87 0c 01 00 00 00 	mov    DWORD PTR [edi+0x10c],0x3f800000
10014e10:	00 80 3f 
10014e13:	f3 0f 11 44 24 08    	movss  DWORD PTR [esp+0x8],xmm0
10014e19:	f3 0f 10 bf 10 01 00 	movss  xmm7,DWORD PTR [edi+0x110]
10014e20:	00 
10014e21:	0f 2e f9             	ucomiss xmm7,xmm1
10014e24:	9f                   	lahf
10014e25:	f6 c4 44             	test   ah,0x44
10014e28:	7a 12                	jp     0x10014e3c
10014e2a:	f3 0f 10 3d b8 1e 1a 	movss  xmm7,DWORD PTR ds:0x101a1eb8
10014e31:	10 
10014e32:	c7 87 10 01 00 00 00 	mov    DWORD PTR [edi+0x110],0x40800000
10014e39:	00 80 40 
10014e3c:	f3 0f 10 15 80 13 1a 	movss  xmm2,DWORD PTR ds:0x101a1380
10014e43:	10 
10014e44:	f3 0f 10 0d 80 1f 1a 	movss  xmm1,DWORD PTR ds:0x101a1f80
10014e4b:	10 
10014e4c:	c7 87 00 01 00 00 01 	mov    DWORD PTR [edi+0x100],0x1
10014e53:	00 00 00 
10014e56:	f3 0f 7e 46 08       	movq   xmm0,QWORD PTR [esi+0x8]
10014e5b:	66 0f d6 87 1c 01 00 	movq   QWORD PTR [edi+0x11c],xmm0
10014e62:	00 
10014e63:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
10014e66:	89 87 24 01 00 00    	mov    DWORD PTR [edi+0x124],eax
10014e6c:	f3 0f 10 86 f8 00 00 	movss  xmm0,DWORD PTR [esi+0xf8]
10014e73:	00 
10014e74:	f3 0f 10 9e f4 00 00 	movss  xmm3,DWORD PTR [esi+0xf4]
10014e7b:	00 
10014e7c:	f3 0f 5c c2          	subss  xmm0,xmm2
10014e80:	f3 0f 10 76 44       	movss  xmm6,DWORD PTR [esi+0x44]
10014e85:	f3 0f 5c da          	subss  xmm3,xmm2
10014e89:	f3 0f 10 6e 48       	movss  xmm5,DWORD PTR [esi+0x48]
10014e8e:	f3 0f 10 66 4c       	movss  xmm4,DWORD PTR [esi+0x4c]
10014e93:	f3 0f 59 c5          	mulss  xmm0,xmm5
10014e97:	f3 0f 59 de          	mulss  xmm3,xmm6
10014e9b:	0f 54 c1             	andps  xmm0,xmm1
10014e9e:	0f 54 d9             	andps  xmm3,xmm1
10014ea1:	f3 0f 58 d8          	addss  xmm3,xmm0
10014ea5:	f3 0f 10 86 fc 00 00 	movss  xmm0,DWORD PTR [esi+0xfc]
10014eac:	00 
10014ead:	f3 0f 5c c2          	subss  xmm0,xmm2
10014eb1:	f3 0f 59 c4          	mulss  xmm0,xmm4
10014eb5:	0f 54 c1             	andps  xmm0,xmm1
10014eb8:	f3 0f 58 d8          	addss  xmm3,xmm0
10014ebc:	f3 0f 10 87 1c 01 00 	movss  xmm0,DWORD PTR [edi+0x11c]
10014ec3:	00 
10014ec4:	f3 0f 5c df          	subss  xmm3,xmm7
10014ec8:	f3 0f 59 f3          	mulss  xmm6,xmm3
10014ecc:	f3 0f 59 eb          	mulss  xmm5,xmm3
10014ed0:	f3 0f 58 f0          	addss  xmm6,xmm0
10014ed4:	f3 0f 59 e3          	mulss  xmm4,xmm3
10014ed8:	f3 0f 58 af 20 01 00 	addss  xmm5,DWORD PTR [edi+0x120]
10014edf:	00 
10014ee0:	f3 0f 58 a7 24 01 00 	addss  xmm4,DWORD PTR [edi+0x124]
10014ee7:	00 
10014ee8:	0f 14 f5             	unpcklps xmm6,xmm5
10014eeb:	66 0f d6 b7 28 01 00 	movq   QWORD PTR [edi+0x128],xmm6
10014ef2:	00 
10014ef3:	f3 0f 11 64 24 14    	movss  DWORD PTR [esp+0x14],xmm4
10014ef9:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
10014efd:	89 87 30 01 00 00    	mov    DWORD PTR [edi+0x130],eax
10014f03:	f3 0f 10 8f 28 01 00 	movss  xmm1,DWORD PTR [edi+0x128]
10014f0a:	00 
10014f0b:	f3 0f 10 97 2c 01 00 	movss  xmm2,DWORD PTR [edi+0x12c]
10014f12:	00 
10014f13:	f3 0f 5c c8          	subss  xmm1,xmm0
10014f17:	f3 0f 5c 97 20 01 00 	subss  xmm2,DWORD PTR [edi+0x120]
10014f1e:	00 
10014f1f:	f3 0f 10 87 30 01 00 	movss  xmm0,DWORD PTR [edi+0x130]
10014f26:	00 
10014f27:	f3 0f 5c 87 24 01 00 	subss  xmm0,DWORD PTR [edi+0x124]
10014f2e:	00 
10014f2f:	f3 0f 59 c9          	mulss  xmm1,xmm1
10014f33:	f3 0f 59 d2          	mulss  xmm2,xmm2
10014f37:	f3 0f 59 c0          	mulss  xmm0,xmm0
10014f3b:	f3 0f 58 d1          	addss  xmm2,xmm1
10014f3f:	0f 57 c9             	xorps  xmm1,xmm1
10014f42:	f3 0f 58 d0          	addss  xmm2,xmm0
10014f46:	0f 5a c2             	cvtps2pd xmm0,xmm2
10014f49:	66 0f 2e c8          	ucomisd xmm1,xmm0
10014f4d:	77 06                	ja     0x10014f55
10014f4f:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
10014f53:	eb 05                	jmp    0x10014f5a
10014f55:	e8 36 6f 15 00       	call   0x1016be90
10014f5a:	f3 0f 10 0d 90 13 1a 	movss  xmm1,DWORD PTR ds:0x101a1390
10014f61:	10 
10014f62:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
10014f66:	0f 2f c8             	comiss xmm1,xmm0
10014f69:	77 09                	ja     0x10014f74
10014f6b:	f6 86 a4 01 00 00 01 	test   BYTE PTR [esi+0x1a4],0x1
10014f72:	74 1c                	je     0x10014f90
10014f74:	f3 0f 7e 87 1c 01 00 	movq   xmm0,QWORD PTR [edi+0x11c]
10014f7b:	00 
10014f7c:	8b 87 24 01 00 00    	mov    eax,DWORD PTR [edi+0x124]
10014f82:	66 0f d6 87 28 01 00 	movq   QWORD PTR [edi+0x128],xmm0
10014f89:	00 
10014f8a:	89 87 30 01 00 00    	mov    DWORD PTR [edi+0x130],eax
10014f90:	f3 0f 10 44 24 08    	movss  xmm0,DWORD PTR [esp+0x8]
10014f96:	ba 01 00 00 00       	mov    edx,0x1
10014f9b:	0f 2e 05 d0 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a13d0
10014fa2:	c7 87 ac 01 00 00 00 	mov    DWORD PTR [edi+0x1ac],0x0
10014fa9:	00 00 00 
10014fac:	9f                   	lahf
10014fad:	33 c9                	xor    ecx,ecx
10014faf:	f6 c4 44             	test   ah,0x44
10014fb2:	0f 4b ca             	cmovnp ecx,edx
10014fb5:	89 8f a8 01 00 00    	mov    DWORD PTR [edi+0x1a8],ecx
10014fbb:	f7 86 a4 01 00 00 00 	test   DWORD PTR [esi+0x1a4],0x100
10014fc2:	01 00 00 
10014fc5:	74 13                	je     0x10014fda
10014fc7:	c7 47 7c 70 2f 01 10 	mov    DWORD PTR [edi+0x7c],0x10012f70
10014fce:	b8 20 32 01 10       	mov    eax,0x10013220
10014fd3:	b9 90 30 01 10       	mov    ecx,0x10013090
10014fd8:	eb 11                	jmp    0x10014feb
10014fda:	c7 47 7c 00 00 00 00 	mov    DWORD PTR [edi+0x7c],0x0
10014fe1:	b8 90 30 01 10       	mov    eax,0x10013090
10014fe6:	b9 20 32 01 10       	mov    ecx,0x10013220
10014feb:	f7 86 a4 01 00 00 00 	test   DWORD PTR [esi+0x1a4],0x200
10014ff2:	02 00 00 
10014ff5:	0f 45 c1             	cmovne eax,ecx
10014ff8:	89 87 80 00 00 00    	mov    DWORD PTR [edi+0x80],eax
10014ffe:	5f                   	pop    edi
10014fff:	5e                   	pop    esi
10015000:	8b e5                	mov    esp,ebp
10015002:	5d                   	pop    ebp
10015003:	c3                   	ret
