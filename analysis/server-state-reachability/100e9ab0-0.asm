
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e9ab0 <.text+0xe8ab0>:
100e9ab0:	55                   	push   ebp
100e9ab1:	8b ec                	mov    ebp,esp
100e9ab3:	f3 0f 10 0d a0 1e 1a 10 	movss  xmm1,DWORD PTR ds:0x101a1ea0
100e9abb:	83 ec 18             	sub    esp,0x18
100e9abe:	56                   	push   esi
100e9abf:	8b f1                	mov    esi,ecx
100e9ac1:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100e9ac7:	57                   	push   edi
100e9ac8:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100e9acb:	f3 0f 10 82 60 02 00 00 	movss  xmm0,DWORD PTR [edx+0x260]
100e9ad3:	0f 2e c1             	ucomiss xmm0,xmm1
100e9ad6:	9f                   	lahf
100e9ad7:	f6 c4 44             	test   ah,0x44
100e9ada:	0f 8a 75 01 00 00    	jp     0x100e9c55
100e9ae0:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
100e9ae4:	0f 2f 86 fc 04 00 00 	comiss xmm0,DWORD PTR [esi+0x4fc]
100e9aeb:	0f 86 64 01 00 00    	jbe    0x100e9c55
100e9af1:	c7 82 74 01 00 00 00 00 00 00 	mov    DWORD PTR [edx+0x174],0x0
100e9afb:	0f 57 c0             	xorps  xmm0,xmm0
100e9afe:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e9b01:	bf 01 00 00 00       	mov    edi,0x1
100e9b06:	53                   	push   ebx
100e9b07:	c7 80 08 01 00 00 03 00 00 00 	mov    DWORD PTR [eax+0x108],0x3
100e9b11:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e9b14:	81 a0 a8 01 00 00 ff fd ff ff 	and    DWORD PTR [eax+0x1a8],0xfffffdff
100e9b1e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e9b21:	c7 80 64 01 00 00 00 00 f0 41 	mov    DWORD PTR [eax+0x164],0x41f00000
100e9b2b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e9b2e:	f3 0f 10 88 64 01 00 00 	movss  xmm1,DWORD PTR [eax+0x164]
100e9b36:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e9b3b:	f3 0f 5f c8          	maxss  xmm1,xmm0
100e9b3f:	f3 0f 2c d9          	cvttss2si ebx,xmm1
100e9b43:	39 b8 90 00 00 00    	cmp    DWORD PTR [eax+0x90],edi
100e9b49:	7c 7d                	jl     0x100e9bc8
100e9b4b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100e9b50:	57                   	push   edi
100e9b51:	e8 2a fb 02 00       	call   0x10119680
100e9b56:	83 c4 04             	add    esp,0x4
100e9b59:	85 c0                	test   eax,eax
100e9b5b:	74 5d                	je     0x100e9bba
100e9b5d:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100e9b60:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e9b66:	6a 00                	push   0x0
100e9b68:	ff 35 d0 64 22 10    	push   DWORD PTR ds:0x102264d0
100e9b6e:	6a 01                	push   0x1
100e9b70:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100e9b76:	53                   	push   ebx
100e9b77:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e9b7d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e9b80:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e9b86:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
100e9b8c:	50                   	push   eax
100e9b8d:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e9b93:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100e9b99:	83 c4 1c             	add    esp,0x1c
100e9b9c:	8b 01                	mov    eax,DWORD PTR [ecx]
100e9b9e:	ff 50 20             	call   DWORD PTR [eax+0x20]
100e9ba1:	85 c0                	test   eax,eax
100e9ba3:	74 04                	je     0x100e9ba9
100e9ba5:	6a 01                	push   0x1
100e9ba7:	eb 02                	jmp    0x100e9bab
100e9ba9:	6a 00                	push   0x0
100e9bab:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e9bb1:	83 c4 04             	add    esp,0x4
100e9bb4:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100e9bba:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e9bbf:	47                   	inc    edi
100e9bc0:	3b b8 90 00 00 00    	cmp    edi,DWORD PTR [eax+0x90]
100e9bc6:	7e 88                	jle    0x100e9b50
100e9bc8:	8b 8e 2c 25 00 00    	mov    ecx,DWORD PTR [esi+0x252c]
100e9bce:	5b                   	pop    ebx
100e9bcf:	85 c9                	test   ecx,ecx
100e9bd1:	74 56                	je     0x100e9c29
100e9bd3:	8b 01                	mov    eax,DWORD PTR [ecx]
100e9bd5:	ff 90 44 01 00 00    	call   DWORD PTR [eax+0x144]
100e9bdb:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e9bde:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e9be4:	6a 00                	push   0x0
100e9be6:	ff 35 cc 64 22 10    	push   DWORD PTR ds:0x102264cc
100e9bec:	6a 01                	push   0x1
100e9bee:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100e9bf4:	6a 01                	push   0x1
100e9bf6:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e9bfc:	8b 86 2c 25 00 00    	mov    eax,DWORD PTR [esi+0x252c]
100e9c02:	ff b0 68 01 00 00    	push   DWORD PTR [eax+0x168]
100e9c08:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e9c0e:	8b 86 2c 25 00 00    	mov    eax,DWORD PTR [esi+0x252c]
100e9c14:	ff b0 e4 01 00 00    	push   DWORD PTR [eax+0x1e4]
100e9c1a:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e9c20:	83 c4 1c             	add    esp,0x1c
100e9c23:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100e9c29:	8b ce                	mov    ecx,esi
100e9c2b:	e8 c0 cb 00 00       	call   0x100f67f0
100e9c30:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e9c33:	6a 00                	push   0x0
100e9c35:	6a 04                	push   0x4
100e9c37:	68 b0 5f 1b 10       	push   0x101b5fb0
100e9c3c:	56                   	push   esi
100e9c3d:	c7 80 60 02 00 00 00 00 00 00 	mov    DWORD PTR [eax+0x260],0x0
100e9c47:	e8 c4 fb 02 00       	call   0x10119810
100e9c4c:	83 c4 10             	add    esp,0x10
100e9c4f:	5f                   	pop    edi
100e9c50:	5e                   	pop    esi
100e9c51:	8b e5                	mov    esp,ebp
100e9c53:	5d                   	pop    ebp
100e9c54:	c3                   	ret
100e9c55:	80 be e8 04 00 00 01 	cmp    BYTE PTR [esi+0x4e8],0x1
100e9c5c:	0f 85 ae 00 00 00    	jne    0x100e9d10
100e9c62:	83 be f0 04 00 00 00 	cmp    DWORD PTR [esi+0x4f0],0x0
100e9c69:	0f 8f a1 00 00 00    	jg     0x100e9d10
100e9c6f:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
100e9c73:	0f 2f 86 24 1f 00 00 	comiss xmm0,DWORD PTR [esi+0x1f24]
100e9c7a:	0f 86 90 00 00 00    	jbe    0x100e9d10
100e9c80:	80 be 28 1f 00 00 00 	cmp    BYTE PTR [esi+0x1f28],0x0
100e9c87:	0f 85 83 00 00 00    	jne    0x100e9d10
100e9c8d:	8b 15 e4 2e 22 10    	mov    edx,DWORD PTR ds:0x10222ee4
100e9c93:	85 d2                	test   edx,edx
100e9c95:	74 79                	je     0x100e9d10
100e9c97:	8b 02                	mov    eax,DWORD PTR [edx]
100e9c99:	8b ca                	mov    ecx,edx
100e9c9b:	ff 50 20             	call   DWORD PTR [eax+0x20]
100e9c9e:	85 c0                	test   eax,eax
100e9ca0:	74 60                	je     0x100e9d02
100e9ca2:	c6 86 28 1f 00 00 01 	mov    BYTE PTR [esi+0x1f28],0x1
100e9ca9:	83 3d 10 2e 22 10 00 	cmp    DWORD PTR ds:0x10222e10,0x0
100e9cb0:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100e9cb6:	74 35                	je     0x100e9ced
100e9cb8:	bf 01 00 00 00       	mov    edi,0x1
100e9cbd:	39 b9 90 00 00 00    	cmp    DWORD PTR [ecx+0x90],edi
100e9cc3:	7c 28                	jl     0x100e9ced
100e9cc5:	57                   	push   edi
100e9cc6:	e8 b5 f9 02 00       	call   0x10119680
100e9ccb:	83 c4 04             	add    esp,0x4
100e9cce:	85 c0                	test   eax,eax
100e9cd0:	74 0c                	je     0x100e9cde
100e9cd2:	8b 0d 10 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222e10
100e9cd8:	50                   	push   eax
100e9cd9:	e8 a2 07 f4 ff       	call   0x1002a480
100e9cde:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100e9ce4:	47                   	inc    edi
100e9ce5:	3b b9 90 00 00 00    	cmp    edi,DWORD PTR [ecx+0x90]
100e9ceb:	7e d8                	jle    0x100e9cc5
100e9ced:	8b 81 98 00 00 00    	mov    eax,DWORD PTR [ecx+0x98]
100e9cf3:	03 41 0c             	add    eax,DWORD PTR [ecx+0xc]
100e9cf6:	6a 00                	push   0x0
100e9cf8:	50                   	push   eax
100e9cf9:	ff 15 60 2f 22 10    	call   DWORD PTR ds:0x10222f60
100e9cff:	83 c4 08             	add    esp,0x8
100e9d02:	f3 0f 10 0d a0 1e 1a 10 	movss  xmm1,DWORD PTR ds:0x101a1ea0
100e9d0a:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100e9d10:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100e9d13:	f3 0f 10 82 60 02 00 00 	movss  xmm0,DWORD PTR [edx+0x260]
100e9d1b:	0f 2e c1             	ucomiss xmm0,xmm1
100e9d1e:	9f                   	lahf
100e9d1f:	f6 c4 44             	test   ah,0x44
100e9d22:	7a 2d                	jp     0x100e9d51
100e9d24:	f3 0f 10 86 fc 04 00 00 	movss  xmm0,DWORD PTR [esi+0x4fc]
100e9d2c:	0f 2f 01             	comiss xmm0,DWORD PTR [ecx]
100e9d2f:	76 20                	jbe    0x100e9d51
100e9d31:	83 ba 74 01 00 00 02 	cmp    DWORD PTR [edx+0x174],0x2
100e9d38:	75 17                	jne    0x100e9d51
100e9d3a:	51                   	push   ecx
100e9d3b:	8b ce                	mov    ecx,esi
100e9d3d:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100e9d44:	e8 57 50 f2 ff       	call   0x1000eda0
100e9d49:	5f                   	pop    edi
100e9d4a:	dd d8                	fstp   st(0)
100e9d4c:	5e                   	pop    esi
100e9d4d:	8b e5                	mov    esp,ebp
100e9d4f:	5d                   	pop    ebp
100e9d50:	c3                   	ret
100e9d51:	83 ba b4 00 00 00 00 	cmp    DWORD PTR [edx+0xb4],0x0
100e9d58:	74 4c                	je     0x100e9da6
100e9d5a:	83 be f8 00 00 00 00 	cmp    DWORD PTR [esi+0xf8],0x0
100e9d61:	75 43                	jne    0x100e9da6
100e9d63:	83 ba 74 01 00 00 01 	cmp    DWORD PTR [edx+0x174],0x1
100e9d6a:	75 3a                	jne    0x100e9da6
100e9d6c:	51                   	push   ecx
100e9d6d:	8b ce                	mov    ecx,esi
100e9d6f:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100e9d76:	e8 25 50 f2 ff       	call   0x1000eda0
100e9d7b:	f3 0f 10 8e 54 26 00 00 	movss  xmm1,DWORD PTR [esi+0x2654]
100e9d83:	dd d8                	fstp   st(0)
100e9d85:	f3 0f 58 0d 90 13 1a 10 	addss  xmm1,DWORD PTR ds:0x101a1390
100e9d8d:	f3 0f 10 05 20 1f 1a 10 	movss  xmm0,DWORD PTR ds:0x101a1f20
100e9d95:	0f 2f c1             	comiss xmm0,xmm1
100e9d98:	f3 0f 11 8e 54 26 00 00 	movss  DWORD PTR [esi+0x2654],xmm1
100e9da0:	0f 87 9b 00 00 00    	ja     0x100e9e41
100e9da6:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100e9da9:	8b c1                	mov    eax,ecx
100e9dab:	83 b9 08 01 00 00 00 	cmp    DWORD PTR [ecx+0x108],0x0
100e9db2:	74 19                	je     0x100e9dcd
100e9db4:	f7 81 a8 01 00 00 00 02 00 00 	test   DWORD PTR [ecx+0x1a8],0x200
100e9dbe:	74 0d                	je     0x100e9dcd
100e9dc0:	c7 81 08 01 00 00 00 00 00 00 	mov    DWORD PTR [ecx+0x108],0x0
100e9dca:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e9dcd:	83 b8 74 01 00 00 01 	cmp    DWORD PTR [eax+0x174],0x1
100e9dd4:	75 0d                	jne    0x100e9de3
100e9dd6:	c7 80 74 01 00 00 02 00 00 00 	mov    DWORD PTR [eax+0x174],0x2
100e9de0:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e9de3:	c7 80 3c 01 00 00 00 00 00 00 	mov    DWORD PTR [eax+0x13c],0x0
100e9ded:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e9df0:	c7 45 f4 00 00 80 41 	mov    DWORD PTR [ebp-0xc],0x41800000
100e9df7:	c7 45 f8 00 00 80 41 	mov    DWORD PTR [ebp-0x8],0x41800000
100e9dfe:	c7 45 fc 00 00 10 42 	mov    DWORD PTR [ebp-0x4],0x42100000
100e9e05:	83 88 18 01 00 00 20 	or     DWORD PTR [eax+0x118],0x20
100e9e0c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e9e0f:	c7 45 e8 00 00 80 c1 	mov    DWORD PTR [ebp-0x18],0xc1800000
100e9e16:	c7 45 ec 00 00 80 c1 	mov    DWORD PTR [ebp-0x14],0xc1800000
100e9e1d:	c7 45 f0 00 00 10 c2 	mov    DWORD PTR [ebp-0x10],0xc2100000
100e9e24:	c7 80 3c 01 00 00 00 00 00 00 	mov    DWORD PTR [eax+0x13c],0x0
100e9e2e:	8d 45 f4             	lea    eax,[ebp-0xc]
100e9e31:	50                   	push   eax
100e9e32:	8d 45 e8             	lea    eax,[ebp-0x18]
100e9e35:	50                   	push   eax
100e9e36:	ff 76 04             	push   DWORD PTR [esi+0x4]
100e9e39:	e8 f2 01 03 00       	call   0x1011a030
100e9e3e:	83 c4 0c             	add    esp,0xc
100e9e41:	5f                   	pop    edi
100e9e42:	5e                   	pop    esi
100e9e43:	8b e5                	mov    esp,ebp
100e9e45:	5d                   	pop    ebp
100e9e46:	c3                   	ret
