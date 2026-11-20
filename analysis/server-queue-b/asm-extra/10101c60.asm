
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10101c60 <.text+0x100c60>:
10101c60:	55                   	push   ebp
10101c61:	8b ec                	mov    ebp,esp
10101c63:	83 e4 f8             	and    esp,0xfffffff8
10101c66:	83 ec 1c             	sub    esp,0x1c
10101c69:	56                   	push   esi
10101c6a:	8b f1                	mov    esi,ecx
10101c6c:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
10101c6f:	85 c0                	test   eax,eax
10101c71:	74 2c                	je     0x10101c9f
10101c73:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10101c76:	f3 0f 10 9e 6c 01 00 	movss  xmm3,DWORD PTR [esi+0x16c]
10101c7d:	00 
10101c7e:	f3 0f 10 40 54       	movss  xmm0,DWORD PTR [eax+0x54]
10101c83:	f3 0f 10 50 58       	movss  xmm2,DWORD PTR [eax+0x58]
10101c88:	f3 0f 58 58 50       	addss  xmm3,DWORD PTR [eax+0x50]
10101c8d:	f3 0f 58 86 70 01 00 	addss  xmm0,DWORD PTR [esi+0x170]
10101c94:	00 
10101c95:	f3 0f 58 96 74 01 00 	addss  xmm2,DWORD PTR [esi+0x174]
10101c9c:	00 
10101c9d:	eb 2a                	jmp    0x10101cc9
10101c9f:	f3 0f 7e 86 6c 01 00 	movq   xmm0,QWORD PTR [esi+0x16c]
10101ca6:	00 
10101ca7:	8b 86 74 01 00 00    	mov    eax,DWORD PTR [esi+0x174]
10101cad:	66 0f d6 44 24 14    	movq   QWORD PTR [esp+0x14],xmm0
10101cb3:	f3 0f 10 44 24 18    	movss  xmm0,DWORD PTR [esp+0x18]
10101cb9:	f3 0f 10 5c 24 14    	movss  xmm3,DWORD PTR [esp+0x14]
10101cbf:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
10101cc3:	f3 0f 10 54 24 1c    	movss  xmm2,DWORD PTR [esp+0x1c]
10101cc9:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10101ccc:	f3 0f 10 49 50       	movss  xmm1,DWORD PTR [ecx+0x50]
10101cd1:	0f 2e d9             	ucomiss xmm3,xmm1
10101cd4:	9f                   	lahf
10101cd5:	f6 c4 44             	test   ah,0x44
10101cd8:	7a 20                	jp     0x10101cfa
10101cda:	0f 2e 41 54          	ucomiss xmm0,DWORD PTR [ecx+0x54]
10101cde:	9f                   	lahf
10101cdf:	f6 c4 44             	test   ah,0x44
10101ce2:	7a 16                	jp     0x10101cfa
10101ce4:	0f 2e 51 58          	ucomiss xmm2,DWORD PTR [ecx+0x58]
10101ce8:	9f                   	lahf
10101ce9:	f6 c4 44             	test   ah,0x44
10101cec:	7a 0c                	jp     0x10101cfa
10101cee:	8b ce                	mov    ecx,esi
10101cf0:	e8 9b fe ff ff       	call   0x10101b90
10101cf5:	5e                   	pop    esi
10101cf6:	8b e5                	mov    esp,ebp
10101cf8:	5d                   	pop    ebp
10101cf9:	c3                   	ret
10101cfa:	f3 0f 5c 41 54       	subss  xmm0,DWORD PTR [ecx+0x54]
10101cff:	f3 0f 5c 51 58       	subss  xmm2,DWORD PTR [ecx+0x58]
10101d04:	f3 0f 5c d9          	subss  xmm3,xmm1
10101d08:	0f 28 c8             	movaps xmm1,xmm0
10101d0b:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
10101d11:	f3 0f 59 c8          	mulss  xmm1,xmm0
10101d15:	0f 28 c3             	movaps xmm0,xmm3
10101d18:	f3 0f 11 5c 24 08    	movss  DWORD PTR [esp+0x8],xmm3
10101d1e:	f3 0f 59 c3          	mulss  xmm0,xmm3
10101d22:	f3 0f 11 54 24 10    	movss  DWORD PTR [esp+0x10],xmm2
10101d28:	f3 0f 58 c8          	addss  xmm1,xmm0
10101d2c:	0f 28 c2             	movaps xmm0,xmm2
10101d2f:	f3 0f 59 c2          	mulss  xmm0,xmm2
10101d33:	f3 0f 58 c8          	addss  xmm1,xmm0
10101d37:	0f 5a c1             	cvtps2pd xmm0,xmm1
10101d3a:	0f 57 c9             	xorps  xmm1,xmm1
10101d3d:	66 0f 2e c8          	ucomisd xmm1,xmm0
10101d41:	77 06                	ja     0x10101d49
10101d43:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
10101d47:	eb 05                	jmp    0x10101d4e
10101d49:	e8 42 a1 06 00       	call   0x1016be90
10101d4e:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
10101d52:	8b 06                	mov    eax,DWORD PTR [esi]
10101d54:	6a 01                	push   0x1
10101d56:	51                   	push   ecx
10101d57:	8b ce                	mov    ecx,esi
10101d59:	f3 0f 5e 86 68 01 00 	divss  xmm0,DWORD PTR [esi+0x168]
10101d60:	00 
10101d61:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
10101d67:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10101d6c:	ff 50 04             	call   DWORD PTR [eax+0x4]
10101d6f:	f3 0f 10 44 24 04    	movss  xmm0,DWORD PTR [esp+0x4]
10101d75:	83 ec 0c             	sub    esp,0xc
10101d78:	f3 0f 10 4c 24 14    	movss  xmm1,DWORD PTR [esp+0x14]
10101d7e:	8b c4                	mov    eax,esp
10101d80:	f3 0f 5e c8          	divss  xmm1,xmm0
10101d84:	c7 46 78 90 1b 10 10 	mov    DWORD PTR [esi+0x78],0x10101b90
10101d8b:	56                   	push   esi
10101d8c:	f3 0f 11 08          	movss  DWORD PTR [eax],xmm1
10101d90:	f3 0f 10 4c 24 1c    	movss  xmm1,DWORD PTR [esp+0x1c]
10101d96:	f3 0f 5e c8          	divss  xmm1,xmm0
10101d9a:	f3 0f 11 48 04       	movss  DWORD PTR [eax+0x4],xmm1
10101d9f:	f3 0f 10 4c 24 20    	movss  xmm1,DWORD PTR [esp+0x20]
10101da5:	f3 0f 5e c8          	divss  xmm1,xmm0
10101da9:	f3 0f 11 48 08       	movss  DWORD PTR [eax+0x8],xmm1
10101dae:	e8 dd 2d fc ff       	call   0x100c4b90
10101db3:	83 c4 10             	add    esp,0x10
10101db6:	5e                   	pop    esi
10101db7:	8b e5                	mov    esp,ebp
10101db9:	5d                   	pop    ebp
10101dba:	c3                   	ret
