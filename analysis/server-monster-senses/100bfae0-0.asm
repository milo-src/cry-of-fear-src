
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bfae0 <.text+0xbeae0>:
100bfae0:	55                   	push   ebp
100bfae1:	8b ec                	mov    ebp,esp
100bfae3:	83 e4 f8             	and    esp,0xfffffff8
100bfae6:	83 ec 14             	sub    esp,0x14
100bfae9:	53                   	push   ebx
100bfaea:	56                   	push   esi
100bfaeb:	8b f1                	mov    esi,ecx
100bfaed:	57                   	push   edi
100bfaee:	8b 06                	mov    eax,DWORD PTR [esi]
100bfaf0:	81 a6 80 01 00 00 bf 	and    DWORD PTR [esi+0x180],0xfff9ffbf
100bfaf7:	ff f9 ff 
100bfafa:	c7 86 d4 02 00 00 ff 	mov    DWORD PTR [esi+0x2d4],0xffffffff
100bfb01:	ff ff ff 
100bfb04:	c7 86 d8 02 00 00 00 	mov    DWORD PTR [esi+0x2d8],0x0
100bfb0b:	00 00 00 
100bfb0e:	ff 90 e8 01 00 00    	call   DWORD PTR [eax+0x1e8]
100bfb14:	8b 8e 30 02 00 00    	mov    ecx,DWORD PTR [esi+0x230]
100bfb1a:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
100bfb1e:	85 c9                	test   ecx,ecx
100bfb20:	74 07                	je     0x100bfb29
100bfb22:	23 41 0c             	and    eax,DWORD PTR [ecx+0xc]
100bfb25:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
100bfb29:	e8 32 0a 04 00       	call   0x10100560
100bfb2e:	8b 16                	mov    edx,DWORD PTR [esi]
100bfb30:	8b ce                	mov    ecx,esi
100bfb32:	81 a6 80 01 00 00 bf 	and    DWORD PTR [esi+0x180],0xfff9ffbf
100bfb39:	ff f9 ff 
100bfb3c:	8b d8                	mov    ebx,eax
100bfb3e:	8b 92 f4 01 00 00    	mov    edx,DWORD PTR [edx+0x1f4]
100bfb44:	ff d2                	call   edx
100bfb46:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
100bfb4a:	83 fb ff             	cmp    ebx,0xffffffff
100bfb4d:	0f 84 e9 00 00 00    	je     0x100bfc3c
100bfb53:	53                   	push   ebx
100bfb54:	e8 b7 0d 04 00       	call   0x10100910
100bfb59:	8b f8                	mov    edi,eax
100bfb5b:	83 c4 04             	add    esp,0x4
100bfb5e:	85 ff                	test   edi,edi
100bfb60:	0f 84 ca 00 00 00    	je     0x100bfc30
100bfb66:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
100bfb6a:	85 47 0c             	test   DWORD PTR [edi+0xc],eax
100bfb6d:	0f 84 bd 00 00 00    	je     0x100bfc30
100bfb73:	8b 16                	mov    edx,DWORD PTR [esi]
100bfb75:	8d 44 24 14          	lea    eax,[esp+0x14]
100bfb79:	50                   	push   eax
100bfb7a:	8b ce                	mov    ecx,esi
100bfb7c:	ff 92 04 01 00 00    	call   DWORD PTR [edx+0x104]
100bfb82:	f3 0f 10 0f          	movss  xmm1,DWORD PTR [edi]
100bfb86:	f3 0f 10 57 04       	movss  xmm2,DWORD PTR [edi+0x4]
100bfb8b:	f3 0f 10 47 08       	movss  xmm0,DWORD PTR [edi+0x8]
100bfb90:	f3 0f 5c 50 04       	subss  xmm2,DWORD PTR [eax+0x4]
100bfb95:	f3 0f 5c 08          	subss  xmm1,DWORD PTR [eax]
100bfb99:	f3 0f 5c 40 08       	subss  xmm0,DWORD PTR [eax+0x8]
100bfb9e:	f3 0f 59 d2          	mulss  xmm2,xmm2
100bfba2:	f3 0f 59 c9          	mulss  xmm1,xmm1
100bfba6:	f3 0f 59 c0          	mulss  xmm0,xmm0
100bfbaa:	f3 0f 58 d1          	addss  xmm2,xmm1
100bfbae:	0f 57 c9             	xorps  xmm1,xmm1
100bfbb1:	f3 0f 58 d0          	addss  xmm2,xmm0
100bfbb5:	0f 5a c2             	cvtps2pd xmm0,xmm2
100bfbb8:	66 0f 2e c8          	ucomisd xmm1,xmm0
100bfbbc:	77 06                	ja     0x100bfbc4
100bfbbe:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100bfbc2:	eb 05                	jmp    0x100bfbc9
100bfbc4:	e8 c7 c2 0a 00       	call   0x1016be90
100bfbc9:	0f 57 c9             	xorps  xmm1,xmm1
100bfbcc:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
100bfbd0:	66 0f 6e 47 10       	movd   xmm0,DWORD PTR [edi+0x10]
100bfbd5:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100bfbd8:	f3 0f 59 44 24 10    	mulss  xmm0,DWORD PTR [esp+0x10]
100bfbde:	0f 2f c1             	comiss xmm0,xmm1
100bfbe1:	72 4d                	jb     0x100bfc30
100bfbe3:	8b 86 d4 02 00 00    	mov    eax,DWORD PTR [esi+0x2d4]
100bfbe9:	8b cf                	mov    ecx,edi
100bfbeb:	89 47 1c             	mov    DWORD PTR [edi+0x1c],eax
100bfbee:	e8 fd 09 04 00       	call   0x101005f0
100bfbf3:	85 c0                	test   eax,eax
100bfbf5:	74 0c                	je     0x100bfc03
100bfbf7:	81 8e 80 01 00 00 00 	or     DWORD PTR [esi+0x180],0x20000
100bfbfe:	00 02 00 
100bfc01:	eb 1e                	jmp    0x100bfc21
100bfc03:	f6 47 0c 18          	test   BYTE PTR [edi+0xc],0x18
100bfc07:	8b 86 80 01 00 00    	mov    eax,DWORD PTR [esi+0x180]
100bfc0d:	74 07                	je     0x100bfc16
100bfc0f:	0d 40 00 04 00       	or     eax,0x40040
100bfc14:	eb 05                	jmp    0x100bfc1b
100bfc16:	0d 00 00 04 00       	or     eax,0x40000
100bfc1b:	89 86 80 01 00 00    	mov    DWORD PTR [esi+0x180],eax
100bfc21:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
100bfc24:	09 86 d8 02 00 00    	or     DWORD PTR [esi+0x2d8],eax
100bfc2a:	89 9e d4 02 00 00    	mov    DWORD PTR [esi+0x2d4],ebx
100bfc30:	8b 5f 18             	mov    ebx,DWORD PTR [edi+0x18]
100bfc33:	83 fb ff             	cmp    ebx,0xffffffff
100bfc36:	0f 85 17 ff ff ff    	jne    0x100bfb53
100bfc3c:	5f                   	pop    edi
100bfc3d:	5e                   	pop    esi
100bfc3e:	5b                   	pop    ebx
100bfc3f:	8b e5                	mov    esp,ebp
100bfc41:	5d                   	pop    ebp
100bfc42:	c3                   	ret
