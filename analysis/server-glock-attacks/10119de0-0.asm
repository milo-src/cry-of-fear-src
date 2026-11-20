
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10119de0 <.text+0x118de0>:
10119de0:	55                   	push   ebp
10119de1:	8b ec                	mov    ebp,esp
10119de3:	83 e4 f8             	and    esp,0xfffffff8
10119de6:	83 ec 0c             	sub    esp,0xc
10119de9:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
10119dee:	53                   	push   ebx
10119def:	56                   	push   esi
10119df0:	57                   	push   edi
10119df1:	83 ec 08             	sub    esp,0x8
10119df4:	c7 44 24 04 00 00 80 	mov    DWORD PTR [esp+0x4],0x45800000
10119dfb:	45 
10119dfc:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10119e01:	e8 ca c8 ff ff       	call   0x101166d0
10119e06:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
10119e0b:	0f b7 c0             	movzx  eax,ax
10119e0e:	c7 44 24 04 00 00 80 	mov    DWORD PTR [esp+0x4],0x43800000
10119e15:	43 
10119e16:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
10119e1a:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10119e1f:	e8 ac c8 ff ff       	call   0x101166d0
10119e24:	0f b7 c0             	movzx  eax,ax
10119e27:	be 01 00 00 00       	mov    esi,0x1
10119e2c:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
10119e30:	83 c4 08             	add    esp,0x8
10119e33:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10119e38:	39 b0 90 00 00 00    	cmp    DWORD PTR [eax+0x90],esi
10119e3e:	0f 8c 08 01 00 00    	jl     0x10119f4c
10119e44:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10119e47:	56                   	push   esi
10119e48:	e8 33 f8 ff ff       	call   0x10119680
10119e4d:	83 c4 04             	add    esp,0x4
10119e50:	85 c0                	test   eax,eax
10119e52:	0f 84 e2 00 00 00    	je     0x10119f3a
10119e58:	8b 78 04             	mov    edi,DWORD PTR [eax+0x4]
10119e5b:	f7 87 a8 01 00 00 00 	test   DWORD PTR [edi+0x1a8],0x200
10119e62:	02 00 00 
10119e65:	0f 84 cf 00 00 00    	je     0x10119f3a
10119e6b:	0f 57 c0             	xorps  xmm0,xmm0
10119e6e:	0f 2f 45 18          	comiss xmm0,DWORD PTR [ebp+0x18]
10119e72:	73 59                	jae    0x10119ecd
10119e74:	f3 0f 10 0b          	movss  xmm1,DWORD PTR [ebx]
10119e78:	f3 0f 10 53 04       	movss  xmm2,DWORD PTR [ebx+0x4]
10119e7d:	f3 0f 5c 57 0c       	subss  xmm2,DWORD PTR [edi+0xc]
10119e82:	f3 0f 5c 4f 08       	subss  xmm1,DWORD PTR [edi+0x8]
10119e87:	f3 0f 10 43 08       	movss  xmm0,DWORD PTR [ebx+0x8]
10119e8c:	f3 0f 5c 47 10       	subss  xmm0,DWORD PTR [edi+0x10]
10119e91:	f3 0f 59 d2          	mulss  xmm2,xmm2
10119e95:	f3 0f 59 c9          	mulss  xmm1,xmm1
10119e99:	f3 0f 59 c0          	mulss  xmm0,xmm0
10119e9d:	f3 0f 58 d1          	addss  xmm2,xmm1
10119ea1:	0f 57 c9             	xorps  xmm1,xmm1
10119ea4:	f3 0f 58 d0          	addss  xmm2,xmm0
10119ea8:	0f 5a c2             	cvtps2pd xmm0,xmm2
10119eab:	66 0f 2e c8          	ucomisd xmm1,xmm0
10119eaf:	77 06                	ja     0x10119eb7
10119eb1:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
10119eb5:	eb 05                	jmp    0x10119ebc
10119eb7:	e8 d4 1f 05 00       	call   0x1016be90
10119ebc:	f3 0f 10 4d 18       	movss  xmm1,DWORD PTR [ebp+0x18]
10119ec1:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
10119ec5:	0f 2f c8             	comiss xmm1,xmm0
10119ec8:	76 70                	jbe    0x10119f3a
10119eca:	0f 57 c0             	xorps  xmm0,xmm0
10119ecd:	f3 0f 10 4d 0c       	movss  xmm1,DWORD PTR [ebp+0xc]
10119ed2:	0f 2e c8             	ucomiss xmm1,xmm0
10119ed5:	9f                   	lahf
10119ed6:	f6 c4 44             	test   ah,0x44
10119ed9:	7b 5f                	jnp    0x10119f3a
10119edb:	ff b7 0c 02 00 00    	push   DWORD PTR [edi+0x20c]
10119ee1:	6a 00                	push   0x0
10119ee3:	ff 35 1c 67 22 10    	push   DWORD PTR ds:0x1022671c
10119ee9:	6a 01                	push   0x1
10119eeb:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
10119ef1:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
10119ef6:	83 c4 08             	add    esp,0x8
10119ef9:	c7 44 24 04 00 00 80 	mov    DWORD PTR [esp+0x4],0x45800000
10119f00:	45 
10119f01:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10119f06:	e8 c5 c7 ff ff       	call   0x101166d0
10119f0b:	0f b7 c0             	movzx  eax,ax
10119f0e:	50                   	push   eax
10119f0f:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
10119f15:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
10119f19:	0f b7 c0             	movzx  eax,ax
10119f1c:	50                   	push   eax
10119f1d:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
10119f23:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
10119f27:	0f b7 c0             	movzx  eax,ax
10119f2a:	50                   	push   eax
10119f2b:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
10119f31:	83 c4 14             	add    esp,0x14
10119f34:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
10119f3a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10119f3f:	46                   	inc    esi
10119f40:	3b b0 90 00 00 00    	cmp    esi,DWORD PTR [eax+0x90]
10119f46:	0f 8e fb fe ff ff    	jle    0x10119e47
10119f4c:	5f                   	pop    edi
10119f4d:	5e                   	pop    esi
10119f4e:	5b                   	pop    ebx
10119f4f:	8b e5                	mov    esp,ebp
10119f51:	5d                   	pop    ebp
10119f52:	c3                   	ret
