
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c4db0 <.text+0xc3db0>:
100c4db0:	55                   	push   ebp
100c4db1:	8b ec                	mov    ebp,esp
100c4db3:	83 ec 14             	sub    esp,0x14
100c4db6:	53                   	push   ebx
100c4db7:	8b 5d 18             	mov    ebx,DWORD PTR [ebp+0x18]
100c4dba:	56                   	push   esi
100c4dbb:	57                   	push   edi
100c4dbc:	85 db                	test   ebx,ebx
100c4dbe:	7f 17                	jg     0x100c4dd7
100c4dc0:	68 54 5e 1d 10       	push   0x101d5e54
100c4dc5:	6a 04                	push   0x4
100c4dc7:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c4dcd:	83 c4 08             	add    esp,0x8
100c4dd0:	5f                   	pop    edi
100c4dd1:	5e                   	pop    esi
100c4dd2:	5b                   	pop    ebx
100c4dd3:	8b e5                	mov    esp,ebp
100c4dd5:	5d                   	pop    ebp
100c4dd6:	c3                   	ret
100c4dd7:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100c4dda:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
100c4ddd:	85 c9                	test   ecx,ecx
100c4ddf:	75 17                	jne    0x100c4df8
100c4de1:	68 78 5e 1d 10       	push   0x101d5e78
100c4de6:	6a 04                	push   0x4
100c4de8:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c4dee:	83 c4 08             	add    esp,0x8
100c4df1:	5f                   	pop    edi
100c4df2:	5e                   	pop    esi
100c4df3:	5b                   	pop    ebx
100c4df4:	8b e5                	mov    esp,ebp
100c4df6:	5d                   	pop    ebp
100c4df7:	c3                   	ret
100c4df8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c4dfb:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
100c4dfe:	f3 0f 10 5d 0c       	movss  xmm3,DWORD PTR [ebp+0xc]
100c4e03:	8b 76 1c             	mov    esi,DWORD PTR [esi+0x1c]
100c4e06:	f3 0f 10 40 20       	movss  xmm0,DWORD PTR [eax+0x20]
100c4e0b:	f3 0f 10 48 24       	movss  xmm1,DWORD PTR [eax+0x24]
100c4e10:	f3 0f 10 50 28       	movss  xmm2,DWORD PTR [eax+0x28]
100c4e15:	f3 0f 5c 41 20       	subss  xmm0,DWORD PTR [ecx+0x20]
100c4e1a:	f3 0f 5c 49 24       	subss  xmm1,DWORD PTR [ecx+0x24]
100c4e1f:	f3 0f 5c 51 28       	subss  xmm2,DWORD PTR [ecx+0x28]
100c4e24:	f3 0f 58 d8          	addss  xmm3,xmm0
100c4e28:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
100c4e2d:	f3 0f 58 c1          	addss  xmm0,xmm1
100c4e31:	f3 0f 10 4d 14       	movss  xmm1,DWORD PTR [ebp+0x14]
100c4e36:	f3 0f 58 ca          	addss  xmm1,xmm2
100c4e3a:	f3 0f 11 5d 18       	movss  DWORD PTR [ebp+0x18],xmm3
100c4e3f:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
100c4e44:	f3 0f 11 4d f8       	movss  DWORD PTR [ebp-0x8],xmm1
100c4e49:	f3 0f 11 5d ec       	movss  DWORD PTR [ebp-0x14],xmm3
100c4e4e:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
100c4e53:	f3 0f 11 4d f4       	movss  DWORD PTR [ebp-0xc],xmm1
100c4e58:	85 f6                	test   esi,esi
100c4e5a:	74 50                	je     0x100c4eac
100c4e5c:	bf 64 00 00 00       	mov    edi,0x64
100c4e61:	4b                   	dec    ebx
100c4e62:	53                   	push   ebx
100c4e63:	83 ec 0c             	sub    esp,0xc
100c4e66:	8b c4                	mov    eax,esp
100c4e68:	56                   	push   esi
100c4e69:	f3 0f 11 18          	movss  DWORD PTR [eax],xmm3
100c4e6d:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
100c4e72:	f3 0f 11 48 08       	movss  DWORD PTR [eax+0x8],xmm1
100c4e77:	e8 34 ff ff ff       	call   0x100c4db0
100c4e7c:	8b 76 20             	mov    esi,DWORD PTR [esi+0x20]
100c4e7f:	4f                   	dec    edi
100c4e80:	83 c4 14             	add    esp,0x14
100c4e83:	85 ff                	test   edi,edi
100c4e85:	7e 15                	jle    0x100c4e9c
100c4e87:	f3 0f 10 5d 18       	movss  xmm3,DWORD PTR [ebp+0x18]
100c4e8c:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
100c4e91:	f3 0f 10 4d f8       	movss  xmm1,DWORD PTR [ebp-0x8]
100c4e96:	85 f6                	test   esi,esi
100c4e98:	75 c8                	jne    0x100c4e62
100c4e9a:	eb 10                	jmp    0x100c4eac
100c4e9c:	68 a4 5e 1d 10       	push   0x101d5ea4
100c4ea1:	6a 04                	push   0x4
100c4ea3:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c4ea9:	83 c4 08             	add    esp,0x8
100c4eac:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100c4eaf:	f3 0f 7e 45 ec       	movq   xmm0,QWORD PTR [ebp-0x14]
100c4eb4:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
100c4eb7:	5f                   	pop    edi
100c4eb8:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
100c4ebb:	5e                   	pop    esi
100c4ebc:	5b                   	pop    ebx
100c4ebd:	66 0f d6 41 20       	movq   QWORD PTR [ecx+0x20],xmm0
100c4ec2:	89 41 28             	mov    DWORD PTR [ecx+0x28],eax
100c4ec5:	8b e5                	mov    esp,ebp
100c4ec7:	5d                   	pop    ebp
100c4ec8:	c3                   	ret
