
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10102c50 <.text+0x101c50>:
10102c50:	53                   	push   ebx
10102c51:	56                   	push   esi
10102c52:	57                   	push   edi
10102c53:	8b f9                	mov    edi,ecx
10102c55:	8b 0d 90 31 22 10    	mov    ecx,DWORD PTR ds:0x10223190
10102c5b:	85 c9                	test   ecx,ecx
10102c5d:	75 14                	jne    0x10102c73
10102c5f:	68 28 f4 1d 10       	push   0x101df428
10102c64:	6a 01                	push   0x1
10102c66:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10102c6c:	83 c4 08             	add    esp,0x8
10102c6f:	5f                   	pop    edi
10102c70:	5e                   	pop    esi
10102c71:	5b                   	pop    ebx
10102c72:	c3                   	ret
10102c73:	8b 41 3c             	mov    eax,DWORD PTR [ecx+0x3c]
10102c76:	83 c1 3c             	add    ecx,0x3c
10102c79:	85 c0                	test   eax,eax
10102c7b:	74 1e                	je     0x10102c9b
10102c7d:	0f 1f 00             	nop    DWORD PTR [eax]
10102c80:	3b f8                	cmp    edi,eax
10102c82:	74 0b                	je     0x10102c8f
10102c84:	8d 48 3c             	lea    ecx,[eax+0x3c]
10102c87:	8b 01                	mov    eax,DWORD PTR [ecx]
10102c89:	85 c0                	test   eax,eax
10102c8b:	75 f3                	jne    0x10102c80
10102c8d:	eb 0c                	jmp    0x10102c9b
10102c8f:	8b 47 3c             	mov    eax,DWORD PTR [edi+0x3c]
10102c92:	89 01                	mov    DWORD PTR [ecx],eax
10102c94:	c7 47 3c 00 00 00 00 	mov    DWORD PTR [edi+0x3c],0x0
10102c9b:	8b 4f 14             	mov    ecx,DWORD PTR [edi+0x14]
10102c9e:	85 c9                	test   ecx,ecx
10102ca0:	74 32                	je     0x10102cd4
10102ca2:	8b 41 1c             	mov    eax,DWORD PTR [ecx+0x1c]
10102ca5:	3b c7                	cmp    eax,edi
10102ca7:	75 08                	jne    0x10102cb1
10102ca9:	8b 47 20             	mov    eax,DWORD PTR [edi+0x20]
10102cac:	89 41 1c             	mov    DWORD PTR [ecx+0x1c],eax
10102caf:	eb 23                	jmp    0x10102cd4
10102cb1:	8d 48 20             	lea    ecx,[eax+0x20]
10102cb4:	8b 01                	mov    eax,DWORD PTR [ecx]
10102cb6:	85 c0                	test   eax,eax
10102cb8:	74 1a                	je     0x10102cd4
10102cba:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
10102cc0:	3b c7                	cmp    eax,edi
10102cc2:	74 0b                	je     0x10102ccf
10102cc4:	8d 48 20             	lea    ecx,[eax+0x20]
10102cc7:	8b 01                	mov    eax,DWORD PTR [ecx]
10102cc9:	85 c0                	test   eax,eax
10102ccb:	75 f3                	jne    0x10102cc0
10102ccd:	eb 05                	jmp    0x10102cd4
10102ccf:	8b 47 20             	mov    eax,DWORD PTR [edi+0x20]
10102cd2:	89 01                	mov    DWORD PTR [ecx],eax
10102cd4:	8b 5f 1c             	mov    ebx,DWORD PTR [edi+0x1c]
10102cd7:	85 db                	test   ebx,ebx
10102cd9:	0f 84 88 00 00 00    	je     0x10102d67
10102cdf:	90                   	nop
10102ce0:	f3 0f 10 05 34 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f34
10102ce7:	10 
10102ce8:	8b 73 20             	mov    esi,DWORD PTR [ebx+0x20]
10102ceb:	6a 64                	push   0x64
10102ced:	83 ec 0c             	sub    esp,0xc
10102cf0:	8b c4                	mov    eax,esp
10102cf2:	53                   	push   ebx
10102cf3:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
10102cf7:	f3 0f 10 05 38 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f38
10102cfe:	10 
10102cff:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
10102d04:	f3 0f 10 05 3c 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f3c
10102d0b:	10 
10102d0c:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
10102d11:	e8 9a 20 fc ff       	call   0x100c4db0
10102d16:	f3 0f 10 05 34 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f34
10102d1d:	10 
10102d1e:	83 c4 14             	add    esp,0x14
10102d21:	6a 64                	push   0x64
10102d23:	83 ec 0c             	sub    esp,0xc
10102d26:	8b c4                	mov    eax,esp
10102d28:	53                   	push   ebx
10102d29:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
10102d2d:	f3 0f 10 05 38 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f38
10102d34:	10 
10102d35:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
10102d3a:	f3 0f 10 05 3c 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f3c
10102d41:	10 
10102d42:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
10102d47:	e8 44 1f fc ff       	call   0x100c4c90
10102d4c:	83 c4 14             	add    esp,0x14
10102d4f:	c7 43 14 00 00 00 00 	mov    DWORD PTR [ebx+0x14],0x0
10102d56:	c7 43 20 00 00 00 00 	mov    DWORD PTR [ebx+0x20],0x0
10102d5d:	8b de                	mov    ebx,esi
10102d5f:	85 f6                	test   esi,esi
10102d61:	0f 85 79 ff ff ff    	jne    0x10102ce0
10102d67:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10102d6a:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x10000
10102d71:	00 01 00 
10102d74:	74 42                	je     0x10102db8
10102d76:	8b 1d cc 38 22 10    	mov    ebx,DWORD PTR ds:0x102238cc
10102d7c:	33 d2                	xor    edx,edx
10102d7e:	85 db                	test   ebx,ebx
10102d80:	7e 36                	jle    0x10102db8
10102d82:	33 c9                	xor    ecx,ecx
10102d84:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
10102d88:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
10102d8f:	00 
10102d90:	8b 35 c0 38 22 10    	mov    esi,DWORD PTR ds:0x102238c0
10102d96:	8b 44 31 08          	mov    eax,DWORD PTR [ecx+esi*1+0x8]
10102d9a:	3b 47 04             	cmp    eax,DWORD PTR [edi+0x4]
10102d9d:	75 0e                	jne    0x10102dad
10102d9f:	c7 44 31 08 00 00 00 	mov    DWORD PTR [ecx+esi*1+0x8],0x0
10102da6:	00 
10102da7:	8b 1d cc 38 22 10    	mov    ebx,DWORD PTR ds:0x102238cc
10102dad:	42                   	inc    edx
10102dae:	83 c1 18             	add    ecx,0x18
10102db1:	3b d3                	cmp    edx,ebx
10102db3:	7c db                	jl     0x10102d90
10102db5:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10102db8:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10102dbb:	85 c0                	test   eax,eax
10102dbd:	74 0d                	je     0x10102dcc
10102dbf:	6a 02                	push   0x2
10102dc1:	50                   	push   eax
10102dc2:	b9 78 22 23 10       	mov    ecx,0x10232278
10102dc7:	e8 44 d9 01 00       	call   0x10120710
10102dcc:	5f                   	pop    edi
10102dcd:	5e                   	pop    esi
10102dce:	5b                   	pop    ebx
10102dcf:	c3                   	ret
