
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10004bd0 <.text+0x3bd0>:
10004bd0:	53                   	push   ebx
10004bd1:	8b dc                	mov    ebx,esp
10004bd3:	83 ec 08             	sub    esp,0x8
10004bd6:	83 e4 f0             	and    esp,0xfffffff0
10004bd9:	83 c4 04             	add    esp,0x4
10004bdc:	55                   	push   ebp
10004bdd:	8b 6b 04             	mov    ebp,DWORD PTR [ebx+0x4]
10004be0:	89 6c 24 04          	mov    DWORD PTR [esp+0x4],ebp
10004be4:	8b ec                	mov    ebp,esp
10004be6:	81 ec ec 00 00 00    	sub    esp,0xec
10004bec:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
10004bf1:	33 c5                	xor    eax,ebp
10004bf3:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10004bf6:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10004bfc:	56                   	push   esi
10004bfd:	f3 0f 10 81 cc 00 00 	movss  xmm0,DWORD PTR [ecx+0xcc]
10004c04:	00 
10004c05:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
10004c0c:	9f                   	lahf
10004c0d:	f6 c4 44             	test   ah,0x44
10004c10:	0f 8a 7c 02 00 00    	jp     0x10004e92
10004c16:	f3 0f 10 05 d4 13 1a 	movss  xmm0,DWORD PTR ds:0x101a13d4
10004c1d:	10 
10004c1e:	0f 2f 41 64          	comiss xmm0,DWORD PTR [ecx+0x64]
10004c22:	0f 87 6a 02 00 00    	ja     0x10004e92
10004c28:	f3 0f 10 41 5c       	movss  xmm0,DWORD PTR [ecx+0x5c]
10004c2d:	8d 45 d8             	lea    eax,[ebp-0x28]
10004c30:	f3 0f 11 45 d8       	movss  DWORD PTR [ebp-0x28],xmm0
10004c35:	f3 0f 10 41 60       	movss  xmm0,DWORD PTR [ecx+0x60]
10004c3a:	50                   	push   eax
10004c3b:	f3 0f 11 45 dc       	movss  DWORD PTR [ebp-0x24],xmm0
10004c40:	c7 45 e0 00 00 00 00 	mov    DWORD PTR [ebp-0x20],0x0
10004c47:	e8 84 e7 ff ff       	call   0x100033d0
10004c4c:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10004c51:	d9 9d 6c ff ff ff    	fstp   DWORD PTR [ebp-0x94]
10004c57:	f3 0f 10 40 14       	movss  xmm0,DWORD PTR [eax+0x14]
10004c5c:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
10004c61:	f3 0f 10 40 18       	movss  xmm0,DWORD PTR [eax+0x18]
10004c66:	8d 45 f0             	lea    eax,[ebp-0x10]
10004c69:	50                   	push   eax
10004c6a:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
10004c6f:	c7 45 f8 00 00 00 00 	mov    DWORD PTR [ebp-0x8],0x0
10004c76:	e8 55 e7 ff ff       	call   0x100033d0
10004c7b:	f3 0f 10 85 6c ff ff 	movss  xmm0,DWORD PTR [ebp-0x94]
10004c82:	ff 
10004c83:	83 c4 08             	add    esp,0x8
10004c86:	0f 57 d2             	xorps  xmm2,xmm2
10004c89:	dd d8                	fstp   st(0)
10004c8b:	0f 2e c2             	ucomiss xmm0,xmm2
10004c8e:	9f                   	lahf
10004c8f:	f6 c4 44             	test   ah,0x44
10004c92:	7b 2f                	jnp    0x10004cc3
10004c94:	f3 0f 10 45 f0       	movss  xmm0,DWORD PTR [ebp-0x10]
10004c99:	f3 0f 10 4d f4       	movss  xmm1,DWORD PTR [ebp-0xc]
10004c9e:	f3 0f 59 45 d8       	mulss  xmm0,DWORD PTR [ebp-0x28]
10004ca3:	f3 0f 59 4d dc       	mulss  xmm1,DWORD PTR [ebp-0x24]
10004ca8:	f3 0f 58 c8          	addss  xmm1,xmm0
10004cac:	f3 0f 10 45 f8       	movss  xmm0,DWORD PTR [ebp-0x8]
10004cb1:	f3 0f 59 45 e0       	mulss  xmm0,DWORD PTR [ebp-0x20]
10004cb6:	f3 0f 58 c8          	addss  xmm1,xmm0
10004cba:	0f 2f d1             	comiss xmm2,xmm1
10004cbd:	0f 87 cf 01 00 00    	ja     0x10004e92
10004cc3:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10004cc8:	f3 0f 10 40 38       	movss  xmm0,DWORD PTR [eax+0x38]
10004ccd:	f3 0f 11 45 e4       	movss  DWORD PTR [ebp-0x1c],xmm0
10004cd2:	f3 0f 10 40 3c       	movss  xmm0,DWORD PTR [eax+0x3c]
10004cd7:	f3 0f 11 45 e8       	movss  DWORD PTR [ebp-0x18],xmm0
10004cdc:	f3 0f 10 40 40       	movss  xmm0,DWORD PTR [eax+0x40]
10004ce1:	8d 45 cc             	lea    eax,[ebp-0x34]
10004ce4:	f3 0f 58 05 d8 1e 1a 	addss  xmm0,DWORD PTR ds:0x101a1ed8
10004ceb:	10 
10004cec:	50                   	push   eax
10004ced:	8d 45 f0             	lea    eax,[ebp-0x10]
10004cf0:	50                   	push   eax
10004cf1:	51                   	push   ecx
10004cf2:	8d 45 e4             	lea    eax,[ebp-0x1c]
10004cf5:	c7 04 24 00 00 c0 41 	mov    DWORD PTR [esp],0x41c00000
10004cfc:	50                   	push   eax
10004cfd:	f3 0f 11 45 ec       	movss  DWORD PTR [ebp-0x14],xmm0
10004d02:	e8 c9 e5 ff ff       	call   0x100032d0
10004d07:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10004d0c:	6a ff                	push   0xffffffff
10004d0e:	6a 00                	push   0x0
10004d10:	8b b0 bc 00 00 00    	mov    esi,DWORD PTR [eax+0xbc]
10004d16:	c7 80 bc 00 00 00 02 	mov    DWORD PTR [eax+0xbc],0x2
10004d1d:	00 00 00 
10004d20:	8d 45 cc             	lea    eax,[ebp-0x34]
10004d23:	50                   	push   eax
10004d24:	8d 45 e4             	lea    eax,[ebp-0x1c]
10004d27:	50                   	push   eax
10004d28:	8d 85 20 ff ff ff    	lea    eax,[ebp-0xe0]
10004d2e:	50                   	push   eax
10004d2f:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10004d34:	8b 80 84 f5 04 00    	mov    eax,DWORD PTR [eax+0x4f584]
10004d3a:	ff d0                	call   eax
10004d3c:	83 c4 24             	add    esp,0x24
10004d3f:	0f 10 00             	movups xmm0,XMMWORD PTR [eax]
10004d42:	0f 11 85 70 ff ff ff 	movups XMMWORD PTR [ebp-0x90],xmm0
10004d49:	0f 10 48 10          	movups xmm1,XMMWORD PTR [eax+0x10]
10004d4d:	0f 29 4d 80          	movaps XMMWORD PTR [ebp-0x80],xmm1
10004d51:	0f 10 40 20          	movups xmm0,XMMWORD PTR [eax+0x20]
10004d55:	0f 11 45 90          	movups XMMWORD PTR [ebp-0x70],xmm0
10004d59:	0f 10 40 30          	movups xmm0,XMMWORD PTR [eax+0x30]
10004d5d:	0f 11 45 a0          	movups XMMWORD PTR [ebp-0x60],xmm0
10004d61:	8b 40 40             	mov    eax,DWORD PTR [eax+0x40]
10004d64:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
10004d6b:	10 
10004d6c:	0f 2f c1             	comiss xmm0,xmm1
10004d6f:	89 45 b0             	mov    DWORD PTR [ebp-0x50],eax
10004d72:	0f 86 0f 01 00 00    	jbe    0x10004e87
10004d78:	f3 0f 10 4d 98       	movss  xmm1,DWORD PTR [ebp-0x68]
10004d7d:	f2 0f 10 05 00 1e 1a 	movsd  xmm0,QWORD PTR ds:0x101a1e00
10004d84:	10 
10004d85:	0f 5a c9             	cvtps2pd xmm1,xmm1
10004d88:	0f 54 0d 90 1f 1a 10 	andps  xmm1,XMMWORD PTR ds:0x101a1f90
10004d8f:	66 0f 2f c1          	comisd xmm0,xmm1
10004d93:	0f 86 ee 00 00 00    	jbe    0x10004e87
10004d99:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10004d9e:	8d 8e c4 69 00 00    	lea    ecx,[esi+0x69c4]
10004da4:	8d 0c 49             	lea    ecx,[ecx+ecx*2]
10004da7:	f3 0f 10 04 88       	movss  xmm0,DWORD PTR [eax+ecx*4]
10004dac:	8d 45 cc             	lea    eax,[ebp-0x34]
10004daf:	f3 0f 5c 05 d8 1e 1a 	subss  xmm0,DWORD PTR ds:0x101a1ed8
10004db6:	10 
10004db7:	50                   	push   eax
10004db8:	8d 45 f0             	lea    eax,[ebp-0x10]
10004dbb:	50                   	push   eax
10004dbc:	51                   	push   ecx
10004dbd:	f3 0f 58 45 ec       	addss  xmm0,DWORD PTR [ebp-0x14]
10004dc2:	8d 45 e4             	lea    eax,[ebp-0x1c]
10004dc5:	c7 04 24 00 00 c0 41 	mov    DWORD PTR [esp],0x41c00000
10004dcc:	50                   	push   eax
10004dcd:	f3 0f 11 45 ec       	movss  DWORD PTR [ebp-0x14],xmm0
10004dd2:	e8 f9 e4 ff ff       	call   0x100032d0
10004dd7:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10004ddc:	83 c4 10             	add    esp,0x10
10004ddf:	83 c0 68             	add    eax,0x68
10004de2:	50                   	push   eax
10004de3:	8d 45 90             	lea    eax,[ebp-0x70]
10004de6:	50                   	push   eax
10004de7:	51                   	push   ecx
10004de8:	c7 04 24 00 00 48 c2 	mov    DWORD PTR [esp],0xc2480000
10004def:	68 40 0c 22 10       	push   0x10220c40
10004df4:	e8 d7 e4 ff ff       	call   0x100032d0
10004df9:	6a ff                	push   0xffffffff
10004dfb:	6a 00                	push   0x0
10004dfd:	8d 45 cc             	lea    eax,[ebp-0x34]
10004e00:	50                   	push   eax
10004e01:	8d 45 e4             	lea    eax,[ebp-0x1c]
10004e04:	50                   	push   eax
10004e05:	8d 85 20 ff ff ff    	lea    eax,[ebp-0xe0]
10004e0b:	50                   	push   eax
10004e0c:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10004e11:	8b 80 84 f5 04 00    	mov    eax,DWORD PTR [eax+0x4f584]
10004e17:	ff d0                	call   eax
10004e19:	83 c4 24             	add    esp,0x24
10004e1c:	0f 10 00             	movups xmm0,XMMWORD PTR [eax]
10004e1f:	0f 11 85 70 ff ff ff 	movups XMMWORD PTR [ebp-0x90],xmm0
10004e26:	0f 10 48 10          	movups xmm1,XMMWORD PTR [eax+0x10]
10004e2a:	0f 2e 0d 90 13 1a 10 	ucomiss xmm1,DWORD PTR ds:0x101a1390
10004e31:	0f 29 4d 80          	movaps XMMWORD PTR [ebp-0x80],xmm1
10004e35:	0f 10 40 20          	movups xmm0,XMMWORD PTR [eax+0x20]
10004e39:	0f 11 45 90          	movups XMMWORD PTR [ebp-0x70],xmm0
10004e3d:	0f 10 40 30          	movups xmm0,XMMWORD PTR [eax+0x30]
10004e41:	0f 11 45 a0          	movups XMMWORD PTR [ebp-0x60],xmm0
10004e45:	8b 40 40             	mov    eax,DWORD PTR [eax+0x40]
10004e48:	89 45 b0             	mov    DWORD PTR [ebp-0x50],eax
10004e4b:	9f                   	lahf
10004e4c:	f6 c4 44             	test   ah,0x44
10004e4f:	7a 36                	jp     0x10004e87
10004e51:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10004e56:	c7 80 cc 00 00 00 00 	mov    DWORD PTR [eax+0xcc],0x44fa0000
10004e5d:	00 fa 44 
10004e60:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10004e65:	c7 40 64 00 00 61 43 	mov    DWORD PTR [eax+0x64],0x43610000
10004e6c:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10004e71:	83 88 c8 00 00 00 02 	or     DWORD PTR [eax+0xc8],0x2
10004e78:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10004e7d:	81 88 b8 00 00 00 00 	or     DWORD PTR [eax+0xb8],0x800
10004e84:	08 00 00 
10004e87:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10004e8c:	89 b0 bc 00 00 00    	mov    DWORD PTR [eax+0xbc],esi
10004e92:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10004e95:	33 cd                	xor    ecx,ebp
10004e97:	5e                   	pop    esi
10004e98:	e8 16 8d 13 00       	call   0x1013dbb3
10004e9d:	8b e5                	mov    esp,ebp
10004e9f:	5d                   	pop    ebp
10004ea0:	8b e3                	mov    esp,ebx
10004ea2:	5b                   	pop    ebx
10004ea3:	c3                   	ret
