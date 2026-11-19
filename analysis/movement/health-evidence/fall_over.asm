
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f6aa0 <.text+0xf5aa0>:
100f6aa0:	56                   	push   esi
100f6aa1:	6a 03                	push   0x3
100f6aa3:	6a 00                	push   0x0
100f6aa5:	8b f1                	mov    esi,ecx
100f6aa7:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100f6aad:	83 c4 08             	add    esp,0x8
100f6ab0:	83 f8 03             	cmp    eax,0x3
100f6ab3:	0f 87 8c 00 00 00    	ja     0x100f6b45
100f6ab9:	ff 24 85 90 6c 0f 10 	jmp    DWORD PTR [eax*4+0x100f6c90]
100f6ac0:	6a 5a                	push   0x5a
100f6ac2:	6a 00                	push   0x0
100f6ac4:	83 ec 08             	sub    esp,0x8
100f6ac7:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100f6ace:	3f 
100f6acf:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100f6ad6:	68 a4 cc 1d 10       	push   0x101dcca4
100f6adb:	eb 55                	jmp    0x100f6b32
100f6add:	6a 5a                	push   0x5a
100f6adf:	6a 00                	push   0x0
100f6ae1:	83 ec 08             	sub    esp,0x8
100f6ae4:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100f6aeb:	3f 
100f6aec:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100f6af3:	68 bc cc 1d 10       	push   0x101dccbc
100f6af8:	eb 38                	jmp    0x100f6b32
100f6afa:	6a 5a                	push   0x5a
100f6afc:	6a 00                	push   0x0
100f6afe:	83 ec 08             	sub    esp,0x8
100f6b01:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100f6b08:	3f 
100f6b09:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100f6b10:	68 3c 50 1d 10       	push   0x101d503c
100f6b15:	eb 1b                	jmp    0x100f6b32
100f6b17:	6a 5a                	push   0x5a
100f6b19:	6a 00                	push   0x0
100f6b1b:	83 ec 08             	sub    esp,0x8
100f6b1e:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100f6b25:	3f 
100f6b26:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100f6b2d:	68 54 50 1d 10       	push   0x101d5054
100f6b32:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f6b35:	6a 00                	push   0x0
100f6b37:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f6b3d:	e8 ae 5e 00 00       	call   0x100fc9f0
100f6b42:	83 c4 1c             	add    esp,0x1c
100f6b45:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f6b48:	f3 0f 10 0d d8 1d 1a 	movss  xmm1,DWORD PTR ds:0x101a1dd8
100f6b4f:	10 
100f6b50:	f3 0f 10 40 20       	movss  xmm0,DWORD PTR [eax+0x20]
100f6b55:	f3 0f 59 c1          	mulss  xmm0,xmm1
100f6b59:	f3 0f 11 40 20       	movss  DWORD PTR [eax+0x20],xmm0
100f6b5e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f6b61:	f3 0f 10 40 24       	movss  xmm0,DWORD PTR [eax+0x24]
100f6b66:	f3 0f 59 c1          	mulss  xmm0,xmm1
100f6b6a:	f3 0f 11 40 24       	movss  DWORD PTR [eax+0x24],xmm0
100f6b6f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f6b72:	f3 0f 10 40 28       	movss  xmm0,DWORD PTR [eax+0x28]
100f6b77:	f3 0f 59 c1          	mulss  xmm0,xmm1
100f6b7b:	f3 0f 11 40 28       	movss  DWORD PTR [eax+0x28],xmm0
100f6b80:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f6b85:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100f6b89:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f6b8c:	0f 5a c0             	cvtps2pd xmm0,xmm0
100f6b8f:	c6 86 d0 1e 00 00 01 	mov    BYTE PTR [esi+0x1ed0],0x1
100f6b96:	f2 0f 58 05 68 1e 1a 	addsd  xmm0,QWORD PTR ds:0x101a1e68
100f6b9d:	10 
100f6b9e:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100f6ba2:	f3 0f 11 86 cc 1e 00 	movss  DWORD PTR [esi+0x1ecc],xmm0
100f6ba9:	00 
100f6baa:	c7 80 60 02 00 00 00 	mov    DWORD PTR [eax+0x260],0x3f800000
100f6bb1:	00 80 3f 
100f6bb4:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f6bb7:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f6bbd:	6a 00                	push   0x0
100f6bbf:	ff 35 b4 65 22 10    	push   DWORD PTR ds:0x102265b4
100f6bc5:	6a 01                	push   0x1
100f6bc7:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f6bcd:	6a 01                	push   0x1
100f6bcf:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f6bd5:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f6bdb:	6a 23                	push   0x23
100f6bdd:	6a dd                	push   0xffffffdd
100f6bdf:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100f6be5:	83 c4 18             	add    esp,0x18
100f6be8:	66 0f 6e c0          	movd   xmm0,eax
100f6bec:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100f6bef:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100f6bf4:	6a 23                	push   0x23
100f6bf6:	6a dd                	push   0xffffffdd
100f6bf8:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100f6bfe:	8b ce                	mov    ecx,esi
100f6c00:	66 0f 6e c0          	movd   xmm0,eax
100f6c04:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100f6c07:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100f6c0d:	c7 04 24 00 00 f0 c1 	mov    DWORD PTR [esp],0xc1f00000
100f6c14:	e8 97 25 00 00       	call   0x100f91b0
100f6c19:	8b ce                	mov    ecx,esi
100f6c1b:	e8 90 32 ff ff       	call   0x100e9eb0
100f6c20:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f6c23:	81 a0 a8 01 00 00 ff 	and    DWORD PTR [eax+0x1a8],0xfffbffff
100f6c2a:	ff fb ff 
100f6c2d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f6c30:	8a 8e c8 1e 00 00    	mov    cl,BYTE PTR [esi+0x1ec8]
100f6c36:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x80000
100f6c3d:	00 08 00 
100f6c40:	75 0e                	jne    0x100f6c50
100f6c42:	84 c9                	test   cl,cl
100f6c44:	75 18                	jne    0x100f6c5e
100f6c46:	f3 0f 10 05 b0 68 22 	movss  xmm0,DWORD PTR ds:0x102268b0
100f6c4d:	10 
100f6c4e:	eb 16                	jmp    0x100f6c66
100f6c50:	84 c9                	test   cl,cl
100f6c52:	75 0a                	jne    0x100f6c5e
100f6c54:	f3 0f 10 05 b4 68 22 	movss  xmm0,DWORD PTR ds:0x102268b4
100f6c5b:	10 
100f6c5c:	eb 08                	jmp    0x100f6c66
100f6c5e:	f3 0f 10 05 bc 68 22 	movss  xmm0,DWORD PTR ds:0x102268bc
100f6c65:	10 
100f6c66:	f3 0f 11 80 14 02 00 	movss  DWORD PTR [eax+0x214],xmm0
100f6c6d:	00 
100f6c6e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f6c71:	f3 0f 10 05 f4 1e 1a 	movss  xmm0,DWORD PTR ds:0x101a1ef4
100f6c78:	10 
100f6c79:	5e                   	pop    esi
100f6c7a:	0f 2f 80 14 02 00 00 	comiss xmm0,DWORD PTR [eax+0x214]
100f6c81:	76 0a                	jbe    0x100f6c8d
100f6c83:	c7 80 14 02 00 00 00 	mov    DWORD PTR [eax+0x214],0x41f00000
100f6c8a:	00 f0 41 
100f6c8d:	c3                   	ret
