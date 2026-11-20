
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f3d90 <.text+0xf2d90>:
100f3d90:	55                   	push   ebp
100f3d91:	8b ec                	mov    ebp,esp
100f3d93:	81 ec 94 00 00 00    	sub    esp,0x94
100f3d99:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100f3d9e:	33 c5                	xor    eax,ebp
100f3da0:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100f3da3:	53                   	push   ebx
100f3da4:	8b d9                	mov    ebx,ecx
100f3da6:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100f3dac:	89 9d 6c ff ff ff    	mov    DWORD PTR [ebp-0x94],ebx
100f3db2:	56                   	push   esi
100f3db3:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100f3db6:	89 b5 78 ff ff ff    	mov    DWORD PTR [ebp-0x88],esi
100f3dbc:	85 c9                	test   ecx,ecx
100f3dbe:	74 0d                	je     0x100f3dcd
100f3dc0:	8b 01                	mov    eax,DWORD PTR [ecx]
100f3dc2:	ff 50 20             	call   DWORD PTR [eax+0x20]
100f3dc5:	85 c0                	test   eax,eax
100f3dc7:	0f 85 45 02 00 00    	jne    0x100f4012
100f3dcd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f3dd2:	57                   	push   edi
100f3dd3:	bf 01 00 00 00       	mov    edi,0x1
100f3dd8:	8b 90 98 00 00 00    	mov    edx,DWORD PTR [eax+0x98]
100f3dde:	89 95 74 ff ff ff    	mov    DWORD PTR [ebp-0x8c],edx
100f3de4:	8d 04 32             	lea    eax,[edx+esi*1]
100f3de7:	8d b3 14 05 00 00    	lea    esi,[ebx+0x514]
100f3ded:	89 85 70 ff ff ff    	mov    DWORD PTR [ebp-0x90],eax
100f3df3:	8b de                	mov    ebx,esi
100f3df5:	8b c8                	mov    ecx,eax
100f3df7:	8b 03                	mov    eax,DWORD PTR [ebx]
100f3df9:	03 c2                	add    eax,edx
100f3dfb:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100f3e00:	8a 10                	mov    dl,BYTE PTR [eax]
100f3e02:	3a 11                	cmp    dl,BYTE PTR [ecx]
100f3e04:	75 1a                	jne    0x100f3e20
100f3e06:	84 d2                	test   dl,dl
100f3e08:	74 12                	je     0x100f3e1c
100f3e0a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100f3e0d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100f3e10:	75 0e                	jne    0x100f3e20
100f3e12:	83 c0 02             	add    eax,0x2
100f3e15:	83 c1 02             	add    ecx,0x2
100f3e18:	84 d2                	test   dl,dl
100f3e1a:	75 e4                	jne    0x100f3e00
100f3e1c:	33 c0                	xor    eax,eax
100f3e1e:	eb 05                	jmp    0x100f3e25
100f3e20:	1b c0                	sbb    eax,eax
100f3e22:	83 c8 01             	or     eax,0x1
100f3e25:	85 c0                	test   eax,eax
100f3e27:	0f 84 e4 01 00 00    	je     0x100f4011
100f3e2d:	8b 95 74 ff ff ff    	mov    edx,DWORD PTR [ebp-0x8c]
100f3e33:	47                   	inc    edi
100f3e34:	8b 85 70 ff ff ff    	mov    eax,DWORD PTR [ebp-0x90]
100f3e3a:	83 c3 04             	add    ebx,0x4
100f3e3d:	83 ff 20             	cmp    edi,0x20
100f3e40:	7c b3                	jl     0x100f3df5
100f3e42:	b8 01 00 00 00       	mov    eax,0x1
100f3e47:	83 3e 00             	cmp    DWORD PTR [esi],0x0
100f3e4a:	74 1c                	je     0x100f3e68
100f3e4c:	40                   	inc    eax
100f3e4d:	83 c6 04             	add    esi,0x4
100f3e50:	83 f8 20             	cmp    eax,0x20
100f3e53:	7c f2                	jl     0x100f3e47
100f3e55:	5f                   	pop    edi
100f3e56:	5e                   	pop    esi
100f3e57:	5b                   	pop    ebx
100f3e58:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100f3e5b:	33 cd                	xor    ecx,ebp
100f3e5d:	e8 51 9d 04 00       	call   0x1013dbb3
100f3e62:	8b e5                	mov    esp,ebp
100f3e64:	5d                   	pop    ebp
100f3e65:	c2 08 00             	ret    0x8
100f3e68:	8b b5 6c ff ff ff    	mov    esi,DWORD PTR [ebp-0x94]
100f3e6e:	8b bd 78 ff ff ff    	mov    edi,DWORD PTR [ebp-0x88]
100f3e74:	68 bc 8b 1a 10       	push   0x101a8bbc
100f3e79:	89 bc 86 10 05 00 00 	mov    DWORD PTR [esi+eax*4+0x510],edi
100f3e80:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
100f3e86:	d9 9d 78 ff ff ff    	fstp   DWORD PTR [ebp-0x88]
100f3e8c:	f3 0f 2c 85 78 ff ff 	cvttss2si eax,DWORD PTR [ebp-0x88]
100f3e93:	ff 
100f3e94:	83 c4 04             	add    esp,0x4
100f3e97:	83 f8 07             	cmp    eax,0x7
100f3e9a:	0f 87 0e 01 00 00    	ja     0x100f3fae
100f3ea0:	ff 24 85 24 40 0f 10 	jmp    DWORD PTR [eax*4+0x100f4024]
100f3ea7:	0f 10 05 2c b4 1d 10 	movups xmm0,XMMWORD PTR ds:0x101db42c
100f3eae:	66 a1 4c b4 1d 10    	mov    ax,ds:0x101db44c
100f3eb4:	66 89 45 9c          	mov    WORD PTR [ebp-0x64],ax
100f3eb8:	a0 4e b4 1d 10       	mov    al,ds:0x101db44e
100f3ebd:	0f 11 85 7c ff ff ff 	movups XMMWORD PTR [ebp-0x84],xmm0
100f3ec4:	88 45 9e             	mov    BYTE PTR [ebp-0x62],al
100f3ec7:	0f 10 05 3c b4 1d 10 	movups xmm0,XMMWORD PTR ds:0x101db43c
100f3ece:	0f 11 45 8c          	movups XMMWORD PTR [ebp-0x74],xmm0
100f3ed2:	e9 f7 00 00 00       	jmp    0x100f3fce
100f3ed7:	0f 10 05 50 b4 1d 10 	movups xmm0,XMMWORD PTR ds:0x101db450
100f3ede:	a1 70 b4 1d 10       	mov    eax,ds:0x101db470
100f3ee3:	89 45 9c             	mov    DWORD PTR [ebp-0x64],eax
100f3ee6:	0f 11 85 7c ff ff ff 	movups XMMWORD PTR [ebp-0x84],xmm0
100f3eed:	0f 10 05 60 b4 1d 10 	movups xmm0,XMMWORD PTR ds:0x101db460
100f3ef4:	0f 11 45 8c          	movups XMMWORD PTR [ebp-0x74],xmm0
100f3ef8:	e9 d1 00 00 00       	jmp    0x100f3fce
100f3efd:	0f 10 05 74 b4 1d 10 	movups xmm0,XMMWORD PTR ds:0x101db474
100f3f04:	a1 94 b4 1d 10       	mov    eax,ds:0x101db494
100f3f09:	89 45 9c             	mov    DWORD PTR [ebp-0x64],eax
100f3f0c:	0f 11 85 7c ff ff ff 	movups XMMWORD PTR [ebp-0x84],xmm0
100f3f13:	0f 10 05 84 b4 1d 10 	movups xmm0,XMMWORD PTR ds:0x101db484
100f3f1a:	0f 11 45 8c          	movups XMMWORD PTR [ebp-0x74],xmm0
100f3f1e:	e9 ab 00 00 00       	jmp    0x100f3fce
100f3f23:	0f 10 05 98 b4 1d 10 	movups xmm0,XMMWORD PTR ds:0x101db498
100f3f2a:	a1 b8 b4 1d 10       	mov    eax,ds:0x101db4b8
100f3f2f:	89 45 9c             	mov    DWORD PTR [ebp-0x64],eax
100f3f32:	66 a1 bc b4 1d 10    	mov    ax,ds:0x101db4bc
100f3f38:	0f 11 85 7c ff ff ff 	movups XMMWORD PTR [ebp-0x84],xmm0
100f3f3f:	66 89 45 a0          	mov    WORD PTR [ebp-0x60],ax
100f3f43:	0f 10 05 a8 b4 1d 10 	movups xmm0,XMMWORD PTR ds:0x101db4a8
100f3f4a:	a0 be b4 1d 10       	mov    al,ds:0x101db4be
100f3f4f:	88 45 a2             	mov    BYTE PTR [ebp-0x5e],al
100f3f52:	0f 11 45 8c          	movups XMMWORD PTR [ebp-0x74],xmm0
100f3f56:	eb 76                	jmp    0x100f3fce
100f3f58:	0f 10 05 c0 b4 1d 10 	movups xmm0,XMMWORD PTR ds:0x101db4c0
100f3f5f:	a1 e0 b4 1d 10       	mov    eax,ds:0x101db4e0
100f3f64:	89 45 9c             	mov    DWORD PTR [ebp-0x64],eax
100f3f67:	a0 e4 b4 1d 10       	mov    al,ds:0x101db4e4
100f3f6c:	0f 11 85 7c ff ff ff 	movups XMMWORD PTR [ebp-0x84],xmm0
100f3f73:	88 45 a0             	mov    BYTE PTR [ebp-0x60],al
100f3f76:	0f 10 05 d0 b4 1d 10 	movups xmm0,XMMWORD PTR ds:0x101db4d0
100f3f7d:	0f 11 45 8c          	movups XMMWORD PTR [ebp-0x74],xmm0
100f3f81:	eb 4b                	jmp    0x100f3fce
100f3f83:	0f 10 05 e8 b4 1d 10 	movups xmm0,XMMWORD PTR ds:0x101db4e8
100f3f8a:	a1 08 b5 1d 10       	mov    eax,ds:0x101db508
100f3f8f:	89 45 9c             	mov    DWORD PTR [ebp-0x64],eax
100f3f92:	a0 0c b5 1d 10       	mov    al,ds:0x101db50c
100f3f97:	0f 11 85 7c ff ff ff 	movups XMMWORD PTR [ebp-0x84],xmm0
100f3f9e:	88 45 a0             	mov    BYTE PTR [ebp-0x60],al
100f3fa1:	0f 10 05 f8 b4 1d 10 	movups xmm0,XMMWORD PTR ds:0x101db4f8
100f3fa8:	0f 11 45 8c          	movups XMMWORD PTR [ebp-0x74],xmm0
100f3fac:	eb 20                	jmp    0x100f3fce
100f3fae:	66 a1 28 b4 1d 10    	mov    ax,ds:0x101db428
100f3fb4:	0f 10 05 18 b4 1d 10 	movups xmm0,XMMWORD PTR ds:0x101db418
100f3fbb:	66 89 45 8c          	mov    WORD PTR [ebp-0x74],ax
100f3fbf:	a0 2a b4 1d 10       	mov    al,ds:0x101db42a
100f3fc4:	0f 11 85 7c ff ff ff 	movups XMMWORD PTR [ebp-0x84],xmm0
100f3fcb:	88 45 8e             	mov    BYTE PTR [ebp-0x72],al
100f3fce:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f3fd1:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f3fd7:	6a 00                	push   0x0
100f3fd9:	ff 35 74 66 22 10    	push   DWORD PTR ds:0x10226674
100f3fdf:	6a 01                	push   0x1
100f3fe1:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f3fe7:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f3fec:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100f3ff2:	03 c7                	add    eax,edi
100f3ff4:	50                   	push   eax
100f3ff5:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100f3ffb:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
100f4001:	50                   	push   eax
100f4002:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100f4008:	83 c4 18             	add    esp,0x18
100f400b:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f4011:	5f                   	pop    edi
100f4012:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100f4015:	5e                   	pop    esi
100f4016:	33 cd                	xor    ecx,ebp
100f4018:	5b                   	pop    ebx
100f4019:	e8 95 9b 04 00       	call   0x1013dbb3
100f401e:	8b e5                	mov    esp,ebp
100f4020:	5d                   	pop    ebp
100f4021:	c2 08 00             	ret    0x8
